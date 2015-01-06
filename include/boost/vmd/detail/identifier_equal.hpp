#if !defined(BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_HPP)
#define BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/detail/identifier.hpp>
#include <boost/vmd/detail/match_identifier.hpp>

/*

	Check if the types are both registered identifiers

*/

#define BOOST_VMD_DETAIL_IDENTIFIER_EQUAL(idf,ids) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_IS_IDENTIFIER(idf), \
				BOOST_VMD_DETAIL_IS_IDENTIFIER(ids) \
				), \
			BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(idf,ids) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_NOT_EQUAL(idf,ids) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_EQUAL(arf,ars) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IDENTIFIER_EQUAL_HPP */
