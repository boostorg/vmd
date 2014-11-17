#if !defined(BOOST_VMD_DETAIL_ELEM_NUMBER_HPP)
#define BOOST_VMD_DETAIL_ELEM_NUMBER_HPP

#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>

#define BOOST_VMD_DETAIL_ELEM_NUMBER(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM(BOOST_VMD_ELEM(elem,vseq,BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE),BOOST_VMD_TYPE_NUMBER) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_NUMBER_HPP */
