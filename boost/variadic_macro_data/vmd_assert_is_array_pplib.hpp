#if !defined(VMD_ASSERT_IS_ARRAY_PPLIB_HPP)
#define VMD_ASSERT_IS_ARRAY_PPLIB_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA && !BOOST_VMD_MSVC

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_array.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail.hpp>

#define BOOST_VMD_ASSERT_IS_ARRAY(x) \
    BOOST_VMD_ASSERT_IS_TUPLE(x) \
    BOOST_PP_ASSERT \
      ( \
      BOOST_PP_IIF \
        ( \
        BOOST_PP_EQUAL(2,BOOST_PP_TUPLE_SIZE(x)), \
        VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_ARRAY_FORM, \
        VMD_DETAIL_GEN_ZERO \
        ) \
      (x) \
      ) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA && !BOOST_VMD_MSVC */
#endif /* VMD_ASSERT_IS_ARRAY_PPLIB_HPP */
