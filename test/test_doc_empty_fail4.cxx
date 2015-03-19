#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS && !BOOST_VMD_MSVC

  #define FMACRO(x,y) any_output
 
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(some_input FMACRO));
 
#else
  
  typedef char BOOST_VMD_IS_EMPTY_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
