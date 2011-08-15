#if !defined(VMD_TUPLE_NATIVE_HPP)
#define VMD_TUPLE_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/variadic_macro_data/detail/vmd_detail_tuple.hpp>

#if !BOOST_VMD_MSVC

#include <boost/variadic_macro_data/detail/vmd_detail_native.hpp>

#endif

#define BOOST_VMD_PP_TUPLE_SIZE(tuple) \
  VMD_DETAIL_PP_TUPLE_SIZE(tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_ELEM(n,tuple) \
  VMD_DETAIL_PP_TUPLE_ELEM(BOOST_VMD_PP_TUPLE_SIZE(tuple),n,tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_REM_CTOR(tuple) \
  VMD_DETAIL_PP_TUPLE_REM_CTOR(BOOST_VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_REVERSE(tuple) \
  VMD_DETAIL_PP_TUPLE_REVERSE(BOOST_VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/

#if BOOST_VMD_MSVC

#define BOOST_VMD_PP_TUPLE_TO_LIST(tuple) \
  VMD_DETAIL_PP_TUPLE_VC_TO_LIST(BOOST_VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_TO_SEQ(tuple) \
  VMD_DETAIL_PP_TUPLE_VC_TO_SEQ(BOOST_VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/

#else

#define BOOST_VMD_PP_TUPLE_TO_LIST(tuple) \
  VMD_DETAIL_PP_TUPLE_TO_LIST(BOOST_VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_TO_SEQ(tuple) \
  VMD_DETAIL_PP_TUPLE_TO_SEQ(BOOST_VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/

#endif /* BOOST_VMD_MSVC */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TUPLE_NATIVE_HPP */
