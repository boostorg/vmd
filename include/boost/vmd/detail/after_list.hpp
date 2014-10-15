#if !defined(BOOST_VMD_DETAIL_AFTER_LIST_HPP)
#define BOOST_VMD_DETAIL_AFTER_LIST_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/after.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_LIST(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_TYPE_LIST),BOOST_VMD_TYPE_LIST) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_LIST_HPP */
