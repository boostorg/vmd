#if !defined(VARIADIC_MACRO_DATA_HPP)
#define VARIADIC_MACRO_DATA_HPP

#include <boost/config.hpp>

#if !defined(BOOST_NO_VARIADIC_MACROS)

#include <boost/preprocessor/array/data.hpp>
#include <boost/preprocessor/list/to_tuple.hpp>
#include <boost/preprocessor/seq/to_tuple.hpp>
#include "detail/VMDDetail.hpp"

#define VMD_DATA_SIZE(...) \
  VMD_DETAIL_DATA_SIZE(__VA_ARGS__) \
/**/
#define VMD_DATA_ELEMENT(n,...) \
  VMD_DETAIL_DATA_ELEMENT(n,__VA_ARGS__) \
/**/
#define VMD_DATA_TO_PP_TUPLE(...) \
  VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__) \
/**/
#define VMD_DATA_TO_PP_ARRAY(...) \
  VMD_DETAIL_DATA_TO_PP_ARRAY(__VA_ARGS__) \
/**/
#define VMD_DATA_TO_PP_LIST(...) \
  VMD_DETAIL_DATA_TO_PP_LIST(__VA_ARGS__) \
/**/
#define VMD_DATA_TO_PP_SEQ(...) \
  VMD_DETAIL_DATA_TO_PP_SEQ(__VA_ARGS__) \
/**/
#define VMD_PP_TUPLE_SIZE(tuple) \
  VMD_DETAIL_PP_TUPLE_SIZE(tuple) \
/**/
#define VMD_PP_TUPLE_ELEM(n,tuple) \
  VMD_DETAIL_PP_TUPLE_ELEM(VMD_PP_TUPLE_SIZE(tuple),n,tuple) \
/**/
#define VMD_PP_TUPLE_REVERSE(tuple) \
  VMD_DETAIL_PP_TUPLE_REVERSE(VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/
#define VMD_PP_TUPLE_TO_LIST(tuple) \
  VMD_DETAIL_PP_TUPLE_TO_LIST(VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/
#define VMD_PP_TUPLE_TO_SEQ(tuple) \
  VMD_DETAIL_PP_TUPLE_TO_SEQ(VMD_PP_TUPLE_SIZE(tuple),tuple) \
/**/
#define VMD_PP_TUPLE_TO_DATA(tuple) \
  VMD_DETAIL_PP_TUPLE_TO_DATA(tuple) \
/**/
#define VMD_PP_ARRAY_TO_DATA(array) \
  VMD_PP_TUPLE_TO_DATA(BOOST_PP_ARRAY_DATA(array)) \
/**/
#define VMD_PP_LIST_TO_DATA(list) \
  VMD_PP_TUPLE_TO_DATA(BOOST_PP_LIST_TO_TUPLE(list)) \
/**/
#define VMD_PP_SEQ_TO_DATA(seq) \
  VMD_PP_TUPLE_TO_DATA(BOOST_PP_SEQ_TO_TUPLE(seq)) \
/**/
#define VMD_PP_REPEAT(count,macro,data) \
  VMD_DETAIL_PP_REPEAT(count,macro,data) \
/**/
#define VMD_PP_REPEAT_TUPLE(macro,data) \
  VMD_PP_REPEAT(VMD_PP_TUPLE_SIZE(data),macro,data) \
/**/

#endif // BOOST_NO_VARIADIC_MACROS
#endif // VARIADIC_MACRO_DATA_HPP