#if !defined(BOOST_VMD_DETAIL_MAKE_TUPLE_HPP)
#define BOOST_VMD_DETAIL_MAKE_TUPLE_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/variadic/to_tuple.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_begin_tuple.hpp>

#define BOOST_VMD_DETAIL_IMAKE_TUPLE(keys) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(keys), \
		BOOST_VMD_IDENTITY(keys), \
		BOOST_PP_VARIADIC_TO_TUPLE \
		) \
	(keys) \
/**/

#define BOOST_VMD_DETAIL_MAKE_TUPLE(keys) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IMAKE_TUPLE(keys)) \
/**/

#endif // BOOST_VMD_DETAIL_MAKE_TUPLE_HPP
