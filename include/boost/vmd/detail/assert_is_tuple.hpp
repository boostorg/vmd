#if !defined(BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_HPP)
#define BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_HPP

#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/is_empty.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_VC_CHECK_RETURN_FAILURE(x) \
   BOOST_PP_ASSERT \
     ( \
     x \
     ) \
   BOOST_PP_IIF \
     ( \
     x, \
     BOOST_PP_EMPTY, \
     BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_VC_GEN_ERROR_OUTPUT \
     ) \
   () \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_VC_GEN_ERROR_OUTPUT() \
   typedef char BOOST_VMD_ASSERT_IS_TUPLE_ERROR[-1]; \
/**/

#endif /* BOOST_VMD_MSVC */

#define BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_IS_NOT_AFTER(x) \
   BOOST_VMD_IS_EMPTY(BOOST_VMD_GEN_EMPTY x BOOST_PP_EMPTY()) \
/**/

#endif /* BOOST_VMD_DETAIL_ASSERT_IS_TUPLE_HPP */
