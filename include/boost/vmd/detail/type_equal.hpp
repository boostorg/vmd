#if !defined(BOOST_VMD_DETAIL_TYPE_EQUAL_HPP)
#define BOOST_VMD_DETAIL_TYPE_EQUAL_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/detail/is_type_concatenate.hpp>
#include <boost/vmd/detail/match_single_identifier.hpp>
#include <boost/vmd/detail/type.hpp>

#define BOOST_VMD_DETAIL_TYPE_EQUAL(nmf,nms) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_PP_BITAND \
				( \
				BOOST_VMD_DETAIL_IS_TYPE(nmf), \
				BOOST_VMD_DETAIL_IS_TYPE(nms) \
				), \
			BOOST_VMD_DETAIL_MATCH_SINGLE_IDENTIFIER, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(nmf,nms) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_NOT_EQUAL(nmf,nms) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_DETAIL_TYPE_EQUAL(nmf,nms) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_TYPE_EQUAL_HPP */
