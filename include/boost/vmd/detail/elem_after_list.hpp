#if !defined(BOOST_VMD_DETAIL_AFTER_LIST_HPP)
#define BOOST_VMD_DETAIL_AFTER_LIST_HPP

#include <boost/vmd/detail/elem_list.hpp>
#include <boost/vmd/detail/modifiers.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_LIST(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_LIST(elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_LIST_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_LIST_D(d,elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_LIST_HPP */
