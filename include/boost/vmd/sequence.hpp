#if !defined(BOOST_VMD_SEQUENCE_HPP)
#define BOOST_VMD_SEQUENCE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence.hpp>

#define BOOST_VMD_SEQUENCE_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_SEQUENCE_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ_D(d,vseq) \
/**/

#define BOOST_VMD_SEQUENCE_DATA_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_SEQUENCE_DATA_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ_D(d,vseq) \
/**/

#define BOOST_VMD_SEQUENCE_TYPES_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TYPES_TO_SEQ(vseq) \
/**/

#define BOOST_VMD_SEQUENCE_TYPES_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TYPES_TO_SEQ_D(d,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQUENCE_HPP */
