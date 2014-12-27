#if !defined(BOOST_VMD_DETAIL_SPLIT_ARRAY_HPP)
#define BOOST_VMD_DETAIL_SPLIT_ARRAY_HPP

#include <boost/vmd/generic/elem.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem_split.hpp>

#define BOOST_VMD_DETAIL_ELEM_SPLIT_ARRAY(elem,...) \
	BOOST_VMD_DETAIL_ELEM_SPLIT(BOOST_VMD_ELEM(elem,__VA_ARGS__,BOOST_VMD_PARSE_ARRAY),BOOST_VMD_TYPE_ARRAY) \
/**/

#define BOOST_VMD_DETAIL_ELEM_SPLIT_ARRAY_D(d,elem,...) \
	BOOST_VMD_DETAIL_ELEM_SPLIT_D(d,BOOST_VMD_ELEM_D(d,elem,__VA_ARGS__,BOOST_VMD_PARSE_ARRAY),BOOST_VMD_TYPE_ARRAY) \
/**/

#endif /* BOOST_VMD_DETAIL_SPLIT_ARRAY_HPP */
