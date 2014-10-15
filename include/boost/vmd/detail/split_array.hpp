#if !defined(BOOST_VMD_DETAIL_SPLIT_ARRAY_HPP)
#define BOOST_VMD_DETAIL_SPLIT_ARRAY_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_ARRAY(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_TYPE_ARRAY),BOOST_VMD_TYPE_ARRAY) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_ARRAY_HPP */
