#if !defined(BOOST_VMD_DETAIL_SEQUENCE_AFTER_HPP)
#define BOOST_VMD_DETAIL_SEQUENCE_AFTER_HPP

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/detail/modifiers.hpp>
#include <boost/vmd/detail/sequence_elem.hpp>

#define BOOST_VMD_DETAIL_SEQUENCE_AFTER(elem,vseq) \
	BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_DETAIL_SEQUENCE_ELEM(BOOST_VMD_ALLOW_AFTER,elem,vseq,BOOST_VMD_RETURN_AFTER)) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_AFTER_D(d,elem,vseq) \
	BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,BOOST_VMD_ALLOW_AFTER,elem,vseq,BOOST_VMD_RETURN_AFTER)) \
/**/

#endif /* BOOST_VMD_DETAIL_SEQUENCE_AFTER_HPP */
