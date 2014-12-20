#if !defined(BOOST_VMD_DETAIL_DATA_EQUAL_COMMON_HPP)
#define BOOST_VMD_DETAIL_DATA_EQUAL_COMMON_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/array/elem.hpp>
#include <boost/preprocessor/array/size.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/replace.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_ARRAY(d,index,data) \
	BOOST_PP_ARRAY_ELEM(index,data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_LIST(d,index,data) \
	BOOST_PP_LIST_AT_D(d,data,index) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_SEQ(d,index,data) \
	BOOST_PP_SEQ_ELEM(index,data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_TUPLE(d,index,data) \
	BOOST_PP_TUPLE_ELEM(index,data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_ARRAY(data) \
	BOOST_PP_ARRAY_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_LIST(data) \
	BOOST_PP_LIST_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_SEQ(data) \
	BOOST_PP_SEQ_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_TUPLE(data) \
	BOOST_PP_TUPLE_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_ARRAY_D(d,data) \
	BOOST_PP_ARRAY_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_LIST_D(d,data) \
	BOOST_PP_LIST_SIZE_D(d,data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_SEQ_D(d,data) \
	BOOST_PP_SEQ_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_TUPLE_D(d,data) \
	BOOST_PP_TUPLE_SIZE(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM(d,index,data,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_ARRAY), \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_ARRAY, \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_LIST), \
			BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_LIST, \
			BOOST_PP_IIF \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_SEQ), \
				BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_SEQ, \
				BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM_TUPLE \
				) \
			) \
		) \
	(d,index,data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE(data,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_ARRAY), \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_ARRAY, \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_LIST), \
			BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_LIST, \
			BOOST_PP_IIF \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_SEQ), \
				BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_SEQ, \
				BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_TUPLE \
				) \
			) \
		) \
	(data) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_D(d,data,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_ARRAY), \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_ARRAY_D, \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_LIST), \
			BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_LIST_D, \
			BOOST_PP_IIF \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_SEQ), \
				BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_SEQ_D, \
				BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_TUPLE_D \
				) \
			) \
		) \
	(d,data) \
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

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_TYPE(state) \
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
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_TYPE(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_SECOND_ELEMENT(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_GET_ELEM \
		( \
		d, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_INDEX(state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_SECOND(state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_TYPE(state) \
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
