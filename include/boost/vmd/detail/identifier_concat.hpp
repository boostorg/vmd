#if !defined(BOOST_VMD_DETAIL_IDENTIFIER_CONCAT_HPP)
#define BOOST_VMD_DETAIL_IDENTIFIER_CONCAT_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/vmd/detail/idprefix.hpp>

#define BOOST_VMD_DETAIL_IDENTIFIER_CONCATENATE(vseq) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_REGISTRATION_PREFIX, \
		vseq \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IDENTIFIER_CONCAT_HPP */
