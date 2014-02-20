#if !defined(BOOST_VMD_DETAIL_IS_SEQ_HPP)
#define BOOST_VMD_DETAIL_IS_SEQ_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/push_back.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/parens.hpp>

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_INIT(seq) \
	BOOST_PP_TUPLE_PUSH_BACK \
		( \
		BOOST_VMD_PARENS(seq), \
		BOOST_VMD_IS_SEQ_CONTINUE \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_CONTINUE(state) \
    BOOST_VMD_IS_EMPTY \
		( \
		BOOST_PP_CAT \
      		( \
      		BOOST_VMD_DETAIL_IS_SEQ_CHELPER_, \
      		BOOST_PP_TUPLE_ELEM(2,state) \
      		) \
      	BOOST_PP_EMPTY() \
      	) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_SUCCESS(state) \
	BOOST_VMD_IS_EMPTY \
      	( \
      	BOOST_PP_CAT \
      		( \
      		BOOST_VMD_DETAIL_IS_SEQ_SHELPER_, \
      		BOOST_PP_TUPLE_ELEM(2,state) \
      		) \
      	BOOST_PP_EMPTY() \
      	) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_FAILURE(state) \
    BOOST_VMD_IS_EMPTY \
      	( \
      	BOOST_PP_CAT \
      		( \
      		BOOST_VMD_DETAIL_IS_SEQ_FHELPER_, \
      		BOOST_PP_TUPLE_ELEM(2,state) \
      		) \
      	BOOST_PP_EMPTY() \
      	) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_PRED(d,state) \
	BOOST_VMD_DETAIL_IS_SEQ_STATE_CONTINUE(state) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_FAILURE(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_VMD_IS_SEQ_FAILURE \
	) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_SUCCESS(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_VMD_IS_SEQ_SUCCESS \
	) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_CONTINUE(d,state) \
	BOOST_PP_TUPLE_PUSH_BACK \
		( \
		BOOST_VMD_PARENS \
			( \
			BOOST_PP_TUPLE_ELEM(1,state) \
			), \
		BOOST_VMD_IS_SEQ_CONTINUE \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_CHECK_REST(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
      		BOOST_PP_TUPLE_ELEM(1,state) \
			), \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_SUCCESS, \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_CONTINUE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_CHECK_SIZE(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			1, \
			BOOST_PP_TUPLE_SIZE \
				( \
	      		BOOST_PP_TUPLE_ELEM(0,state) \
				) \
			), \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_CHECK_REST, \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_FAILURE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_OP(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
      		BOOST_PP_TUPLE_ELEM(0,state) \
			), \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_SET_FAILURE, \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_OP_CHECK_SIZE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_STATE_RESULT(state) \
  	BOOST_PP_NOT \
		( \
		BOOST_VMD_DETAIL_IS_SEQ_STATE_FAILURE(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_SEQ_SHELPER_BOOST_VMD_IS_SEQ_SUCCESS
#define BOOST_VMD_DETAIL_IS_SEQ_FHELPER_BOOST_VMD_IS_SEQ_FAILURE
#define BOOST_VMD_DETAIL_IS_SEQ_CHELPER_BOOST_VMD_IS_SEQ_CONTINUE

#endif /* BOOST_VMD_DETAIL_IS_SEQ_HPP */
