#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

#if !BOOST_VMD_MSVC

  #define FMACRO6(param1,param2) ( any_number_of_tuple_elements )
  
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(FMACRO6));
 
#else
  
  typedef char BOOST_VMD_GENERATE_ERROR[-1];
   
#endif

#endif

  return boost::report_errors();
  
  }
