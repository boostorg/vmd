#if !defined(BOOST_VMD_DETAIL_EQUAL_HPP)
#define BOOST_VMD_DETAIL_EQUAL_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/match_identifier.hpp>
#include <boost/vmd/detail/equal_type.hpp>

#define BOOST_VMD_DETAIL_EQUAL_CNI_CMP_IR(vseq1,vseq2,vtype1,vtype2) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE(vtype1,BOOST_VMD_TYPE_EMPTY), \
		BOOST_VMD_IDENTITY(1), \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE(vtype1,BOOST_VMD_TYPE_IDENTIFIER), \
			BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER, \
			BOOST_PP_EQUAL \
			) \
		) \
	(vseq1,vseq2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_CNI_CMP(vseq1,vseq2,vtype1,vtype2) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_EQUAL_CNI_CMP_IR(vseq1,vseq2,vtype1,vtype2)) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_CNI_IR(vseq1,vseq2,vtype1,vtype2) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE(vtype1,BOOST_VMD_TYPE_EMPTY), \
			BOOST_PP_BITOR \
				( \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype1,BOOST_VMD_TYPE_IDENTIFIER), \
				BOOST_VMD_DETAIL_EQUAL_TYPE(vtype1,BOOST_VMD_TYPE_NUMBER) \
				) \
			), \
		BOOST_VMD_DETAIL_EQUAL_CNI_CMP,	\
		BOOST_VMD_IDENTITY(0) \
		) \
	(vseq1,vseq2,vtype1,vtype2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_CNI(vseq1,vseq2,vtype1,vtype2) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_EQUAL_CNI_IR(vseq1,vseq2,vtype1,vtype2)) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_WT_IR(vseq1,vseq2,vtype1,vtype2) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE \
			( \
			vtype1, \
			vtype2 \
			), \
		BOOST_VMD_DETAIL_EQUAL_CNI, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(vseq1,vseq2,vtype1,vtype2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_WT(vseq1,vseq2,vtype1,vtype2) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_EQUAL_WT_IR(vseq1,vseq2,vtype1,vtype2)) \
/**/

#define BOOST_VMD_DETAIL_EQUAL(vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_WT \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_TYPE(vseq1), \
		BOOST_VMD_TYPE(vseq2) \
		) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_D(d,vseq1,vseq2) \
	BOOST_VMD_DETAIL_EQUAL_WT \
		( \
		vseq1, \
		vseq2, \
		BOOST_VMD_TYPE_D(d,vseq1), \
		BOOST_VMD_TYPE_D(d,vseq2) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_EQUAL_HPP */
