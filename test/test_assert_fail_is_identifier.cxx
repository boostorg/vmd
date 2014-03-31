#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_identifier.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define JDATA somevalue
  
  #define BOOST_VMD_MAP_VMD_TEST_0_zzz
  #define BOOST_VMD_MAP_VMD_TEST_1_somevalue
  
  BOOST_VMD_ASSERT(BOOST_VMD_IS_IDENTIFIER(JDATA,VMD_TEST_0_),BOOST_VMD_TEST_FAIL_IS_IDENTIFIER)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_IS_IDENTIFIER[-1];
  
#endif

  return boost::report_errors();
  
  }
