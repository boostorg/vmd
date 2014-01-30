#if !defined(BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAIN_HPP)
#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAIN_HPP

#include <boost/preprocessor/comparison/greater.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/detail/after_identifier_common.hpp>

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAXIMUM 4 \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_OP_SEQ_SIZE(state) \
	BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(4,state)) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER_BEGIN_CINFO(...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_GREATER \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			1 \
			), \
		BOOST_VMD_DETAIL_AFTER_IDENTIFIER_CINFO_DATA, \
		BOOST_VMD_GEN_EMPTY \
		) \
	(__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_IDENTIFIER_MAIN_HPP */
