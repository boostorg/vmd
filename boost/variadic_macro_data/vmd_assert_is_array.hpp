#if !defined(VMD_ASSERT_IS_ARRAY_HPP)
#define VMD_ASSERT_IS_ARRAY_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_ARRAY(array)

#else

#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_array.hpp>

#if BOOST_VMD_MSVC

#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT_IS_TUPLE(array) \
    VMD_DETAIL_ASSERT_IS_ARRAY_VC_CHECK_RETURN_FAILURE VMD_DETAIL_ASSERT_IS_ARRAY_VC_IMP(array) \
/**/

#else

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/variadic_macro_data/vmd_tuple.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail.hpp>

#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT_IS_TUPLE(array) \
    BOOST_PP_ASSERT \
      ( \
      BOOST_PP_IIF \
        ( \
        BOOST_PP_EQUAL(2,BOOST_VMD_PP_TUPLE_SIZE(array)), \
        VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_ARRAY_FORM, \
        VMD_DETAIL_GEN_ZERO \
        ) \
      (array) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */
#endif /* !BOOST_VMD_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_ARRAY_HPP */
