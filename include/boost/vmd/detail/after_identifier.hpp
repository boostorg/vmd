#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/after.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER(BOOST_VMD_ELEM_SPLIT(elem,vseq),BOOST_VMD_TYPE_IDENTIFIER) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP */
