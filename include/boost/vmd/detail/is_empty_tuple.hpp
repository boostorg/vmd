#if !defined(BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_HPP)
#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/tuple/is_tuple.hpp>

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_CEM(tuple) \
	BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)) \
/**/

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_SIZE_IR(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL(BOOST_PP_TUPLE_SIZE(tuple),1), \
		BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_CEM, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_SIZE(tuple) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_SIZE_IR(tuple)) \
/**/

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_IR(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_TUPLE(tuple), \
		BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_SIZE, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_IS_EMPTY_TUPLE(param) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_IR(param)) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_HPP */
