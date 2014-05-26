#if !defined(BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP)
#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/after_number_from_identifier.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_IBN(...) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				BOOST_VMD_DETAIL_AFTER_NUMBER_FROM_IDENTIFIER(__VA_ARGS__) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_RESULT(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
		BOOST_VMD_IDENTITY(1), \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_IBN \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER(...) \
    BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_RESULT(__VA_ARGS__)) \
/**/

#endif /* BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_NUMBER_HPP */
