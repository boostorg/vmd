#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  BOOST_VMD_ASSERT(0,BOOST_VMD_VC_FAILURE)
  
#else
  
  typedef char BOOST_VMD_VC_FAILURE[-1];
   
#endif

  return boost::report_errors();
  
  }
