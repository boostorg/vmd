#if !defined(BOOST_VMD_DETAIL_EQUAL_TYPE_HPP)
#define BOOST_VMD_DETAIL_EQUAL_TYPE_HPP

#include <boost/vmd/detail/match_single_identifier.hpp>
#include <boost/vmd/detail/is_type_concatenate.hpp>

#define BOOST_VMD_DETAIL_EQUAL_TYPE(type1,type2) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(type1,type2) \
/**/

#define BOOST_VMD_DETAIL_EQUAL_TYPE_D(d,type1,type2) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(type1,type2) \
/**/

#endif /* BOOST_VMD_DETAIL_EQUAL_TYPE_HPP */
