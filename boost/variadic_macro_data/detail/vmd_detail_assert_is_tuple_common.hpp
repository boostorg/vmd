#if !defined(VMD_DETAIL_ASSERT_IS_TUPLE_COMMON_HPP)
#define VMD_DETAIL_ASSERT_IS_TUPLE_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/variadic_macro_data/vmd_is_empty.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#define VMD_DETAIL_ASSERT_IS_TUPLE_VC_CHECK_RETURN_FAILURE(x) \
   BOOST_PP_ASSERT \
     ( \
     x \
     ) \
   BOOST_PP_IIF \
     ( \
     x, \
     BOOST_PP_EMPTY, \
     VMD_DETAIL_ASSERT_IS_TUPLE_VC_GEN_ERROR_OUTPUT \
     ) \
   () \
/**/

#define VMD_DETAIL_ASSERT_IS_TUPLE_VC_GEN_ERROR_OUTPUT() \
   typedef char BOOST_VMD_ASSERT_IS_TUPLE_ERROR[-1]; \
/**/

#define VMD_DETAIL_ASSERT_IS_TUPLE_GEN_ZERO(x) 0

#endif /* BOOST_VMD_MSVC */

#define VMD_DETAIL_ASSERT_IS_TUPLE_IS_NOT_AFTER(x) \
   BOOST_VMD_IS_EMPTY(VMD_DETAIL_ASSERT_IS_TUPLE_EXPAND_AFTER x BOOST_PP_EMPTY()) \
/**/

#define VMD_DETAIL_ASSERT_IS_TUPLE_EXPAND_AFTER(...) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA */
#endif /* VMD_DETAIL_ASSERT_IS_TUPLE_COMMON_HPP */
