#if !defined(BOOST_VMD_DETAIL_ASSERT_HPP)
#define BOOST_VMD_DETAIL_ASSERT_HPP

#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_ASSERT_VC_GEN_ERROR_OUTPUT() \
    typedef char BOOST_VMD_ASSERT_ERROR[-1]; \
/**/

#define BOOST_VMD_DETAIL_ASSERT(cond) \
	BOOST_PP_ASSERT(cond) \
    BOOST_PP_IF \
      ( \
      x, \
      BOOST_PP_EMPTY, \
      BOOST_VMD_DETAIL_ASSERT_VC_GEN_ERROR_OUTPUT \
      ) \
    () \
/**/

#else

#define BOOST_VMD_DETAIL_ASSERT(cond) \
	BOOST_PP_ASSERT(cond) \
/**/

#endif

#endif /* BOOST_VMD_DETAIL_ASSERT_HPP */
