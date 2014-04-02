#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_HPP

#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/after_identifier_common.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_OP_TEST(state) \
	BOOST_VMD_IS_EMPTY \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_REST(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_OP(d,state) \
	( \
	BOOST_PP_TUPLE_ELEM(0,state), \
	BOOST_PP_TUPLE_ELEM(1,state), \
	BOOST_PP_INC(BOOST_PP_TUPLE_ELEM(2,state)), \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_OP_TEST(state), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_FOUND, \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_CONTINUE \
		) \
	(state) \
	) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY(parameter,keys) \
	BOOST_PP_TUPLE_ELEM \
		( \
		3, \
		BOOST_PP_WHILE \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PRED, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_OP, \
				( \
				parameter, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_TUPLE(keys), \
				0, \
				(0,) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_D(d,parameter,keys) \
	BOOST_PP_TUPLE_ELEM \
		( \
		3, \
		BOOST_PP_WHILE_ ## d \
			( \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_PRED, \
			BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_OP, \
				( \
				parameter, \
				BOOST_VMD_DETAIL_AFTER_IDENTIFIER_TUPLE(keys), \
				0, \
				(0,) \
				) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_ONLY(parameter,keys) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY \
      ) \
    (parameter,keys) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_ONLY_D(d,parameter,keys) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_D \
      ) \
    (d,parameter,keys) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_ONLY_HPP */
