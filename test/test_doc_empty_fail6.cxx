#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if !BOOST_VMD_MSVC

  #define FMACRO(x,y) 1
  
  BOOST_TEST(FMACRO(1));
 
#else
  
  typedef char BOOST_VMD_GENERATE_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
