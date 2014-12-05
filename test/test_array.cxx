#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array/array.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/array/elem.hpp>
#include <boost/preprocessor/seq/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY (7,(5,7,f,x,%,$,U))
  #define AN_ARRAY_PLUS (4,(mmf,34,^^,!)) 456
  #define PLUS_ANARRAY yyt (2,(j,ii%))
  #define JDATA ggh
  #define KDATA (2,(a,b)) name
  #define A_SEQ ((1,(25)))((1,(26)))((1,(27)))
#if !BOOST_VMD_MSVC_V8
  #define AN_EMPTY_ARRAY (0,())
  #define AN_EMPTY_ARRAY_PLUS (0,()) 46
#endif
  
  BOOST_TEST
  	(
  	!BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY((4,(x,3,e,2)))
  		)
  	);
  	
  BOOST_TEST_EQ
  	(
  	BOOST_PP_ARRAY_ELEM
  		(
  		3,
  		BOOST_VMD_ARRAY((6,(x,3,e,2,(4,(x,3,e,2)),$)))
  		),
  	2
  	);
  	
  BOOST_TEST
  	(
  	!BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(AN_ARRAY)
  		)
  	);
	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(AN_ARRAY_PLUS)
  		)
  	);
	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(PLUS_ANARRAY)
  		)
  	);
	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(JDATA)
  		)
  	);
	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(KDATA)
  		)
  	);
  	
  BOOST_TEST
  	(
  	!BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(BOOST_PP_SEQ_ELEM(2,A_SEQ))
  		)
  	);
  	
	
#if !BOOST_VMD_MSVC_V8
  BOOST_TEST
  	(
  	!BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(AN_EMPTY_ARRAY)
  		)
  	);
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
  		BOOST_VMD_ARRAY(AN_EMPTY_ARRAY_PLUS)
  		)
  	);
#endif
	
#endif

  return boost::report_errors();
  
  }
