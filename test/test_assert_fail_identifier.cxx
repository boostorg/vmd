#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/identifier.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_TUPLE (*,#,zzz ())
  
  #define BOOST_VMD_MAP_VMD_TEST_0_zzz
  
  BOOST_VMD_ASSERT
  	(
  	BOOST_PP_EQUAL
  		(
		BOOST_PP_TUPLE_ELEM
			(
			0,
			BOOST_VMD_IDENTIFIER(BOOST_PP_TUPLE_ELEM(2,A_TUPLE),(DUMMY1,VMD_TEST_0_))
			),
		1
  		),
  	BOOST_VMD_TEST_FAIL_IDENTIFIER
  	)
  	
#else
  
  typedef char BOOST_VMD_TEST_FAIL_IDENTIFIER[-1];
  
#endif

  return boost::report_errors();
  
  }
