#if !defined(BOOST_VMD_DETAIL_ELEM_TUPLE_HPP)
#define BOOST_VMD_DETAIL_ELEM_TUPLE_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>

#define BOOST_VMD_DETAIL_ELEM_TUPLE(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM(BOOST_VMD_ELEM_SPLIT(elem,vseq),BOOST_VMD_TYPE_TUPLE) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_TUPLE_HPP */
