#if !defined(BOOST_VMD_DETAIL_ELEM_HPP)
#define BOOST_VMD_DETAIL_ELEM_HPP

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/detail/split.hpp>

#define BOOST_VMD_DETAIL_ELEM(tuple,type) \
	BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_DETAIL_ELEM_SPLIT(tuple,type)) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_HPP */
