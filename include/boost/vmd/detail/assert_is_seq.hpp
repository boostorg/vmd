#if !defined(BOOST_VMD_DETAIL_ASSERT_IS_SEQ_HPP)
#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ_HPP

#include <boost/preprocessor/debug/assert.hpp>
#include <boost/vmd/is_seq.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ_VC_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT(x) \
    BOOST_PP_IIF \
      ( \
      x, \
      BOOST_PP_EMPTY, \
      BOOST_VMD_DETAIL_ASSERT_IS_SEQ_VC_GEN_ERROR_OUTPUT \
      ) \
    () \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ_VC_GEN_ERROR_OUTPUT() \
    typedef char BOOST_VMD_ASSERT_IS_SEQ_ERROR[-1]; \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ_STATE_CHECK_RETURN_FAILURE(state) \
    BOOST_VMD_DETAIL_ASSERT_IS_SEQ_VC_CHECK_RETURN_FAILURE(state) \
/**/

#else

#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ_STATE_CHECK_RETURN_FAILURE(state) \
    BOOST_PP_ASSERT(state) \
/**/

#endif

#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ(seq) \
    BOOST_VMD_DETAIL_ASSERT_IS_SEQ_STATE_CHECK_RETURN_FAILURE \
      ( \
      BOOST_VMD_IS_SEQ(seq) \
      ) \
/**/

#define BOOST_VMD_DETAIL_ASSERT_IS_SEQ_D(d,seq) \
    BOOST_VMD_DETAIL_ASSERT_IS_SEQ_STATE_CHECK_RETURN_FAILURE \
      ( \
      BOOST_VMD_IS_SEQ(seq) \
      ) \
/**/

#endif /* BOOST_VMD_DETAIL_ASSERT_IS_SEQ_HPP */
