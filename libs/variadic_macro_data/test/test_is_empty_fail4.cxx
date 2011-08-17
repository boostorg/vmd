#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/variadic_macro_data/vmd.hpp>
#else
#include <boost/variadic_macro_data/vmd_is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS && !BOOST_VMD_MSVC

  #define FUNC_GEN() (y,z)
  
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(FUNC_GEN));
  
#else

  typedef char BOOST_VMD_IS_EMPTY_ERROR[-1];
   
#endif /* BOOST_VMD_VARIADICS */

  return boost::report_errors();
  
  }
