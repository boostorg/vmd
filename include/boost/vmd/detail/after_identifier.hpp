#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/after.hpp>
#include <boost/vmd/detail/make_tuple.hpp>
#include <boost/vmd/detail/match_identifier.hpp>

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_IDS(after,tuple,...) \
	BOOST_PP_IF \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			BOOST_PP_TUPLE_ELEM(1,BOOST_PP_TUPLE_ELEM(0,tuple)), \
			BOOST_VMD_DETAIL_MAKE_TUPLE(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
			), \
		after, \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_IPRE(after,tuple,...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_PP_EQUAL(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__),1), \
			BOOST_VMD_IS_EMPTY \
				( \
				after \
				) \
			), \
		BOOST_VMD_IDENTITY(after), \
		BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_IDS \
		) \
	(after,tuple,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_PRE(after,tuple,...) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_IPRE(after,tuple,__VA_ARGS__)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_VELEM(tuple,...) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_CHK_PRE \
		( \
		BOOST_VMD_DETAIL_ELEM_AFTER \
			( \
			tuple, \
			BOOST_VMD_TYPE_IDENTIFIER \
			), \
		tuple, \
		__VA_ARGS__ \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER(elem,...) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER_VELEM \
		( \
		BOOST_VMD_ELEM \
			( \
			elem, \
			BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__), \
			BOOST_VMD_RETURN_GENERAL_TUPLE_TYPE \
			), \
		__VA_ARGS__ \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_HPP */
