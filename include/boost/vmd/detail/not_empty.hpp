#if !defined(BOOST_VMD_DETAIL_NOT_EMPTY_HPP)
#define BOOST_VMD_DETAIL_NOT_EMPTY_HPP

#include <boost/preprocessor/logical/compl.hpp>
#include <boost/vmd/is_empty.hpp>

#define BOOST_VMD_DETAIL_NOT_EMPTY(par) \
	BOOST_PP_COMPL \
		( \
		BOOST_VMD_IS_EMPTY(par) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_NOT_EMPTY_HPP */
