#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/seq/begin_seq.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_SEQ_PLUS (mmf)(34)(^^)(!) 456
  
  BOOST_VMD_ASSERT(BOOST_PP_EQUAL(BOOST_PP_SEQ_ELEM(1,BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_BEGIN_SEQ(A_SEQ_PLUS,BOOST_VMD_RETURN_AFTER))),456),BOOST_VMD_TEST_FAIL_SEQ)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_SEQ[-1];
  
#endif

  return boost::report_errors();
  
  }
