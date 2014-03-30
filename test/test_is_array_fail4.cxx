#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  BOOST_TEST
  	(
  	BOOST_VMD_IS_ARRAY((3,(3,5,6) xc))
  	);
  
#else

  BOOST_ERROR("No variadic macro support");
   
#endif

  return boost::report_errors();
  
  }
