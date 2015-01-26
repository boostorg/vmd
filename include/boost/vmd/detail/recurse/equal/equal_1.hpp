#if !defined(BOOST_VMD_DETAIL_EQUAL_1_HPP)
#define BOOST_VMD_DETAIL_EQUAL_1_HPP

#include <boost/vmd/detail/recurse/equal/equal_headers.hpp>

#define BOOST_VMD_DETAIL_EQUAL_1_CNI_CHK(vseq1,vseq2,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_PP_BITOR \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_ARRAY), \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_LIST) \
				), \
			BOOST_PP_BITOR \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_SEQ), \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype,BOOST_VMD_TYPE_TUPLE) \
				) \
			), \
		BOOST_VMD_DETAIL_DATA_EQUAL_1, \
		BOOST_VMD_DETAIL_EQUAL_CNI_SMP \
		) \
	(vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_CNI_CHK_D(d,vseq1,vseq2,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_PP_BITOR \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_ARRAY), \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_LIST) \
				), \
			BOOST_PP_BITOR \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_SEQ), \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,vtype,BOOST_VMD_TYPE_TUPLE) \
				) \
			), \
		BOOST_VMD_DETAIL_DATA_EQUAL_1_D, \
		BOOST_VMD_DETAIL_EQUAL_CNI_SMP_D \
		) \
	(d,vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_VSEQ(vseq1,vseq2,vtype) \
	BOOST_VMD_DETAIL_DATA_EQUAL_1 \
		( \
		BOOST_VMD_TO_SEQ(vseq1), \
		BOOST_VMD_TO_SEQ(vseq2), \
		BOOST_VMD_TYPE_SEQ \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_VSEQ_D(d,vseq1,vseq2,vtype) \
	BOOST_VMD_DETAIL_DATA_EQUAL_1_D \
		( \
		d, \
		BOOST_VMD_TO_SEQ_D(d,vseq1), \
		BOOST_VMD_TO_SEQ_D(d,vseq2), \
		BOOST_VMD_TYPE_SEQ \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_CNI(vseq1,vseq2,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE \
			( \
			vtype, \
			BOOST_VMD_TYPE_VSEQUENCE \
			), \
		BOOST_VMD_DETAIL_EQUAL_1_VSEQ, \
		BOOST_VMD_DETAIL_EQUAL_1_CNI_CHK \
		) \
	(vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_CNI_D(d,vseq1,vseq2,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE_D \
			( \
			d, \
			vtype, \
			BOOST_VMD_TYPE_VSEQUENCE \
			), \
		BOOST_VMD_DETAIL_EQUAL_1_VSEQ_D, \
		BOOST_VMD_DETAIL_EQUAL_1_CNI_CHK_D \
		) \
	(d,vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_TEST_TYPE(vseq1,vtype1,type) \
	1 \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_TEST_TYPE_D(d,vseq1,vtype1,type) \
	1 \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_WT(vseq1,vseq2,vtype1,vtype2,type) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE \
					( \
					vtype1, \
					vtype2 \
					), \
				BOOST_VMD_IDENTITY_RESULT \
					( \
					BOOST_PP_IIF \
						( \
						BOOST_VMD_DETAIL_NOT_EMPTY(type), \
						BOOST_VMD_DETAIL_EQUAL_1_TEST_TYPE, \
						BOOST_VMD_IDENTITY(1) \
						) \
					(vseq1,vtype1,type) \
					) \
				), \
			BOOST_VMD_DETAIL_EQUAL_1_CNI, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(vseq1,vseq2,vtype1) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_WT_D(d,vseq1,vseq2,vtype1,vtype2,type) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE_D \
					( \
					d, \
					vtype1, \
					vtype2 \
					), \
				BOOST_VMD_IDENTITY_RESULT \
					( \
					BOOST_PP_IIF \
						( \
						BOOST_VMD_DETAIL_NOT_EMPTY(type), \
						BOOST_VMD_DETAIL_EQUAL_1_TEST_TYPE_D, \
						BOOST_VMD_IDENTITY(1) \
						) \
					(d,vseq1,vtype1,type) \
					) \
				), \
			BOOST_VMD_DETAIL_EQUAL_1_CNI_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,vseq1,vseq2,vtype1) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_GTYPE(vseq1,vseq2,type) \
	BOOST_VMD_DETAIL_EQUAL_1_WT \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_GET_TYPE(vseq1), \
		BOOST_VMD_GET_TYPE(vseq2), \
		type \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_GTYPE_D(d,vseq1,vseq2,type) \
	BOOST_VMD_DETAIL_EQUAL_1_WT_D \
		( \
		d, \
		vseq1, \
		vseq2, \
		BOOST_VMD_GET_TYPE_D(d,vseq1), \
		BOOST_VMD_GET_TYPE_D(d,vseq2), \
		type \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_EBP(vseq1,vseq2,be1,be2,type) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_EQUAL_CHK_MATCH(be1,be2), \
				BOOST_VMD_DETAIL_EQUAL_CHK_PARENS_MATCH(vseq1,vseq2) \
				), \
			BOOST_VMD_DETAIL_EQUAL_1_GTYPE, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(vseq1,vseq2,type) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_EBP_D(d,vseq1,vseq2,be1,be2,type) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_EQUAL_CHK_MATCH(be1,be2), \
				BOOST_VMD_DETAIL_EQUAL_CHK_PARENS_MATCH(vseq1,vseq2) \
				), \
			BOOST_VMD_DETAIL_EQUAL_1_GTYPE_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,vseq1,vseq2,type) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_EMPTY(vseq1,vseq2,be1,be2,type) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND(be1,be2), \
		BOOST_VMD_DETAIL_EQUAL_BOTH_EMPTY, \
		BOOST_VMD_DETAIL_EQUAL_1_EBP \
		) \
	(vseq1,vseq2,be1,be2,type) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_EMPTY_D(d,vseq1,vseq2,be1,be2,type) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND(be1,be2), \
		BOOST_VMD_DETAIL_EQUAL_BOTH_EMPTY, \
		BOOST_VMD_DETAIL_EQUAL_1_EBP_D \
		) \
	(d,vseq1,vseq2,be1,be2,type) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_OV1(vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_1_EMPTY \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_IS_EMPTY(vseq1), \
		BOOST_VMD_IS_EMPTY(vseq2), \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_OV2(vseq1,vseq2,type) \
	BOOST_VMD_DETAIL_EQUAL_1_EMPTY \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_IS_EMPTY(vseq1), \
		BOOST_VMD_IS_EMPTY(vseq2), \
		type \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_D_OV1(d,vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_1_EMPTY_D \
		( \
		d, \
		vseq1, \
		vseq2, \
		BOOST_VMD_IS_EMPTY(vseq1), \
		BOOST_VMD_IS_EMPTY(vseq2), \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_D_OV2(d,vseq1,vseq2,type) \
	BOOST_VMD_DETAIL_EQUAL_1_EMPTY_D \
		( \
		d, \
		vseq1, \
		vseq2, \
		BOOST_VMD_IS_EMPTY(vseq1), \
		BOOST_VMD_IS_EMPTY(vseq2), \
		type \
		) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_EQUAL_1(vseq1,...) \
	BOOST_PP_CAT(BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_EQUAL_1_OV,__VA_ARGS__)(vseq1,__VA_ARGS__),BOOST_PP_EMPTY()) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_D(d,vseq1,...) \
	BOOST_PP_CAT(BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_EQUAL_1_D_OV,__VA_ARGS__)(d,vseq1,__VA_ARGS__),BOOST_PP_EMPTY()) \
/**/

#else

#define BOOST_VMD_DETAIL_EQUAL_1(vseq1,...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_EQUAL_1_OV,__VA_ARGS__)(vseq1,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_1_D(d,vseq1,...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_EQUAL_1_D_OV,__VA_ARGS__)(d,vseq1,__VA_ARGS__) \
/**/

#endif

#endif /* BOOST_VMD_DETAIL_EQUAL_1_HPP */
