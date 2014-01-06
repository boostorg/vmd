#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/comparison/greater.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/logical/nor.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/seq.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/preprocessor/variadic/to_tuple.hpp>
#include <boost/vmd/assert_is_seq.hpp>
#include <boost/vmd/assert_is_tuple.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/is_begin_parens.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_number.hpp>
#include <boost/vmd/detail/paren_or_empty_or_number.hpp>

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PARENS ()

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FIRST_ARG(keys) \
    BOOST_VMD_ASSERT_IS_TUPLE(keys) \
    keys \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_TUPLE(keys) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_PARENS(keys), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FIRST_ARG, \
		BOOST_PP_VARIADIC_TO_TUPLE \
		) \
	(keys) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CAT(param,key) \
    	BOOST_PP_CAT \
    		( \
   			BOOST_VMD_MAP_, \
    		BOOST_PP_CAT \
    			( \
    			key, \
   				param \
    			) \
    		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PRED(d,state) \
	BOOST_PP_NOR \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_PP_TUPLE_ELEM(3,state) \
			), \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_TUPLE_ELEM(2,state), \
			BOOST_PP_TUPLE_SIZE \
				( \
				BOOST_PP_TUPLE_ELEM(1,state) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state) \
	BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CAT \
		( \
		BOOST_PP_TUPLE_ELEM(0,state), \
		BOOST_PP_TUPLE_ELEM \
			( \
			BOOST_PP_TUPLE_ELEM(2,state), \
			BOOST_PP_TUPLE_ELEM(1,state) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND(state) \
	(BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)),BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state)) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE(state) \
	(0,) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER_AMT(extra) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_NUMBER(extra), \
		extra, \
		1 \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER(extra) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_VMD_IS_EMPTY(extra), \
			BOOST_VMD_IS_BEGIN_PARENS(extra) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER_AMT \
		) \
	(extra) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_TAIL(state) \
	BOOST_PP_SEQ_TAIL(BOOST_PP_TUPLE_ELEM(4,state)) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE_RESULT(state) \
	BOOST_VMD_DETAIL_AFTER_IDENTIFIER \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state), \
		BOOST_PP_SEQ_ELEM(0,BOOST_PP_TUPLE_ELEM(4,state)), \
		BOOST_PP_IIF \
			( \
			BOOST_PP_EQUAL \
				( \
				BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(4,state)), \
				1 \
				), \
			BOOST_VMD_GEN_EMPTY, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_TAIL \
			) \
		(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE(state) \
	BOOST_VMD_ASSERT_IS_SEQ(BOOST_PP_TUPLE_ELEM(4,state)) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE_RESULT(state) \
				), \
			0 \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND \
		) \
	(state) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FID(state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_PARENS(BOOST_PP_TUPLE_ELEM(4,state)), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE \
		) \
	(state) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state), \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER(BOOST_PP_TUPLE_ELEM(4,state)) \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FID \
		) \
	(state), \
	BOOST_PP_TUPLE_ELEM(4,state) \
	) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND(parameter,keys) \
	(0,) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CINFO_DATA(...) \
	BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CINFO(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_GREATER \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			1 \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CINFO_DATA, \
		BOOST_VMD_GEN_EMPTY \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER(parameter,...) \
	BOOST_PP_TUPLE_ELEM \
		( \
		3, \
		BOOST_PP_WHILE \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PRED, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP, \
				( \
				parameter, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_TUPLE \
					( \
					BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__) \
					), \
				0, \
				(0,), \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CINFO(__VA_ARGS__) \
				) \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP */
