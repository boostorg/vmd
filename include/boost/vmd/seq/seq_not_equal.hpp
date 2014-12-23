#if !defined(BOOST_VMD_SEQ_NOT_EQUAL_HPP)
#define BOOST_VMD_SEQ_NOT_EQUAL_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/seq_equal.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_SEQ_NOT_EQUAL(seqf,seqs) \
	BOOST_VMD_DETAIL_SEQ_NOT_EQUAL(seqf,seqs) \
/**/

#define BOOST_VMD_SEQ_NOT_EQUAL_D(d,seqf,seqs) \
	BOOST_VMD_DETAIL_SEQ_NOT_EQUAL_D(d,seqf,seqs) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQ_NOT_EQUAL_HPP */
