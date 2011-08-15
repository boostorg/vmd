#if !defined(VMD_TO_DATA_NATIVE_HPP)
#define VMD_TO_DATA_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/array/data.hpp>
#include <boost/preprocessor/list/to_tuple.hpp>
#include <boost/preprocessor/seq/to_tuple.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_to_data.hpp>

#define BOOST_VMD_PP_ARRAY_TO_DATA(array) \
  BOOST_VMD_PP_TUPLE_TO_DATA(BOOST_PP_ARRAY_DATA(array)) \
/**/

#define BOOST_VMD_PP_LIST_TO_DATA(list) \
  BOOST_VMD_PP_TUPLE_TO_DATA(BOOST_PP_LIST_TO_TUPLE(list)) \
/**/

#define BOOST_VMD_PP_SEQ_TO_DATA(seq) \
  BOOST_VMD_PP_TUPLE_TO_DATA(BOOST_PP_SEQ_TO_TUPLE(seq)) \
/**/

#define BOOST_VMD_PP_TUPLE_TO_DATA(tuple) \
  VMD_DETAIL_PP_TUPLE_TO_DATA(tuple) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TO_DATA_NATIVE_HPP */
