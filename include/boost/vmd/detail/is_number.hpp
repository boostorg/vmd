#if !defined(BOOST_VMD_DETAIL_IS_NUMBER_HPP)
#define BOOST_VMD_DETAIL_IS_NUMBER_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/is_number_find.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_IS_NUMBER(ident) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(ident), \
		BOOST_VMD_GEN_ZERO, \
		BOOST_VMD_DETAIL_IS_NUMBER_EMPTY \
		) \
	(ident) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER_EMPTY(ident) \
	BOOST_VMD_IS_EMPTY \
		( \
		BOOST_PP_CAT \
			( \
			BOOST_VMD_DETAIL_FIND_IS_NUMBER_, \
			ident \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_NUMBER_HPP */
