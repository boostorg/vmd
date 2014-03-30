#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/comparison/less_equal.hpp>
#include <boost/preprocessor/comparison/not_equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/seq.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_number.hpp>
#include <boost/vmd/detail/after_identifier_common.hpp>
#include <boost/vmd/detail/after_identifier_main.hpp>
#include <boost/vmd/detail/after_identifier_re.hpp>
#include <boost/vmd/detail/paren_or_empty_or_number.hpp>

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
			BOOST_VMD_IS_BEGIN_TUPLE(extra) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER_AMT \
		) \
	(extra) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_BEGIN_CAT(state) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_, \
		BOOST_PP_DEC(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_SEQ_SIZE(state)) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE_RESULT(d,state) \
	BOOST_VMD_DETAIL_AFTER_IDENTIFIER_BEGIN_CAT(state) \
		( \
		d, \
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
		(state), \
		BOOST_PP_TUPLE_ELEM(5,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE(d,state) \
	BOOST_PP_NOT_EQUAL \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE_RESULT(d,state) \
			), \
		0 \
		) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CHECK_MAX(d,state) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_ASSERT_IS_SEQ_D(d,BOOST_PP_TUPLE_ELEM(4,state)), \
		BOOST_PP_IIF \
			( \
			BOOST_PP_LESS_EQUAL_D \
				( \
				d, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_SEQ_SIZE(state), \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAXIMUM \
				), \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE, \
			BOOST_VMD_GEN_ZERO \
			) \
		(d,state) \
		) \
/**/

#else

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CHECK_MAX(d,state) \
	BOOST_VMD_ASSERT_IS_SEQ_D(d,BOOST_PP_TUPLE_ELEM(4,state)) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_LESS_EQUAL_D \
			( \
			d, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_SEQ_SIZE(state), \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAXIMUM \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_RECURSE, \
		BOOST_VMD_GEN_ZERO \
		) \
	(d,state) \
/**/

#endif

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FID(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(BOOST_PP_TUPLE_ELEM(4,state)), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CHECK_MAX, \
		BOOST_VMD_GEN_ZERO \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_TEST(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state), \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER(BOOST_PP_TUPLE_ELEM(4,state)) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FID \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_TEST(d,state), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE \
		) \
	(state), \
	BOOST_PP_TUPLE_ELEM(4,state), \
	BOOST_PP_TUPLE_ELEM(5,state) \
	) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_EINFO_DATA(...) \
	BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_END_CINFO(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			3 \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_EINFO_DATA, \
		BOOST_VMD_GEN_ONE \
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
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_BEGIN_CINFO(__VA_ARGS__), \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_END_CINFO(__VA_ARGS__) \
				) \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP */
