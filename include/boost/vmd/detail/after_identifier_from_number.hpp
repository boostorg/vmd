#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/comparison/less_equal.hpp>
#include <boost/preprocessor/comparison/not_equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/seq.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_empty_tuple.hpp>
#include <boost/vmd/detail/after_identifier_common.hpp>
#include <boost/vmd/detail/after_identifier_from_number_re.hpp>
#include <boost/vmd/detail/after_identifier_main.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_BEGIN_CAT(state) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_, \
		BOOST_PP_DEC(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_SEQ_SIZE(state)) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_RECURSE_RESULT(d,state) \
	BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_BEGIN_CAT(state) \
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
		(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_RECURSE(d,state) \
	BOOST_PP_NOT_EQUAL \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_RECURSE_RESULT(d,state) \
			), \
		0 \
		) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_CHECK_MAX(d,state) \
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
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_RECURSE, \
			BOOST_VMD_GEN_ZERO \
			) \
		(d,state) \
		) \
/**/

#else

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_CHECK_MAX(d,state) \
	BOOST_VMD_ASSERT_IS_SEQ_D(d,BOOST_PP_TUPLE_ELEM(4,state)) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_LESS_EQUAL_D \
			( \
			d, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_SEQ_SIZE(state), \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAXIMUM \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_RECURSE, \
		BOOST_VMD_GEN_ZERO \
		) \
	(d,state) \
/**/

#endif

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_FID(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(BOOST_PP_TUPLE_ELEM(4,state)), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_CHECK_MAX, \
		BOOST_VMD_GEN_ZERO \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_TEST(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_FID \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP_TEST(d,state), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE \
		) \
	(state), \
	BOOST_PP_TUPLE_ELEM(4,state) \
	) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_LOOP(parameter,...) \
	BOOST_PP_TUPLE_ELEM \
		( \
		3, \
		BOOST_PP_WHILE \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PRED, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_OP, \
				( \
				parameter, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_TUPLE \
					( \
					BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__) \
					), \
				0, \
				(0,), \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_BEGIN_CINFO(__VA_ARGS__) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER(parameter,...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HAS_KEYS(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_LOOP, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND \
		) \
	(parameter,__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER_HPP */
