#if !defined(BOOST_VMD_DETAIL_AFTER_NUMBER_HPP)
#define BOOST_VMD_DETAIL_AFTER_NUMBER_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/comparison/greater.hpp>
#include <boost/preprocessor/comparison/less_equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/logical/bool.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/seq/seq.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/seq.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/after_identifier_from_number.hpp>
#include <boost/vmd/detail/after_number_common.hpp>
#include <boost/vmd/detail/after_number_re_common.hpp>
#include <boost/vmd/detail/after_number_re.hpp>
#include <boost/vmd/detail/is_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_RECURSE(...) \
	BOOST_VMD_DETAIL_AFTER_NUMBER_CAT(__VA_ARGS__) \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
		BOOST_PP_DEC(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_RECURSE_ID(...) \
	BOOST_VMD_DETAIL_AFTER_NUMBER_CAT(__VA_ARGS__) \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
		BOOST_PP_DEC(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)), \
		BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS(...) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM \
				( \
				0, \
				BOOST_PP_IIF \
					( \
					BOOST_PP_EQUAL \
						( \
						BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
						3 \
						), \
					BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_RECURSE_ID, \
					BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS_RECURSE \
					) \
				(__VA_ARGS__) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_LIMITS(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_BITOR \
			( \
			BOOST_PP_LESS_EQUAL \
				( \
				BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__), \
				BOOST_VMD_DETAIL_AFTER_NUMBER_MINIMUM \
				), \
			BOOST_PP_GREATER \
				( \
				BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__), \
				BOOST_VMD_DETAIL_AFTER_NUMBER_MAXIMUM \
				) \
			), \
		BOOST_VMD_GEN_ZERO, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_PROCESS \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ_ONE(...) \
	BOOST_PP_BOOL \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER \
				( \
				BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
				BOOST_PP_SEQ_HEAD(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ_MANY(...) \
	BOOST_PP_BOOL \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER \
				( \
				BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
				BOOST_PP_SEQ_HEAD(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)), \
				BOOST_PP_SEQ_TAIL(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
				) \
			) \
		) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ(...) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_ASSERT_IS_SEQ(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)), \
		BOOST_PP_IIF \
			( \
			BOOST_PP_EQUAL \
				( \
				BOOST_PP_SEQ_SIZE \
					( \
					BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
					), \
				1 \
				), \
			BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ_ONE, \
			BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ_MANY \
			) \
		(__VA_ARGS__) \
		) \
/**/

#else

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ(...) \
	BOOST_VMD_ASSERT_IS_SEQ(BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__)) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_SEQ_SIZE \
				( \
				BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
				), \
			1 \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ_ONE, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ_MANY \
		) \
	(__VA_ARGS__) \
/**/

#endif

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENTIFIER(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE \
			( \
			BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_SEQ, \
		BOOST_VMD_GEN_ZERO \
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
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_LIMITS, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENTIFIER \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_MORE_NUMBERS_DC(size) \
	BOOST_PP_BITOR \
		( \
		BOOST_PP_EQUAL(size,2), \
		BOOST_PP_EQUAL(size,3) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_MORE_NUMBERS(...) \
	BOOST_PP_IIF \
		( \
  		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_MORE_NUMBERS_DC(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__)), \
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

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ_ONE(...) \
	BOOST_PP_BOOL \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER \
				( \
				BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
				BOOST_PP_SEQ_HEAD(BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__)) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ_MANY(...) \
	BOOST_PP_BOOL \
		( \
		BOOST_PP_TUPLE_ELEM \
			( \
			0, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_FROM_NUMBER \
				( \
				BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
				BOOST_PP_SEQ_HEAD(BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__)), \
				BOOST_PP_SEQ_TAIL(BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__)) \
				) \
			) \
		) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ(...) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_ASSERT_IS_SEQ(BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__)), \
		BOOST_PP_IIF \
			( \
			BOOST_PP_EQUAL \
				( \
				BOOST_PP_SEQ_SIZE \
					( \
					BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__) \
					), \
				1 \
				), \
			BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ_ONE, \
			BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ_MANY \
			) \
		(__VA_ARGS__) \
		) \
/**/

#else

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ(...) \
	BOOST_VMD_ASSERT_IS_SEQ(BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__)) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_SEQ_SIZE \
				( \
				BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__) \
				), \
			1 \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ_ONE, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ_MANY \
		) \
	(__VA_ARGS__) \
/**/

#endif

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_IDENTIFIER(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_BEGIN_TUPLE \
			( \
			BOOST_PP_VARIADIC_ELEM(2,__VA_ARGS__) \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_SEQ, \
		BOOST_VMD_GEN_ZERO \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_PARAM(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			3 \
			), \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_IDENTIFIER, \
		BOOST_VMD_GEN_ZERO \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_NEXT_PEN_IDENT(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY \
			( \
			BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)) \
			), \
		BOOST_VMD_GEN_ONE, \
		BOOST_VMD_DETAIL_AFTER_NUMBER_CHECK_IDENT_PARAM \
		) \
	(__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_AFTER_NUMBER_1(...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_NUMBER_NEXT_PEN_IDENT(__VA_ARGS__), \
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

#endif /* BOOST_VMD_DETAIL_AFTER_NUMBER_HPP */
