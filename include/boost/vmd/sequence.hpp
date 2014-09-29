#if !defined(BOOST_VMD_SEQUENCE_HPP)
#define BOOST_VMD_SEQUENCE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence.hpp>

// ELEM

#define BOOST_VMD_SEQUENCE_ELEM(vseq,elem) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM(vseq,elem) \
/**/

#define BOOST_VMD_SEQUENCE_ELEM_D(d,vseq,elem) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,vseq,elem) \
/**/

// SIZE

#define BOOST_VMD_SEQUENCE_SIZE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE(vseq) \
/**/

#define BOOST_VMD_SEQUENCE_SIZE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE_D(d,vseq) \
/**/

// TO_SEQ

#define BOOST_VMD_SEQUENCE_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_SEQUENCE_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ_D(d,vseq) \
/**/

// TO_SEQ_DATA

#define BOOST_VMD_SEQUENCE_DATA_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_SEQUENCE_DATA_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ_D(d,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQUENCE_HPP */
