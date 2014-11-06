#if !defined(BOOST_VMD_DETAIL_SEQ_HPP)
#define BOOST_VMD_DETAIL_SEQ_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/seq/push_back.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/push_back.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/tuple.hpp>
#include <boost/vmd/detail/empty_result.hpp>

#define BOOST_VMD_DETAIL_SEQ_STATE_INIT(seq) \
	BOOST_PP_TUPLE_PUSH_BACK \
		( \
		BOOST_PP_TUPLE_PUSH_BACK \
			( \
			BOOST_VMD_TUPLE(seq), \
			BOOST_PP_EMPTY() \
			), \
		BOOST_PP_EMPTY() \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_PRED(d,state) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM(0,state) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP_SET_FAILURE(d,state) \
	( \
	BOOST_PP_EMPTY(), \
	BOOST_PP_EMPTY(), \
	BOOST_PP_TUPLE_ELEM(2,state), \
	BOOST_PP_TUPLE_ELEM(3,state) \
	) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP_MAKE_SEQ(d,state) \
	BOOST_PP_TUPLE_ELEM(0,state) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP_UPGRADE_SEQ(d,state) \
	BOOST_PP_SEQ_PUSH_BACK \
		( \
		BOOST_PP_TUPLE_ELEM(2,state), \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_PP_TUPLE_ELEM(0,state) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP_SET_SUCCESS(d,state) \
	( \
	BOOST_PP_EMPTY(), \
	BOOST_PP_EMPTY(), \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
      		BOOST_PP_TUPLE_ELEM(2,state) \
			), \
		BOOST_VMD_DETAIL_SEQ_STATE_OP_MAKE_SEQ, \
		BOOST_VMD_DETAIL_SEQ_STATE_OP_UPGRADE_SEQ \
		) \
	(d,state), \
	BOOST_PP_EMPTY() \
	) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP_SET_CONTINUE(d,state) \
	BOOST_PP_TUPLE_PUSH_BACK \
		( \
		BOOST_PP_TUPLE_PUSH_BACK \
			( \
			BOOST_VMD_TUPLE(BOOST_PP_TUPLE_ELEM(1,state)), \
			BOOST_PP_IIF \
				( \
				BOOST_VMD_IS_EMPTY \
					( \
					BOOST_PP_TUPLE_ELEM(2,state) \
					), \
				BOOST_VMD_DETAIL_SEQ_STATE_OP_MAKE_SEQ, \
				BOOST_VMD_DETAIL_SEQ_STATE_OP_UPGRADE_SEQ \
				) \
			(d,state) \
			), \
		BOOST_PP_TUPLE_ELEM(1,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP_CHECK_REST(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
      		BOOST_PP_TUPLE_ELEM(1,state) \
			), \
		BOOST_VMD_DETAIL_SEQ_STATE_OP_SET_SUCCESS, \
		BOOST_VMD_DETAIL_SEQ_STATE_OP_SET_CONTINUE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_OP(d,state) \
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
		BOOST_VMD_DETAIL_SEQ_STATE_OP_CHECK_REST, \
		BOOST_VMD_DETAIL_SEQ_STATE_OP_SET_FAILURE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_SEQ_STATE_RESULT(state) \
	( \
	BOOST_PP_TUPLE_ELEM(2,state), \
	BOOST_PP_TUPLE_ELEM(3,state) \
	) \
/**/

#define BOOST_VMD_DETAIL_SEQ_PROCESS(seq) \
    BOOST_VMD_DETAIL_SEQ_STATE_RESULT \
      ( \
      BOOST_PP_WHILE \
        ( \
        BOOST_VMD_DETAIL_SEQ_STATE_PRED, \
        BOOST_VMD_DETAIL_SEQ_STATE_OP, \
        BOOST_VMD_DETAIL_SEQ_STATE_INIT(seq) \
        ) \
      ) \
/**/

#define BOOST_VMD_DETAIL_SEQ(seq) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(seq), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_SEQ_PROCESS \
		) \
	(seq) \
/**/

#define BOOST_VMD_DETAIL_SEQ_PROCESS_D(d,seq) \
    BOOST_VMD_DETAIL_SEQ_STATE_RESULT \
      ( \
      BOOST_PP_WHILE_ ## d \
        ( \
        BOOST_VMD_DETAIL_SEQ_STATE_PRED, \
        BOOST_VMD_DETAIL_SEQ_STATE_OP, \
        BOOST_VMD_DETAIL_SEQ_STATE_INIT(seq) \
        ) \
      ) \
/**/

#define BOOST_VMD_DETAIL_SEQ_D(d,seq) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(seq), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_SEQ_PROCESS_D \
		) \
	(d,seq) \
/**/

#endif /* BOOST_VMD_DETAIL_SEQ_HPP */
