#include <boost/vmd/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

#if !BOOST_VMD_MSVC

  #define SMACRO() 1
 
  BOOST_TEST(SMACRO(1));
 
#else
  
  typedef char BOOST_VMD_IS_EMPTY_ERROR[-1];
   
#endif

#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
