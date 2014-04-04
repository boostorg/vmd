#if !defined(BOOST_VMD_DETAIL_AFTER_NUMBER_COMMON_HPP)
#define BOOST_VMD_DETAIL_AFTER_NUMBER_COMMON_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/punctuation/paren.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/detail/begin_number_find.hpp>
#include <boost/vmd/detail/is_number.hpp>

#define BOOST_VMD_DETAIL_AFTER_NUMBER_GET_NUMBER(parameter) \
	BOOST_PP_EXPAND \
		( \
		BOOST_PP_CAT \
			( \
			BOOST_VMD_DETAIL_FIND_BEGIN_NUMBER_GEN_, \
			parameter \
			) \
		BOOST_PP_RPAREN() \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_GET(...) \
	( \
	BOOST_VMD_DETAIL_AFTER_NUMBER_GET_NUMBER(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
	BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
	) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_NUMBER_COMMON_HPP */
