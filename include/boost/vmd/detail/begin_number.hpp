#if !defined(BOOST_VMD_DETAIL_BEGIN_NUMBER_HPP)
#define BOOST_VMD_DETAIL_BEGIN_NUMBER_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>
#include <boost/vmd/detail/begin_number_find.hpp>
#include <boost/vmd/detail/is_number_find.hpp>

#define BOOST_VMD_DETAIL_BEGIN_NUMBER_GET(parameter) \
	BOOST_PP_EXPAND \
		( \
		BOOST_PP_CAT \
			( \
			BOOST_VMD_DETAIL_FIND_BEGIN_NUMBER_GEN_, \
			parameter \
			) \
		BOOST_PP_RPAREN() \
		) \
/**/

#define BOOST_VMD_DETAIL_BEGIN_NUMBER(parameter) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY \
			( \
			BOOST_PP_CAT \
				( \
				BOOST_VMD_DETAIL_FIND_IS_NUMBER_, \
				parameter \
				) \
			), \
		BOOST_VMD_DETAIL_BEGIN_NUMBER_GET, \
		BOOST_VMD_GEN_EMPTY \
		) \
	(parameter) \
/**/

#endif /* BOOST_VMD_DETAIL_BEGIN_NUMBER_HPP */
