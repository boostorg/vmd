#if !defined(BOOST_VMD_DETAIL_IS_TYPE_TYPE_HPP)
#define BOOST_VMD_DETAIL_IS_TYPE_TYPE_HPP

#include <boost/vmd/detail/is_type_concatenate.hpp>
#include <boost/vmd/detail/match_single_identifier.hpp>

/*

	Check to see if the 'id' is BOOST_VMD_TYPE_TYPE
	
	Returns 1 if it is, else 0

*/

#define BOOST_VMD_DETAIL_IS_TYPE_TYPE(id) \
	BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER(id,BOOST_VMD_TYPE_TYPE) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_TYPE_TYPE_HPP */
