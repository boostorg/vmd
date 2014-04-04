#if !defined(BOOST_VMD_DETAIL_AFTER_NUMBER_SIMPLE_HPP)
#define BOOST_VMD_DETAIL_AFTER_NUMBER_SIMPLE_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/detail/after_number_common.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/is_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_AFTER_NUMBER_SIMPLE(parameter) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter)), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_GET, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(parameter) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_NUMBER_SIMPLE_HPP */
