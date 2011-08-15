#if !defined(VMD_DATA_NATIVE_HPP)
#define VMD_DATA_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/variadic_macro_data/detail/vmd_detail_data.hpp>

#define BOOST_VMD_DATA_SIZE(...) \
  VMD_DETAIL_DATA_SIZE(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_ELEM(n,...) \
  VMD_DETAIL_DATA_ELEM(n,__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_TUPLE(...) \
  VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_ARRAY(...) \
  VMD_DETAIL_DATA_TO_PP_ARRAY(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_LIST(...) \
  VMD_DETAIL_DATA_TO_PP_LIST(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_SEQ(...) \
  VMD_DETAIL_DATA_TO_PP_SEQ(__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DATA_NATIVE_HPP */
