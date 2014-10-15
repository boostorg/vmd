#if !defined(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_TYPE_IDENTIFIER),BOOST_VMD_TYPE_IDENTIFIER) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP */
