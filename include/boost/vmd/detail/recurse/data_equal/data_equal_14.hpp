#if !defined(BOOST_VMD_DETAIL_DATA_EQUAL_14_HPP)
#define BOOST_VMD_DETAIL_DATA_EQUAL_14_HPP

#include <boost/vmd/detail/recurse/data_equal/data_equal_headers.hpp>

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS_IR(d,em1,em2) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_IS_BOTH_COMPOSITE(em1,em2), \
		BOOST_VMD_IDENTITY(2), \
		BOOST_VMD_EQUAL_D \
		) \
	(d,em1,em2) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS_IR_D(d,em1,em2) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_IS_BOTH_COMPOSITE(em1,em2), \
		BOOST_VMD_IDENTITY(2), \
		BOOST_VMD_EQUAL_D \
		) \
	(d,em1,em2) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS(d,em1,em2) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS_IR(d,em1,em2)) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS_D(d,em1,em2) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS_IR_D(d,em1,em2)) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP(d,state,em1,em2) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_COMP_PROCESSING(d,state), \
		BOOST_VMD_EQUAL_D, \
		BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS \
		) \
	(d,em1,em2) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_D(d,state,em1,em2) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_COMP_PROCESSING(d,state), \
		BOOST_VMD_EQUAL_D, \
		BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_PARENS_D \
		) \
	(d,em1,em2) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP \
		( \
		d, \
		state, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_FIRST_ELEMENT(d,state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_SECOND_ELEMENT(d,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_D(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_CMP_D \
		( \
		d, \
		state, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_FIRST_ELEMENT(d,state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_SECOND_ELEMENT(d,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_OP_RESULT \
		( \
		d, \
		state, \
		BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ(d,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_D(d,state) \
	BOOST_VMD_DETAIL_DATA_EQUAL_OP_RESULT \
		( \
		d, \
		state, \
		BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_TEQ_D(d,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_LOOP(dataf,datas,sz,vtype) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_PP_WHILE \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_PRED, \
			BOOST_VMD_DETAIL_DATA_EQUAL_14_OP, \
				( \
				1, \
				dataf, \
				datas, \
				sz, \
				vtype, \
				0, \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_LOOP_D(d,dataf,datas,sz,vtype) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_PP_WHILE_ ## d \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_PRED, \
			BOOST_VMD_DETAIL_DATA_EQUAL_14_OP_D, \
				( \
				1, \
				dataf, \
				datas, \
				sz, \
				vtype, \
				0, \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_IR(dataf,datas,szf,szs,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL(szf,szs), \
		BOOST_VMD_DETAIL_DATA_EQUAL_14_LOOP, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(dataf,datas,szf,vtype) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_IR_D(d,dataf,datas,szf,szs,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL_D(d,szf,szs), \
		BOOST_VMD_DETAIL_DATA_EQUAL_14_LOOP_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,dataf,datas,szf,vtype) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ(dataf,datas,szf,szs,vtype) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_IR(dataf,datas,szf,szs,vtype)) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_D(d,dataf,datas,szf,szs,vtype) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_IR_D(d,dataf,datas,szf,szs,vtype)) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_2(dataf,datas,vtype) \
	BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ \
		( \
		dataf, \
		datas, \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE(dataf,vtype), \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE(datas,vtype), \
		vtype \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_D_2(d,dataf,datas,vtype) \
	BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_D \
		( \
		d, \
		dataf, \
		datas, \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_D(d,dataf,vtype), \
		BOOST_VMD_DETAIL_DATA_EQUAL_GET_SIZE_D(d,datas,vtype), \
		vtype \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_1(dataf,datas) \
	BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ(dataf,datas,BOOST_PP_LIST_SIZE(dataf),BOOST_PP_LIST_SIZE(datas),BOOST_VMD_TYPE_LIST) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_D_1(d,dataf,datas) \
	BOOST_VMD_DETAIL_DATA_EQUAL_14_SZ_D(d,dataf,datas,BOOST_PP_LIST_SIZE_D(d,dataf),BOOST_PP_LIST_SIZE_D(d,datas),BOOST_VMD_TYPE_LIST) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_DATA_EQUAL_14(dataf,...) \
	BOOST_PP_CAT(BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_,__VA_ARGS__)(dataf,__VA_ARGS__),BOOST_PP_EMPTY()) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_D(d,dataf,...) \
	BOOST_PP_CAT(BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_D_,__VA_ARGS__)(d,dataf,__VA_ARGS__),BOOST_PP_EMPTY()) \
/**/

#else

#define BOOST_VMD_DETAIL_DATA_EQUAL_14(dataf,...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_,__VA_ARGS__)(dataf,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_14_D(d,dataf,...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_DATA_EQUAL_14_PAR_D_,__VA_ARGS__)(d,dataf,__VA_ARGS__) \
/**/

#endif

#endif /* BOOST_VMD_DETAIL_DATA_EQUAL_14_HPP */
