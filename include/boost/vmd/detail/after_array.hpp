#if !defined(BOOST_VMD_DETAIL_AFTER_ARRAY_HPP)
#define BOOST_VMD_DETAIL_AFTER_ARRAY_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/after.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_ARRAY(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_SPECIFIC_ARRAY,BOOST_VMD_RETURN_AFTER),BOOST_VMD_TYPE_ARRAY) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_ARRAY_HPP */
