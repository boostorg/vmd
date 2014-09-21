#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/identifier.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  	{
  
#if BOOST_PP_VARIADICS

	#define A_TUPLE (*,#,zzz)
	#define JDATA somevalue
	#define A_SEQ (num)($)(#)
	#define A_LIST (eeb,(grist,(&,BOOST_PP_NIL)))
	
	#define BOOST_VMD_MAP_VMD_TEST_0_zzz
	#define BOOST_VMD_MAP_VMD_TEST_1_somevalue
	#define BOOST_VMD_MAP_VMD_TEST_2_num
	#define BOOST_VMD_MAP_VMD_TEST_3_eeb
	#define BOOST_VMD_MAP_VMD_TEST_77_grist
	
	BOOST_VMD_ASSERT_IS_IDENTIFIER(BOOST_PP_TUPLE_ELEM(2,A_TUPLE),VMD_TEST_0_)
	BOOST_VMD_ASSERT_IS_IDENTIFIER(JDATA,VMD_TEST_1_)
	BOOST_VMD_ASSERT_IS_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ),VMD_TEST_2_)
	BOOST_VMD_ASSERT_IS_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,0),VMD_TEST_3_)
	BOOST_VMD_ASSERT_IS_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,1),VMD_TEST_77_)
	
#endif

  	return boost::report_errors();
  
  	}
