#if !defined(BOOST_VMD_DETAIL_ARRAY_HPP)
#define BOOST_VMD_DETAIL_ARRAY_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/is_array.hpp>
#include <boost/vmd/detail/tuple.hpp>

#define BOOST_VMD_DETAIL_ARRAY_SUCCESS(tuple) tuple

#define BOOST_VMD_DETAIL_ARRAY_CHECK_FOR_ARRAY(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_IS_ARRAY_CHECK_TUPLE_SIZE \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_ARRAY_SUCCESS, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(tuple)	\
/**/

#define BOOST_VMD_DETAIL_ARRAY_CHECK_RETURN(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_ARRAY_CHECK_FOR_ARRAY \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_ARRAY(array) \
	BOOST_VMD_DETAIL_ARRAY_CHECK_RETURN \
		( \
		BOOST_VMD_DETAIL_TUPLE(array) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_ARRAY_HPP */
