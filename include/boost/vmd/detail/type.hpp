#if !defined(BOOST_VMD_DETAIL_TYPE_HPP)
#define BOOST_VMD_DETAIL_TYPE_HPP

#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/empty.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/equal_type.hpp>
#include <boost/vmd/detail/identifier.hpp>
#include <boost/vmd/detail/identifier_type.hpp>
#include <boost/vmd/detail/is_entire.hpp>
#include <boost/vmd/detail/modifiers.hpp>
#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/type_registration.hpp>

#define BOOST_VMD_DETAIL_TYPE_CHECK_ONLY_ID_TYPE(id) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_DETAIL_EQUAL_TYPE \
			( \
			BOOST_VMD_TYPE_TYPE, \
			BOOST_VMD_DETAIL_IDENTIFIER_TYPE(id) \
			), \
		id \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_CHECK_ID_TYPE(tuple) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_EQUAL_TYPE \
				( \
				BOOST_VMD_TYPE_TYPE, \
				BOOST_VMD_DETAIL_IDENTIFIER_TYPE(BOOST_PP_TUPLE_ELEM(0,tuple)) \
				), \
			BOOST_VMD_IDENTITY(tuple), \
			BOOST_VMD_DETAIL_EMPTY_RESULT \
			) \
		(tuple) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_SPLIT_TRES(tuple) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)), \
			BOOST_VMD_IDENTITY(tuple), \
			BOOST_VMD_DETAIL_TYPE_CHECK_ID_TYPE \
			) \
		(tuple) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_TRES_ID(id) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_IS_EMPTY(id), \
			BOOST_VMD_IDENTITY(id), \
			BOOST_VMD_DETAIL_TYPE_CHECK_ONLY_ID_TYPE \
			) \
		(id) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_SPLIT(...) \
	BOOST_VMD_DETAIL_TYPE_SPLIT_TRES \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER(__VA_ARGS__,BOOST_VMD_RETURN_NO_INDEX) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE_BEGIN(...) \
	BOOST_VMD_DETAIL_TYPE_TRES_ID \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER(__VA_ARGS__,BOOST_VMD_RETURN_NO_INDEX) \
		) \
/**/

#define BOOST_VMD_DETAIL_TYPE(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_MODS_IS_RESULT_AFTER \
			( \
			BOOST_VMD_DETAIL_NEW_MODS(BOOST_VMD_ALLOW_AFTER,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_TYPE_SPLIT, \
		BOOST_VMD_DETAIL_TYPE_BEGIN \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IS_TYPE(parameter) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_DETAIL_TYPE(parameter,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_TYPE_HPP */
