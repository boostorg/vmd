#if !defined(BOOST_VMD_DETAIL_SPLIT_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_SPLIT_IDENTIFIER_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM_SPLIT(elem,vseq),BOOST_VMD_TYPE_IDENTIFIER) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_IDENTIFIER_HPP */
