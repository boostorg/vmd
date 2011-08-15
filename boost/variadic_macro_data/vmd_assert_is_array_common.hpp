#if !defined(VMD_ASSERT_IS_ARRAY_COMMON_HPP)
#define VMD_ASSERT_IS_ARRAY_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_ARRAY(array)

#else

#if BOOST_VMD_MSVC

#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_array.hpp>

#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT_IS_TUPLE(array) \
    VMD_DETAIL_ASSERT_IS_ARRAY_VC_CHECK_RETURN_FAILURE VMD_DETAIL_ASSERT_IS_ARRAY_VC_IMP(array) \
/**/

#endif /* BOOST_VMD_MSVC */
#endif /* !BOOST_VMD_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_ARRAY_COMMON_HPP */
