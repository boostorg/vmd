#if !defined(BOOST_VMD_DETAIL_SPLIT_SEQ_HPP)
#define BOOST_VMD_DETAIL_SPLIT_SEQ_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_SEQ(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_TYPE_SEQ),BOOST_VMD_TYPE_SEQ) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_SEQ_HPP */
