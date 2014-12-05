#if !defined(BOOST_VMD_DETAIL_AFTER_HPP)
#define BOOST_VMD_DETAIL_AFTER_HPP

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/detail/elem_split.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER(tuple,type) \
	BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_DETAIL_ELEM_SPLIT(tuple,type)) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_HPP */
