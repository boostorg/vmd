#if !defined(BOOST_VMD_DETAIL_ELEM_ARRAY_HPP)
#define BOOST_VMD_DETAIL_ELEM_ARRAY_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>

#define BOOST_VMD_DETAIL_ELEM_ARRAY(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_SPECIFIC_ARRAY,BOOST_VMD_RETURN_AFTER),BOOST_VMD_TYPE_ARRAY) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_ARRAY_HPP */
