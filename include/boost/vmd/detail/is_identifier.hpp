#if !defined(BOOST_VMD_DETAIL_IS_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_IS_IDENTIFIER_HPP

#include <boost/preprocessor/comparison/not_equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>

#define BOOST_VMD_DETAIL_IS_IDENTIFIER_VRETURN(tuple) \
	BOOST_PP_TUPLE_ELEM(0,tuple) \
/**/

#define BOOST_VMD_DETAIL_IS_IDENTIFIER_IRESULT(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITAND \
			( \
			BOOST_PP_NOT_EQUAL(BOOST_PP_TUPLE_ELEM(0,tuple),0), \
			BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,tuple)) \
			), \
		BOOST_VMD_DETAIL_IS_IDENTIFIER_VRETURN, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_IS_IDENTIFIER(tuple) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IS_IDENTIFIER_IRESULT(tuple)) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_IDENTIFIER_HPP */
