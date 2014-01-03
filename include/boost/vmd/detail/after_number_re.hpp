#if !defined(BOOST_VMD_DETAIL_AFTER_NUMBER_RE_HPP)
#define BOOST_VMD_DETAIL_AFTER_NUMBER_RE_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/after_number_common.hpp>
#include <boost/vmd/detail/is_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_CAT(...) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_AFTER_NUMBER_, \
		BOOST_PP_DEC(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CAT(...) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_, \
		BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_1(...) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_VARIADIC_ELEM \
				( \
				0, \
				BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_CAT(__VA_ARGS__) \
					( \
					BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
					BOOST_PP_DEC(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
					) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS(...) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_VARIADIC_ELEM \
				( \
				0, \
				BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_CAT(__VA_ARGS__) \
					( \
					BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
					BOOST_PP_DEC(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
					) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_ZERO(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__), \
			0 \
			), \
		BOOST_VMD_GEN_ZERO, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_NUMBER(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER \
			( \
			BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_ZERO, \
		BOOST_VMD_GEN_ZERO \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_MORE_NUMBERS(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			2 \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_NUMBER, \
		BOOST_VMD_GEN_ZERO \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_NEXT_PEN(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY \
			( \
			BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_MORE_NUMBERS \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_1(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CAT(__VA_ARGS__)(__VA_ARGS__), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_GET, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_NOT_FOUND \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_0(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__))), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_GET, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_NOT_FOUND \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_NUMBER_NEXT_PEN(__VA_ARGS__), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_GET, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_NOT_FOUND \
		) \
	(__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_NUMBER_RE_HPP */
