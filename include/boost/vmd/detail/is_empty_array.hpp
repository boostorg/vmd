#if !defined(BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_HPP)
#define BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_HPP

#include <boost/preprocessor/array/size.hpp>
#include <boost/preprocessor/logical/not.hpp>

#define BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_SIZE(array) \
	BOOST_PP_NOT \
		( \
		BOOST_PP_ARRAY_SIZE(array) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_HPP */
