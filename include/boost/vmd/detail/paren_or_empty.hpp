#if !defined(BOOST_VMD_DETAIL_PAREN_OR_EMPTY_HPP)
#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_HPP

#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/vmd/is_begin_parens.hpp>
#include <boost/vmd/is_empty.hpp>

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY(param) \
	BOOST_PP_BITOR \
		( \
		BOOST_VMD_IS_EMPTY(param), \
		BOOST_VMD_IS_BEGIN_PARENS(param) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_PAREN_OR_EMPTY_HPP */
