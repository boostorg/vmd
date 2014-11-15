#if !defined(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/sequence.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/elem.hpp>
#include <boost/vmd/detail/make_tuple.hpp>
#include <boost/vmd/detail/match_identifier.hpp>

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS(id,...) \
	BOOST_PP_IF \
		( \
		BOOST_VMD_DETAIL_MATCH_IDENTIFIER \
			( \
			id, \
			BOOST_VMD_DETAIL_MAKE_TUPLE(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
			), \
		id, \
		) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IPRE(id,...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_PP_EQUAL(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__),1), \
			BOOST_VMD_IS_EMPTY \
				( \
				id \
				) \
			), \
		BOOST_VMD_IDENTITY(id), \
		BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IDS \
		) \
	(id,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE(id,...) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_IPRE(id,__VA_ARGS__)) \
/**/

#define BOOST_VMD_DETAIL_ELEM_IDENTIFIER(elem,...) \
	BOOST_VMD_DETAIL_ELEM_IDENTIFIER_CHK_PRE \
		( \
		BOOST_VMD_DETAIL_ELEM \
			( \
			BOOST_VMD_ELEM \
				( \
				elem, \
				BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__), \
				BOOST_VMD_SPECIFIC_IDENTIFIER \
				), \
			BOOST_VMD_TYPE_IDENTIFIER \
			), \
		__VA_ARGS__ \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_ELEM_IDENTIFIER_HPP */
