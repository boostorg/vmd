#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/elem.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_SEQ (73 (split) clear)(red)(green 44)
  
  BOOST_VMD_ASSERT(BOOST_PP_EQUAL(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ELEM(0,BOOST_PP_SEQ_ELEM(0,A_SEQ),BOOST_VMD_RETURN_AFTER,BOOST_VMD_TYPE_NUMBER)),72),BOOST_VMD_TEST_FAIL_NUMBER)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_NUMBER[-1];
  
#endif

  return boost::report_errors();
  
  }
