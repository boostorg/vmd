#if !defined(VMD_DATA_PPLIB_HPP)
#define VMD_DATA_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/preprocessor/variadic/to_array.hpp>
#include <boost/preprocessor/variadic/to_list.hpp>
#include <boost/preprocessor/variadic/to_seq.hpp>
#include <boost/preprocessor/variadic/to_tuple.hpp>

#define BOOST_VMD_DATA_SIZE(...) \
  BOOST_PP_VARIADIC_SIZE(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_ELEM(n,...) \
  BOOST_PP_VARIADIC_ELEM(n,__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_TUPLE(...) \
  BOOST_PP_VARIADIC_TO_TUPLE(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_ARRAY(...) \
  BOOST_PP_VARIADIC_TO_ARRAY(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_LIST(...) \
  BOOST_PP_VARIADIC_TO_LIST(__VA_ARGS__) \
/**/

#define BOOST_VMD_DATA_TO_PP_SEQ(...) \
  BOOST_PP_VARIADIC_TO_SEQ(__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DATA_PPLIB_HPP */
