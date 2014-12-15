#if !defined(BOOST_VMD_DETAIL_DATA_EQUAL_COMMON_HPP)
#define BOOST_VMD_DETAIL_DATA_EQUAL_COMMON_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/array/elem.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/replace.hpp>
#include <boost/vmd/detail/match_identifier.hpp>

#define BOOST_VMD_REGISTER_BOOST_PP_LIST_AT_D (BOOST_PP_LIST_AT_D)
#define BOOST_VMD_DETECT_BOOST_PP_LIST_AT_D_BOOST_PP_LIST_AT_D

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_LIST(d,index,data,eaccess) \
	eaccess(d,data,index) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_OTHER(d,index,data,eaccess) \
	eaccess(index,data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM(d,index,data,eaccess) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(eaccess,BOOST_PP_LIST_AT_D), \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_LIST, \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_OTHER \
		) \
	(d,index,data,eaccess) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_RESULT(state) \
	BOOST_PP_TUPLE_ELEM(0,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_FIRST(state) \
	BOOST_PP_TUPLE_ELEM(1,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_SECOND(state) \
	BOOST_PP_TUPLE_ELEM(2,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_SIZE(state) \
	BOOST_PP_TUPLE_ELEM(3,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_CALL(state) \
	BOOST_PP_TUPLE_ELEM(4,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_INDEX(state) \
	BOOST_PP_TUPLE_ELEM(5,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_FIRST_ELEMENT(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM \
		( \
		d, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_INDEX(state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_FIRST(state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_CALL(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_SECOND_ELEMENT(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM \
		( \
		d, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_INDEX(state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_SECOND(state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_CALL(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_PRED(d,state) \
	BOOST_PP_BITAND \
		( \
		BOOST_PP_EQUAL_D \
			( \
			d, \
			BOOST_VMD_DETAIL_DATA_EQUAL_STATE_RESULT(state), \
			1 \
			), \
		BOOST_PP_NOT_EQUAL_D \
			( \
			d, \
			BOOST_VMD_DETAIL_DATA_EQUAL_STATE_INDEX(state), \
			BOOST_VMD_DETAIL_DATA_EQUAL_STATE_SIZE(state) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_OP_SUCCESS(d,state) \
	BOOST_PP_TUPLE_REPLACE_D \
		( \
		d, \
		state, \
		5, \
		BOOST_PP_INC(BOOST_VMD_DETAIL_DATA_EQUAL_STATE_INDEX(state)) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_OP_FAILURE(d,state) \
	BOOST_PP_TUPLE_REPLACE_D \
		( \
		d, \
		state, \
		0, \
		0 \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_DATA_EQUAL_COMMON_HPP */
