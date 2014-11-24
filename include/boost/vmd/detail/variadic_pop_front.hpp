#if !defined(BOOST_VMD_DETAIL_VARIADIC_POP_FRONT_HPP)
#define BOOST_VMD_DETAIL_VARIADIC_POP_FRONT_HPP

#include <boost/preprocessor/tuple/enum.hpp>
#include <boost/preprocessor/tuple/pop_front.hpp>
#include <boost/preprocessor/variadic/to_tuple.hpp>

#define BOOST_VMD_DETAIL_VARIADIC_POP_FRONT(...) \
	BOOST_PP_TUPLE_ENUM \
		( \
		BOOST_PP_TUPLE_POP_FRONT \
			( \
			BOOST_PP_VARIADIC_TO_TUPLE(__VA_ARGS__) \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_VARIADIC_POP_FRONT_HPP */
