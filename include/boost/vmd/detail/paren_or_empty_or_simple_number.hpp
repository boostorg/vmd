#if !defined(BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER_HPP)
#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>
#include <boost/vmd/detail/after_number_simple.hpp>

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER_CHECK(parameter) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				BOOST_VMD_DETAIL_AFTER_NUMBER_SIMPLE(parameter) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER(parameter) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER_CHECK \
		) \
	(parameter) \
/**/

#endif /* BOOST_VMD_DETAIL_PAREN_OR_EMPTY_OR_SIMPLE_NUMBER_HPP */
