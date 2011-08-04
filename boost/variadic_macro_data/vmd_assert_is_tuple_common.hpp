#if !defined(VMD_ASSERT_IS_TUPLE_COMMON_HPP)
#define VMD_ASSERT_IS_TUPLE_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_TUPLE(x)

#else

#include <boost/preprocessor/control/iif.hpp>

#if !BOOST_VMD_MSVC

#include <boost/preprocessor/debug/assert.hpp>

#endif

#include <boost/variadic_macro_data/vmd_is_tuple_begin.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_tuple.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_ASSERT_IS_TUPLE(x) \
   VMD_DETAIL_ASSERT_IS_TUPLE_VC_CHECK_RETURN_FAILURE \
     ( \
     BOOST_PP_IIF \
       ( \
       BOOST_VMD_IS_TUPLE_BEGIN(x), \
       VMD_DETAIL_ASSERT_IS_TUPLE_IS_NOT_AFTER, \
       VMD_DETAIL_GEN_ZERO \
       ) \
     (x) \
     ) \
/**/

#else

#define BOOST_VMD_ASSERT_IS_TUPLE(x) \
   BOOST_PP_ASSERT \
     ( \
     BOOST_PP_IIF \
       ( \
       BOOST_VMD_IS_TUPLE_BEGIN(x), \
       VMD_DETAIL_ASSERT_IS_TUPLE_IS_NOT_AFTER, \
       VMD_DETAIL_GEN_ZERO \
       ) \
     (x) \
     ) \
/**/

#endif

#endif /* BOOST_VMD_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_TUPLE_COMMON_HPP */
