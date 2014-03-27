#if !defined(BOOST_VMD_DETAIL_IS_EMPTY_HPP)
#define BOOST_VMD_DETAIL_IS_EMPTY_HPP

#include <boost/vmd/detail/is_begin_tuple.hpp>

#if BOOST_VMD_MSVC

# pragma warning(once:4002)

#define BOOST_VMD_DETAIL_IS_EMPTY_IIF_0(t, b) b
#define BOOST_VMD_DETAIL_IS_EMPTY_IIF_1(t, b) t

#if BOOST_VMD_MSVC_V8

#define BOOST_VMD_DETAIL_IS_EMPTY_PROCESS(param) \
	BOOST_VMD_DETAIL_IS_BEGIN_TUPLE \
    	( \
        BOOST_VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C param () \
        ) \
/**/

#else

#define BOOST_VMD_DETAIL_IS_EMPTY_PROCESS(...) \
	BOOST_VMD_DETAIL_IS_BEGIN_TUPLE \
        ( \
        BOOST_VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ () \
        ) \
/**/

#endif

#else

#define BOOST_VMD_DETAIL_IS_EMPTY_IIF_0(t, ...) __VA_ARGS__
#define BOOST_VMD_DETAIL_IS_EMPTY_IIF_1(t, ...) t

#define BOOST_VMD_DETAIL_IS_EMPTY_PROCESS(...) \
	BOOST_VMD_DETAIL_IS_BEGIN_TUPLE \
        ( \
        BOOST_VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ () \
        ) \
/**/

#endif /* BOOST_VMD_MSVC */

#define BOOST_VMD_DETAIL_IS_EMPTY_PRIMITIVE_CAT(a, b) a ## b
#define BOOST_VMD_DETAIL_IS_EMPTY_IIF(bit) \
    BOOST_VMD_DETAIL_IS_EMPTY_PRIMITIVE_CAT(BOOST_VMD_DETAIL_IS_EMPTY_IIF_,bit) \
/**/

#define BOOST_VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C(...) ()

#endif /* BOOST_VMD_DETAIL_IS_EMPTY_HPP */
