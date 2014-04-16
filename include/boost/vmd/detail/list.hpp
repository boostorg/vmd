#if !defined(BOOST_VMD_DETAIL_LIST_HPP)
#define BOOST_VMD_DETAIL_LIST_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/facilities/overload.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/replace.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/identifier.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/tuple.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/is_list.hpp>

#define BOOST_VMD_DETAIL_LIST_SUCCESS(tuple) tuple

#define BOOST_VMD_DETAIL_LIST_CHECK_FOR_LIST(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_IS_LIST \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_LIST_SUCCESS, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(tuple)	\
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_FOR_LIST_D(d,tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_IS_LIST_D \
			( \
			d, \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_LIST_SUCCESS, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(tuple)	\
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_RETURN(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_LIST_CHECK_FOR_LIST \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_RETURN_D(d,tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				tuple \
				) \
			), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_LIST_CHECK_FOR_LIST_D \
		) \
	(d,tuple) \
/**/

#define BOOST_VMD_DETAIL_LIST_EMPTY_LIST(list) \
	BOOST_VMD_IDENTIFIER(list,VMD_DETAIL_NULL_LIST_) \
/**/

#define BOOST_VMD_DETAIL_LIST_EMPTY_LIST_D(d,list) \
	BOOST_VMD_IDENTIFIER_D(d,list,VMD_DETAIL_NULL_LIST_) \
/**/

#define BOOST_VMD_DETAIL_LIST_TUPLE(param) \
	BOOST_VMD_DETAIL_LIST_CHECK_RETURN \
		( \
		BOOST_VMD_TUPLE(param) \
		) \
/**/

#define BOOST_VMD_DETAIL_LIST_TUPLE_D(d,param) \
	BOOST_VMD_DETAIL_LIST_CHECK_RETURN_D \
		( \
		d, \
		BOOST_VMD_TUPLE(param) \
		) \
/**/

#define BOOST_VMD_DETAIL_LIST_RETURN_EMPTY(tuple) \
	BOOST_PP_TUPLE_REPLACE(tuple,0,BOOST_PP_NIL) \
/**/

#define BOOST_VMD_DETAIL_LIST_RETURN_EMPTY_D(d,tuple) \
	BOOST_PP_TUPLE_REPLACE_D(d,tuple,0,BOOST_PP_NIL) \
/**/

#define BOOST_VMD_DETAIL_LIST_EMPTY_PROCESS(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_TUPLE_ELEM(0,tuple), \
		BOOST_VMD_DETAIL_LIST_RETURN_EMPTY, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_LIST_EMPTY_PROCESS_D(d,tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_TUPLE_ELEM(0,tuple), \
		BOOST_VMD_DETAIL_LIST_RETURN_EMPTY_D, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(d,tuple) \
/**/

#define BOOST_VMD_DETAIL_LIST_EMPTY(list) \
	BOOST_VMD_DETAIL_LIST_EMPTY_PROCESS \
		( \
		BOOST_VMD_DETAIL_LIST_EMPTY_LIST(list) \
		) \
/**/

#define BOOST_VMD_DETAIL_LIST_EMPTY_D(d,list) \
	BOOST_VMD_DETAIL_LIST_EMPTY_PROCESS_D \
		( \
		d, \
		BOOST_VMD_DETAIL_LIST_EMPTY_LIST_D(d,list) \
		) \
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_BOTH(list) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(list), \
		BOOST_VMD_DETAIL_LIST_TUPLE, \
		BOOST_VMD_DETAIL_LIST_EMPTY \
		) \
	(list) \
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_BOTH_D(d,list) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(list), \
		BOOST_VMD_DETAIL_LIST_TUPLE_D, \
		BOOST_VMD_DETAIL_LIST_EMPTY_D \
		) \
	(d,list) \
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_ONLY(list) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(list), \
		BOOST_VMD_DETAIL_LIST_TUPLE, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(list) \
/**/

#define BOOST_VMD_DETAIL_LIST_CHECK_ONLY_D(d,list) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE(list), \
		BOOST_VMD_DETAIL_LIST_TUPLE_D, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(d,list) \
/**/

#define BOOST_VMD_DETAIL_LIST_CE_1(list) 0

#define BOOST_VMD_DETAIL_LIST_CE_2(list,cfe) cfe

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_LIST_DO_CHECK_FOR_EMPTY(...) \
	BOOST_PP_CAT(BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_LIST_CE_,__VA_ARGS__)(__VA_ARGS__),BOOST_PP_EMPTY()) \
/**/

#else

#define BOOST_VMD_DETAIL_LIST_DO_CHECK_FOR_EMPTY(...) \
	BOOST_PP_OVERLOAD(BOOST_VMD_DETAIL_LIST_CE_,__VA_ARGS__)(__VA_ARGS__) \
/**/

#endif

#define BOOST_VMD_DETAIL_LIST(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_LIST_DO_CHECK_FOR_EMPTY(__VA_ARGS__), \
		BOOST_VMD_DETAIL_LIST_CHECK_BOTH, \
		BOOST_VMD_DETAIL_LIST_CHECK_ONLY \
		) \
	(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
/**/

#define BOOST_VMD_DETAIL_LIST_D(d,...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_LIST_DO_CHECK_FOR_EMPTY(__VA_ARGS__), \
		BOOST_VMD_DETAIL_LIST_CHECK_BOTH_D, \
		BOOST_VMD_DETAIL_LIST_CHECK_ONLY_D \
		) \
	(d,BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
/**/

#endif /* BOOST_VMD_DETAIL_LIST_HPP */
