#if !defined(VMD_DETAIL_TUPLE_NATIVE_HPP)
#define VMD_DETAIL_TUPLE_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/reverse.hpp>
#include <boost/preprocessor/tuple/rem.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_data_native.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>

#else

#include <boost/variadic_macro_data/detail/vmd_detail_native.hpp>

#endif

#define VMD_DETAIL_REMOVE_TUPLE_PARENS(...) \
  __VA_ARGS__ \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_DATA(tuple) \
  VMD_DETAIL_REMOVE_TUPLE_PARENS tuple \
/**/
#define VMD_DETAIL_PP_TUPLE_ELEM(size,i,tuple) \
  BOOST_PP_TUPLE_ELEM(size,i,tuple) \
/**/
#define VMD_DETAIL_PP_TUPLE_SIZE(tuple) \
  VMD_DETAIL_DATA_SIZE(VMD_DETAIL_PP_TUPLE_TO_DATA(tuple)) \
/**/
#define VMD_DETAIL_PP_TUPLE_REM_CTOR(size,tuple) \
  BOOST_PP_TUPLE_REM_CTOR(size,tuple) \
/**/
#define VMD_DETAIL_PP_TUPLE_REVERSE(size,tuple) \
  BOOST_PP_TUPLE_REVERSE(size,tuple) \
/**/

#if BOOST_VMD_MSVC

#define VMD_DETAIL_PP_TUPLE_VC_TO_LIST(size,tuple) \
  BOOST_PP_TUPLE_TO_LIST(size,tuple) \
/**/

#define VMD_DETAIL_PP_TUPLE_VC_TO_SEQ(size,tuple) \
  BOOST_PP_TUPLE_TO_SEQ(size,tuple) \
/**/

#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_TUPLE_NATIVE_HPP */
