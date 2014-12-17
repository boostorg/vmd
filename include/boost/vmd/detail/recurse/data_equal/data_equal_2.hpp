#if !defined(BOOST_VMD_DETAIL_DATA_EQUAL_2_HPP)
#define BOOST_VMD_DETAIL_DATA_EQUAL_2_HPP

#include <boost/vmd/detail/recurse/data_equal/data_equal_headers.hpp>

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_OP_TEQ(d,state) \
	BOOST_VMD_EQUAL_D \
		( \
		d, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_FIRST_ELEMENT(d,state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_SECOND_ELEMENT(d,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_OP_TEQ_D(d,state) \
	BOOST_VMD_EQUAL_D \
		( \
		d, \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_FIRST_ELEMENT(d,state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_STATE_GET_SECOND_ELEMENT(d,state) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_OP(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_2_OP_TEQ(d,state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_OP_SUCCESS, \
		BOOST_VMD_DETAIL_DATA_EQUAL_OP_FAILURE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_OP_D(d,state) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_DATA_EQUAL_2_OP_TEQ_D(d,state), \
		BOOST_VMD_DETAIL_DATA_EQUAL_OP_SUCCESS, \
		BOOST_VMD_DETAIL_DATA_EQUAL_OP_FAILURE \
		) \
	(d,state) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_LOOP(dataf,datas,sz,eaccess) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_PP_WHILE \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_PRED, \
			BOOST_VMD_DETAIL_DATA_EQUAL_2_OP, \
				( \
				1, \
				dataf, \
				datas, \
				sz, \
				eaccess, \
				0 \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_LOOP_D(d,dataf,datas,sz,eaccess) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_PP_WHILE_ ## d \
			( \
			BOOST_VMD_DETAIL_DATA_EQUAL_PRED, \
			BOOST_VMD_DETAIL_DATA_EQUAL_2_OP_D, \
				( \
				1, \
				dataf, \
				datas, \
				sz, \
				eaccess, \
				0 \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_IR(dataf,datas,szf,szs,eaccess) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL(szf,szs), \
		BOOST_VMD_DETAIL_DATA_EQUAL_2_LOOP, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(dataf,datas,szf,eaccess) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_IR_D(d,dataf,datas,szf,szs,eaccess) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL_D(d,szf,szs), \
		BOOST_VMD_DETAIL_DATA_EQUAL_2_LOOP_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,dataf,datas,szf,eaccess) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ(dataf,datas,szf,szs,eaccess) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_IR(dataf,datas,szf,szs,eaccess)) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_D(d,dataf,datas,szf,szs,eaccess) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_IR_D(d,dataf,datas,szf,szs,eaccess)) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_PAR_3(dataf,datas,esize,eaccess) \
	BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ(dataf,datas,esize(dataf),esize(datas),eaccess) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_PAR_D_3(d,dataf,datas,esize,eaccess) \
	BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_D(d,dataf,datas,esize(dataf),esize(datas),eaccess) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_PAR_1(dataf,datas) \
	BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ(dataf,datas,BOOST_PP_LIST_SIZE(dataf),BOOST_PP_LIST_SIZE(datas),BOOST_PP_LIST_AT_D) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_PAR_D_1(d,dataf,datas) \
	BOOST_VMD_DETAIL_DATA_EQUAL_2_SZ_D(d,dataf,datas,BOOST_PP_LIST_SIZE_D(d,dataf),BOOST_PP_LIST_SIZE_D(d,datas),BOOST_PP_LIST_AT_D) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2(dataf,...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_DATA_EQUAL_2_PAR_,__VA_ARGS__)(dataf,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_DATA_EQUAL_2_D(d,dataf,...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_DATA_EQUAL_2_PAR_D_,__VA_ARGS__)(d,dataf,__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_DATA_EQUAL_2_HPP */
