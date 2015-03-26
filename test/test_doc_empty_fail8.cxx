#include <boost/vmd/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

#if !BOOST_VMD_MSVC

  #define FMACRO1(parameter) FMACRO3 parameter()
  #define FMACRO2() ()
  #define FMACRO3() 1
 
  int x = FMACRO1(FMACRO2);

#else
  
  typedef char BOOST_VMD_GENERATE_ERROR[-1];
   
#endif

#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
