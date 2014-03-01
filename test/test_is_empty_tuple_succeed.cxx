#include <boost/vmd/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS && !BOOST_VMD_MSVC

#define TN_GEN_ONE(p) (1)
#define TN_GEN_ZERO(p) (0)

#define TN_TEST_ONE_MORE(parameter,ens) \
		BOOST_PP_IF \
			( \
			BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM(1,0,ens),0), \
			TN_GEN_ONE, \
			TN_GEN_ZERO \
			) \
		(parameter) \
/**/

#define TN_TEST_ONE(parameter,ens) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		0, \
		TN_TEST_ONE_MORE(parameter,ens) \
		) \
/**/

   BOOST_TEST_EQ(TN_TEST_ONE(A,(1)),1);
   BOOST_TEST_EQ(TN_TEST_ONE(A,()),0);
	
#endif /* BOOST_PP_VARIADICS */

  return boost::report_errors();
  
  }
