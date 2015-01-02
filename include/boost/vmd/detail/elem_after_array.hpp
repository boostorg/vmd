#if !defined(BOOST_VMD_DETAIL_AFTER_ARRAY_HPP)
#define BOOST_VMD_DETAIL_AFTER_ARRAY_HPP

#include <boost/vmd/detail/elem_array.hpp>
#include <boost/vmd/detail/modifiers.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_ARRAY(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_ARRAY(elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_ARRAY_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_ARRAY_D(d,elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_ARRAY_HPP */
