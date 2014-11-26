#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#include <boost/vmd/assert.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY_PLUS (4,(mmf,34,^^,!)) 156

  BOOST_VMD_ASSERT(BOOST_PP_EQUAL(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_ARRAY(AN_ARRAY_PLUS,BOOST_VMD_RETURN_AFTER)),256),BOOST_VMD_TEST_FAIL_ARRAY)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_ARRAY[-1];
  
#endif

  return boost::report_errors();
  
  }
