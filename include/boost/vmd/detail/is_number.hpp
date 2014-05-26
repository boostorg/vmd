#if !defined(BOOST_VMD_DETAIL_IS_NUMBER_HPP)
#define BOOST_VMD_DETAIL_IS_NUMBER_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/is_number_find.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_INF_, \
		parameter \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER_CONC(parameter) \
	BOOST_VMD_IS_EMPTY \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER_IRESULT(parameter) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
		BOOST_VMD_IDENTITY(0), \
		BOOST_VMD_DETAIL_IS_NUMBER_CONC \
		) \
	(parameter) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER(parameter) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IS_NUMBER_IRESULT(parameter)) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_NUMBER_HPP */
