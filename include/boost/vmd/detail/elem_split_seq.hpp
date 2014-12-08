#if !defined(BOOST_VMD_DETAIL_SPLIT_SEQ_HPP)
#define BOOST_VMD_DETAIL_SPLIT_SEQ_HPP

#include <boost/vmd/generic/elem.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem_split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_SEQ(elem,...) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM(elem,__VA_ARGS__,BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE),BOOST_VMD_TYPE_SEQ) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_SEQ_D(d,elem,...) \
	BOOST_VMD_DETAIL_ELEM_SPLIT_D(d,BOOST_VMD_ELEM_D(d,elem,__VA_ARGS__,BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE),BOOST_VMD_TYPE_SEQ) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_SEQ_HPP */
