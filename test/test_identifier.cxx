#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/identifier.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_TUPLE (*,#,zzz ())
  #define A_TUPLE2 (*,#,zzz somevalue ())
  #define A_TUPLE3 (*,#,zzz somevalue eeb num ())
  #define A_TUPLE4 (*,#,zzz somevalue eeb num 2 3 117 ())
  #define JDATA somevalue
  #define A_SEQ (num (split) clear)($)(#)
  #define A_LIST (eeb (5),(grist,(&,BOOST_PP_NIL)))
  #define PEMPTY
  #define PPAREN (a b c)

  #define BOOST_VMD_REGISTER_zzz (zzz)
  #define BOOST_VMD_DETECT_zzz_zzz
  #define BOOST_VMD_REGISTER_somevalue (somevalue)
  #define BOOST_VMD_DETECT_somevalue_somevalue
  #define BOOST_VMD_REGISTER_num (num)
  #define BOOST_VMD_DETECT_num_num
  #define BOOST_VMD_REGISTER_eeb (eeb)
  #define BOOST_VMD_DETECT_eeb_eeb
  #define BOOST_VMD_REGISTER_grist (grist)
  #define BOOST_VMD_DETECT_grist_grist
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(zzz (),(dummy1,zzz),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	1
  	);
  	
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_TUPLE_ELEM(2,A_TUPLE),(dummy1,zzz),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	1
  	);
  	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_BEGIN_TUPLE
  		(
  		BOOST_PP_TUPLE_ELEM
  			(
  			1,
  			BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_TUPLE_ELEM(2,A_TUPLE),zzz,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  			)
  		)
  	);
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(JDATA,(dummy1,dummy2,somevalue,dummy3),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	2
  	);
  	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
  		BOOST_PP_TUPLE_ELEM
  			(
  			1,
  			BOOST_VMD_BEGIN_IDENTIFIER(JDATA,somevalue,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  			)
  		)
  	);
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ),num,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	0
  	);
  	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_BEGIN_TUPLE
  		(
  		BOOST_PP_TUPLE_ELEM
  			(
  			1,
  			BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ),BOOST_VMD_RETURN_AFTER)
  			)
  		)
  	);
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,0),(eeb,zzz),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	0
  	);
  		
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		0,
  		BOOST_PP_TUPLE_ELEM
  			(
  			1,
  			BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,0),(eeb),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  			)
  		),
  	5
  	);
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,1),grist,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	0
  	);
  
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
		BOOST_PP_TUPLE_ELEM
			(
			1,
			BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,1),grist,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
			)
  		)
  	);
  	
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
		BOOST_PP_TUPLE_ELEM
			(
			0,
			BOOST_VMD_BEGIN_IDENTIFIER(JDATA,grist,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
			)
  		)
  	);
  
  BOOST_TEST
  	(
  	BOOST_VMD_IS_EMPTY
  		(
		BOOST_PP_TUPLE_ELEM
			(
			2,
			BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_LIST_AT(A_LIST,1),eeb,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
			)
  		)
  	);
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER(BOOST_PP_SEQ_ELEM(0,A_SEQ),(grist,num,whatever),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX)
  		),
  	1
  	);
  	
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER
  			(
  			zzz somevalue (),
  			(zzz),
  			BOOST_VMD_RETURN_AFTER,
  			BOOST_VMD_RETURN_INDEX
  			)
  		),
  	0
  	);
  
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER
  			(
  			zzz somevalue (),
  			(vmd_test_30,num,zzz),
  			BOOST_VMD_RETURN_AFTER,
  			BOOST_VMD_RETURN_INDEX
  			)
  		),
  	2
  	);
  	
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER
  			(
  			BOOST_PP_TUPLE_ELEM
  				(
  				2,
  				A_TUPLE3
  				),
  			(vmd_test_30,num,zzz),
  			BOOST_VMD_RETURN_AFTER,
  			BOOST_VMD_RETURN_INDEX
  			)
  		),
  	2
  	);
  	
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER
  			(
  			zzz somevalue eeb num 2 3 117 (),
  			zzz,
  			BOOST_VMD_RETURN_AFTER,
  			BOOST_VMD_RETURN_INDEX
  			)
  		),
  	0
  	);
  	
  BOOST_TEST_EQ
  	(
  	BOOST_PP_TUPLE_ELEM
  		(
  		2,
  		BOOST_VMD_BEGIN_IDENTIFIER
  			(
  			BOOST_PP_TUPLE_ELEM
  				(
  				2,
  				A_TUPLE4
  				),
  			(grist,num,zzz),
  			BOOST_VMD_RETURN_AFTER,
  			BOOST_VMD_RETURN_INDEX
  			)
  		),
  	2
  	);
  	
	BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_BEGIN_IDENTIFIER(PEMPTY,zzz,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX))));
	BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_IDENTIFIER(PEMPTY,eeb,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX))));
	
	BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_BEGIN_IDENTIFIER(PPAREN,num,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX))));
	BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_IDENTIFIER(PPAREN,num,BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX))));
	
    BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_IDENTIFIER(zzz,(eeb),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX))));
    BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_IDENTIFIER(zzz (here),(there),BOOST_VMD_RETURN_AFTER,BOOST_VMD_RETURN_INDEX))));
	
#endif

  return boost::report_errors();
  
  }
