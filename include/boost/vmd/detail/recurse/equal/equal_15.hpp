#if !defined(BOOST_VMD_DETAIL_EQUAL_15_HPP)
#define BOOST_VMD_DETAIL_EQUAL_15_HPP

#include <boost/vmd/detail/recurse/equal/equal_headers.hpp>

#define BOOST_VMD_DETAIL_EQUAL_15_CNI_CHK(vseq1,vseq2,vtype) \
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
		BOOST_VMD_DETAIL_DATA_EQUAL_15, \
		BOOST_VMD_DETAIL_EQUAL_CNI_SMP \
		) \
	(vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_CNI_CHK_D(d,vseq1,vseq2,vtype) \
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
		BOOST_VMD_DETAIL_DATA_EQUAL_15_D, \
		BOOST_VMD_DETAIL_EQUAL_CNI_SMP_D \
		) \
	(d,vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_VSEQ(vseq1,vseq2,vtype) \
	BOOST_VMD_DETAIL_DATA_EQUAL_15 \
		( \
		BOOST_VMD_TO_SEQ(vseq1), \
		BOOST_VMD_TO_SEQ(vseq2), \
		BOOST_VMD_TYPE_SEQ \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_VSEQ_D(d,vseq1,vseq2,vtype) \
	BOOST_VMD_DETAIL_DATA_EQUAL_15_D \
		( \
		d, \
		BOOST_VMD_TO_SEQ_D(d,vseq1), \
		BOOST_VMD_TO_SEQ_D(d,vseq2), \
		BOOST_VMD_TYPE_SEQ \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_CNI(vseq1,vseq2,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE \
			( \
			vtype, \
			BOOST_VMD_TYPE_VSEQUENCE \
			), \
		BOOST_VMD_DETAIL_EQUAL_15_VSEQ, \
		BOOST_VMD_DETAIL_EQUAL_15_CNI_CHK \
		) \
	(vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_CNI_D(d,vseq1,vseq2,vtype) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE_D \
			( \
			d, \
			vtype, \
			BOOST_VMD_TYPE_VSEQUENCE \
			), \
		BOOST_VMD_DETAIL_EQUAL_15_VSEQ_D, \
		BOOST_VMD_DETAIL_EQUAL_15_CNI_CHK_D \
		) \
	(d,vseq1,vseq2,vtype) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_WT(vseq1,vseq2,vtype1,vtype2) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				vtype1, \
				vtype2 \
				), \
			BOOST_VMD_DETAIL_EQUAL_15_CNI, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(vseq1,vseq2,vtype1) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_WT_D(d,vseq1,vseq2,vtype1,vtype2) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE_D \
				( \
				d, \
				vtype1, \
				vtype2 \
				), \
			BOOST_VMD_DETAIL_EQUAL_15_CNI_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,vseq1,vseq2,vtype1) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_GTYPE(vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_15_WT \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_GET_TYPE(vseq1), \
		BOOST_VMD_GET_TYPE(vseq2) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_GTYPE_D(d,vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_15_WT_D \
		( \
		d, \
		vseq1, \
		vseq2, \
		BOOST_VMD_GET_TYPE_D(d,vseq1), \
		BOOST_VMD_GET_TYPE_D(d,vseq2) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_EBP(vseq1,vseq2,be1,be2) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_EQUAL_CHK_MATCH(be1,be2), \
				BOOST_VMD_DETAIL_EQUAL_CHK_PARENS_MATCH(vseq1,vseq2) \
				), \
			BOOST_VMD_DETAIL_EQUAL_15_GTYPE, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(vseq1,vseq2) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_EBP_D(d,vseq1,vseq2,be1,be2) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_EQUAL_CHK_MATCH(be1,be2), \
				BOOST_VMD_DETAIL_EQUAL_CHK_PARENS_MATCH(vseq1,vseq2) \
				), \
			BOOST_VMD_DETAIL_EQUAL_15_GTYPE_D, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(d,vseq1,vseq2) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_EMPTY(vseq1,vseq2,be1,be2) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND(be1,be2), \
		BOOST_VMD_DETAIL_EQUAL_BOTH_EMPTY, \
		BOOST_VMD_DETAIL_EQUAL_15_EBP \
		) \
	(vseq1,vseq2,be1,be2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_EMPTY_D(d,vseq1,vseq2,be1,be2) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND(be1,be2), \
		BOOST_VMD_DETAIL_EQUAL_BOTH_EMPTY, \
		BOOST_VMD_DETAIL_EQUAL_15_EBP_D \
		) \
	(d,vseq1,vseq2,be1,be2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15(vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_15_EMPTY \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_IS_EMPTY(vseq1), \
		BOOST_VMD_IS_EMPTY(vseq2) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_15_D(d,vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_15_EMPTY_D \
		( \
		d, \
		vseq1, \
		vseq2, \
		BOOST_VMD_IS_EMPTY(vseq1), \
		BOOST_VMD_IS_EMPTY(vseq2) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_EQUAL_15_HPP */
