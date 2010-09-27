#if !defined(VMD_DETAIL_HPP)
#define VMD_DETAIL_HPP

#include <boost/config.hpp>

#if !defined(BOOST_NO_VARIADIC_MACROS)

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/reverse.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>
#if defined(BOOST_MSVC)
#include <boost/preprocessor/tuple/rem.hpp>
#include <boost/preprocessor/tuple/eat.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#endif

#define VMD_DETAIL_ARG_N( \
  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10, \
  A11,A12,A13,A14,A15,A16,A17,A18,A19,A20, \
  A21,A22,A23,A24,A25,A26,A27,A28,A29,A30, \
  A31,A32,A33,A34,A35,A36,A37,A38,A39,A40, \
  A41,A42,A43,A44,A45,A46,A47,A48,A49,A50, \
  A51,A52,A53,A54,A55,A56,A57,A58,A59,A60, \
  A61,A62,A63,N,...) N \
/**/
#define VMD_DETAIL_RSEQ_N() \
  63,62,61,60, \
  59,58,57,56,55,54,53,52,51,50, \
  49,48,47,46,45,44,43,42,41,40, \
  39,38,37,36,35,34,33,32,31,30, \
  29,28,27,26,25,24,23,22,21,20, \
  19,18,17,16,15,14,13,12,11,10, \
  9,8,7,6,5,4,3,2,1,0 \
/**/
#define VMD_DETAIL_APPLY_I(macro, args) \
  macro args \
/**/
#define VMD_DETAIL_APPLY(macro, args) \
  VMD_DETAIL_APPLY_I(macro, args) \
/**/
#define VMD_DETAIL_DATA_TO_PP_TUPLE(...) \
  ( __VA_ARGS__ ) \
/**/
#define VMD_DETAIL_REMOVE_TUPLE_PARENS(...) \
  __VA_ARGS__ \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_DATA(tuple) \
  VMD_DETAIL_REMOVE_TUPLE_PARENS tuple \
/**/
#define VMD_DETAIL_DATA_SIZE(...) \
  VMD_DETAIL_APPLY(VMD_DETAIL_ARG_N, (__VA_ARGS__, VMD_DETAIL_RSEQ_N())) \
/**/
#define VMD_DETAIL_PP_TUPLE_ELEM(size,i,tuple) \
  BOOST_PP_TUPLE_ELEM(size,i,tuple) \
/**/
#define VMD_DETAIL_DATA_ELEMENT(n,...) \
  VMD_DETAIL_PP_TUPLE_ELEM(VMD_DETAIL_DATA_SIZE(__VA_ARGS__),n,VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_DATA_TO_PP_ARRAY(...) \
  ( VMD_DETAIL_DATA_SIZE(__VA_ARGS__) , VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_LIST(size,tuple) \
  BOOST_PP_TUPLE_TO_LIST(size,tuple) \
/**/
#define VMD_DETAIL_DATA_TO_PP_LIST(...) \
  VMD_DETAIL_PP_TUPLE_TO_LIST(VMD_DETAIL_DATA_SIZE(__VA_ARGS__),VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_SEQ(size,tuple) \
  BOOST_PP_TUPLE_TO_SEQ(size,tuple) \
/**/
#define VMD_DETAIL_DATA_TO_PP_SEQ(...) \
  VMD_DETAIL_PP_TUPLE_TO_SEQ(VMD_DETAIL_DATA_SIZE(__VA_ARGS__),VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_PP_TUPLE_SIZE(tuple) \
  VMD_DETAIL_DATA_SIZE(VMD_DETAIL_PP_TUPLE_TO_DATA(tuple)) \
/**/

#if defined(BOOST_MSVC)
#define VMD_DETAIL_PP_TUPLE_EAT(size) \
  BOOST_PP_TUPLE_EAT(size) \
/**/
#define VMD_DETAIL_PP_TUPLE_REM(size) \
  BOOST_PP_TUPLE_REM(size) \
/**/
#define VMD_DETAIL_PP_REPEAT(count,macro,data) \
  BOOST_PP_REPEAT(count, macro, data) \
/**/
#endif

#define VMD_DETAIL_PP_TUPLE_REM_CTOR(size,tuple) \
  BOOST_PP_TUPLE_REM_CTOR(size,tuple) \
/**/
#define VMD_DETAIL_PP_TUPLE_REVERSE(size,tuple) \
  BOOST_PP_TUPLE_REVERSE(size,tuple) \
/**/

#endif // BOOST_NO_VARIADIC_MACROS
#endif // VMD_DETAIL_HPP
