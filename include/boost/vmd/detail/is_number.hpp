#if !defined(BOOST_VMD_DETAIL_IS_NUMBER_HPP)
#define BOOST_VMD_DETAIL_IS_NUMBER_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/is_number_find.hpp>

#define BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_INF_, \
		parameter \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER(parameter) \
	BOOST_VMD_IS_EMPTY \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_NUMBER_HPP */
