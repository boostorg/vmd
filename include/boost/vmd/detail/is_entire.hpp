#if !defined(BOOST_VMD_DETAIL_IS_ENTIRE_HPP)
#define BOOST_VMD_DETAIL_IS_ENTIRE_HPP

#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>

#define BOOST_VMD_DETAIL_IS_ENTIRE(tuple) \
	BOOST_PP_BITAND \
		( \
		BOOST_PP_COMPL \
			( \
			BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)) \
			), \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,tuple)) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_ENTIRE_HPP */
