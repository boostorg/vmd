#if !defined(BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_HPP)
#define BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/vmd/generic/type.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/equal_type.hpp>
#include <boost/vmd/detail/match_identifier.hpp>

/*

	Check if the types are both registered identifiers

*/

#define BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_IR(idf,ids) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(idf), \
				BOOST_VMD_TYPE_IDENTIFIER \
				), \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE(ids), \
				BOOST_VMD_TYPE_IDENTIFIER \
				) \
			), \
		BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(idf,ids) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_EQUAL(idf,ids) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_IR(idf,ids)) \
/**/

#endif /* BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_HPP */
