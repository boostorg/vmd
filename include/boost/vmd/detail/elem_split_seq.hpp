#if !defined(BOOST_VMD_DETAIL_SPLIT_SEQ_HPP)
#define BOOST_VMD_DETAIL_SPLIT_SEQ_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem_split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_SEQ(elem,...) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM(elem,__VA_ARGS__,BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE),BOOST_VMD_TYPE_SEQ) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_SEQ_HPP */
