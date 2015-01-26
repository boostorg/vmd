#if !defined(BOOST_VMD_EQUAL_HPP)
#define BOOST_VMD_EQUAL_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/detail/auto_rec.hpp>
#include <boost/vmd/detail/equal.hpp>

#define BOOST_VMD_EQUAL_1(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_1(vseq1,vseq2)
#define BOOST_VMD_EQUAL_2(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_2(vseq1,vseq2)
#define BOOST_VMD_EQUAL_3(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_3(vseq1,vseq2)
#define BOOST_VMD_EQUAL_4(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_4(vseq1,vseq2)
#define BOOST_VMD_EQUAL_5(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_5(vseq1,vseq2)
#define BOOST_VMD_EQUAL_6(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_6(vseq1,vseq2)
#define BOOST_VMD_EQUAL_7(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_7(vseq1,vseq2)
#define BOOST_VMD_EQUAL_8(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_8(vseq1,vseq2)
#define BOOST_VMD_EQUAL_9(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_9(vseq1,vseq2)
#define BOOST_VMD_EQUAL_10(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_10(vseq1,vseq2)
#define BOOST_VMD_EQUAL_11(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_11(vseq1,vseq2)
#define BOOST_VMD_EQUAL_12(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_12(vseq1,vseq2)
#define BOOST_VMD_EQUAL_13(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_13(vseq1,vseq2)
#define BOOST_VMD_EQUAL_14(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_14(vseq1,vseq2)
#define BOOST_VMD_EQUAL_15(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_15(vseq1,vseq2)
#define BOOST_VMD_EQUAL_16(vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_16(vseq1,vseq2)

#define BOOST_VMD_EQUAL_D_1(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_1_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_2(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_2_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_3(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_3_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_4(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_4_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_5(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_5_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_6(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_6_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_7(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_7_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_8(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_8_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_9(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_9_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_10(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_10_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_11(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_11_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_12(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_12_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_13(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_13_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_14(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_14_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_15(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_15_D(d,vseq1,vseq2)
#define BOOST_VMD_EQUAL_D_16(d,vseq1,vseq2) BOOST_VMD_DETAIL_EQUAL_16_D(d,vseq1,vseq2)

#define BOOST_VMD_EQUAL_AUTO_REC(n) \
	BOOST_VMD_DETAIL_EQUAL_IS_1 \
		( \
		BOOST_VMD_EQUAL_ ## n(,) \
		) \
/**/

#define BOOST_VMD_EQUAL_AUTO_REC_D(n) \
	BOOST_VMD_DETAIL_EQUAL_IS_1 \
		( \
		BOOST_VMD_EQUAL_D_ ## n(1,,) \
		) \
/**/

#define BOOST_VMD_EQUAL \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_EQUAL_, \
		BOOST_PP_AUTO_REC(BOOST_VMD_EQUAL_AUTO_REC,16) \
		) \
/**/

#define BOOST_VMD_EQUAL_D \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_EQUAL_D_, \
		BOOST_PP_AUTO_REC(BOOST_VMD_EQUAL_AUTO_REC_D,16) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_EQUAL_HPP */
