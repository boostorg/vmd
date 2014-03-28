#if !defined(BOOST_VMD_DETAIL_LIST_HPP)
#define BOOST_VMD_DETAIL_LIST_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/is_list.hpp>

#define BOOST_VMD_DETAIL_LIST_SUCCESS(tuple) tuple

#define BOOST_VMD_DETAIL_LIST_CHECK_FOR_LIST(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_LIST \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_LIST_SUCCESS, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(tuple)	\
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_RETURN(tuple) \
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
		BOOST_VMD_DETAIL_LIST_CHECK_FOR_LIST \
		) \
	(tuple) \
/**/

#endif /* BOOST_VMD_DETAIL_LIST_HPP */
