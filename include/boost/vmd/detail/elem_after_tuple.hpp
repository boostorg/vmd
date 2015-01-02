#if !defined(BOOST_VMD_DETAIL_AFTER_TUPLE_HPP)
#define BOOST_VMD_DETAIL_AFTER_TUPLE_HPP

#include <boost/vmd/detail/elem_tuple.hpp>
#include <boost/vmd/detail/modifiers.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_TUPLE(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_TUPLE(elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_TUPLE_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_TUPLE_D(d,elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_TUPLE_HPP */
