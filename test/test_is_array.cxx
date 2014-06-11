#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY (7,(5,7,f,x,%,$,U))
#if !BOOST_VMD_MSVC_V8  
  #define AN_EMPTY_ARRAY (0,())
#endif
  
  BOOST_TEST
  	(
  	BOOST_VMD_IS_ARRAY((4,(x,3,e,2)))
  	);
  	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_ARRAY((6,(x,3,e,2,(4,(x,3,e,2)),$)))
  	);
  	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_ARRAY(AN_ARRAY)
  	);
	
#if !BOOST_VMD_MSVC_V8
  BOOST_TEST
  	(
  	BOOST_VMD_IS_ARRAY(AN_EMPTY_ARRAY)
  	);
#endif
	
#endif

  return boost::report_errors();
  
  }
