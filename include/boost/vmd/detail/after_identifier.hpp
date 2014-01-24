#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/is_begin_parens.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_number.hpp>
#include <boost/vmd/detail/after_identifier_common.hpp>
#include <boost/vmd/detail/after_identifier_main.hpp>
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
			BOOST_VMD_IS_BEGIN_PARENS(extra) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_GET_NUMBER_AMT \
		) \
	(extra) \
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
	BOOST_PP_TUPLE_ELEM(4,state) \
	) \
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
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_BEGIN_CINFO(__VA_ARGS__) \
				) \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP */
