#if !defined(BOOST_VMD_DETAIL_SEQUENCE_TYPE_HPP)
#define BOOST_VMD_DETAIL_SEQUENCE_TYPE_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/is_from.hpp>
#include <boost/vmd/detail/sequence_elem.hpp>
#include <boost/vmd/detail/variadic_pop_front.hpp>

#define BOOST_VMD_DETAIL_TYPE_TUPLE_SEQUENCE(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,tuple)), \
		BOOST_PP_TUPLE_ELEM(0,BOOST_PP_TUPLE_ELEM(0,tuple)), \
		BOOST_VMD_TYPE_VSEQUENCE \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_TUPLE_I(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)), \
		BOOST_VMD_IDENTITY(BOOST_VMD_TYPE_EMPTY), \
		BOOST_VMD_DETAIL_TYPE_TUPLE_SEQUENCE \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_TYPE_TUPLE(tuple) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_TYPE_TUPLE_I(tuple)) \
/**/

#define BOOST_VMD_DETAIL_TYPE_SINGLE(...) \
	BOOST_VMD_DETAIL_TYPE_TUPLE \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM \
			( \
			BOOST_VMD_ALLOW_ALL, \
			0, \
			__VA_ARGS__, \
			BOOST_VMD_RETURN_AFTER, \
			BOOST_VMD_RETURN_TYPE \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_MORE(...) \
	BOOST_VMD_DETAIL_TYPE_TUPLE \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM \
			( \
			BOOST_VMD_ALLOW_ALL, \
			0, \
			BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__), \
			BOOST_VMD_RETURN_AFTER, \
			BOOST_VMD_RETURN_TYPE, \
			BOOST_VMD_DETAIL_VARIADIC_POP_FRONT(__VA_ARGS__) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__),1), \
		BOOST_VMD_DETAIL_TYPE_SINGLE, \
		BOOST_VMD_DETAIL_TYPE_MORE \
		) \
	(__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_SEQUENCE_TYPE_HPP */
