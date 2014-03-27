#if !defined(BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_HPP)
#define BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_HPP

#include <boost/preprocessor/debug/assert.hpp>
#include <boost/vmd/is_array.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_VC_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT \
      ( \
      x \
      ) \
    BOOST_PP_IIF \
      ( \
      x, \
      BOOST_PP_EMPTY, \
      BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_VC_GEN_ERROR_OUTPUT \
      ) \
    () \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_VC_GEN_ERROR_OUTPUT() \
    typedef char BOOST_VMD_IS_ARRAY_ASSERT_ERROR[-1]; \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_VC_CHECK_RETURN_FAILURE \
    	( \
    	BOOST_VMD_IS_ARRAY(array) \
    	) \
/**/

#else

#define BOOST_VMD_DETAIL_ASSERT_IS_ARRAY(array) \
    BOOST_PP_ASSERT \
      	( \
      	BOOST_VMD_IS_ARRAY(array) \
      	) \
/**/

#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_DETAIL_ASSERT_IS_ARRAY_HPP */
