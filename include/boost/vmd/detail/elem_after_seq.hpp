#if !defined(BOOST_VMD_DETAIL_AFTER_SEQ_HPP)
#define BOOST_VMD_DETAIL_AFTER_SEQ_HPP

#include <boost/vmd/detail/elem_seq.hpp>
#include <boost/vmd/detail/modifiers.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_SEQ(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SEQ(elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_SEQ_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SEQ_D(d,elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_SEQ_HPP */
