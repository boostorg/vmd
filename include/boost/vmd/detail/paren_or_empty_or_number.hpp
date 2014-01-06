#if !defined(BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP)
#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/is_begin_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_IS_BEGIN_NUMBER \
		) \
	(__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP */
