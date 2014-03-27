#if !defined(BOOST_VMD_DETAIL_ASSERT_IS_LIST_HPP)
#define BOOST_VMD_DETAIL_ASSERT_IS_LIST_HPP

#include <boost/preprocessor/debug/assert.hpp>
#include <boost/vmd/is_list.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_DETAIL_ASSERT_IS_LIST_CHECK_RETURN_FAILURE(x) \
    BOOST_VMD_DETAIL_ASSERT_IS_LIST_VC_CHECK_RETURN_FAILURE(x) \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_LIST_VC_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT \
      ( \
      x \
      ) \
    BOOST_PP_IIF \
      ( \
      x, \
      BOOST_PP_EMPTY, \
      BOOST_VMD_DETAIL_ASSERT_IS_LIST_VC_GEN_ERROR_OUTPUT \
      ) \
    () \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_LIST_VC_GEN_ERROR_OUTPUT() \
    typedef char BOOST_VMD_ASSERT_IS_LIST_ERROR[-1]; \
/**/

#else

#define BOOST_VMD_DETAIL_ASSERT_IS_LIST_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT(x) \
/**/

#endif /* BOOST_VMD_MSVC */

#define BOOST_VMD_DETAIL_ASSERT_IS_LIST(list) \
    BOOST_VMD_DETAIL_ASSERT_IS_LIST_CHECK_RETURN_FAILURE \
      ( \
      BOOST_VMD_IS_LIST(list) \
      ) \
/**/

#endif /* BOOST_VMD_DETAIL_ASSERT_IS_LIST_HPP */
