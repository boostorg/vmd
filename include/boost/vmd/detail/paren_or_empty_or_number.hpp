#if !defined(BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP)
#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/is_begin_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER(param) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(param), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_IS_BEGIN_NUMBER \
		) \
	(param) \
/**/

#endif /* BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP */
