#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_empty_tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_PTUPLE (*,#,44)
  
  BOOST_VMD_ASSERT(BOOST_VMD_IS_EMPTY_TUPLE(A_PTUPLE),BOOST_VMD_TEST_FAIL_IS_EMPTY_TUPLE)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_IS_EMPTY_TUPLE[-1];
  
#endif

  return boost::report_errors();
  
  }
