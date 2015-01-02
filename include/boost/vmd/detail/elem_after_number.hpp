#if !defined(BOOST_VMD_DETAIL_AFTER_NUMBER_HPP)
#define BOOST_VMD_DETAIL_AFTER_NUMBER_HPP

#include <boost/vmd/detail/elem_number.hpp>
#include <boost/vmd/detail/modifiers.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_NUMBER(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_NUMBER(elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_NUMBER_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_NUMBER_D(d,elem,vseq,BOOST_VMD_RETURN_ONLY_AFTER) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_NUMBER_HPP */
