#if !defined(BOOST_VMD_DETAIL_MATCH_IDENTIFIER_COMMON_HPP)
#define BOOST_VMD_DETAIL_MATCH_IDENTIFIER_COMMON_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/idprefix.hpp>

#define BOOST_VMD_DETAIL_MATCH_IDENTIFIER_OP_CREATE_ID_RESULT(id,keyid) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_DETECTION_PREFIX, \
		BOOST_PP_CAT \
			( \
			keyid, \
			BOOST_PP_CAT \
				( \
				_, \
				id \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_MATCH_IDENTIFIER_OP_CMP_IDS(id,keyid) \
	BOOST_VMD_IS_EMPTY \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER_OP_CREATE_ID_RESULT(id,keyid) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_MATCH_IDENTIFIER_COMMON_HPP */
