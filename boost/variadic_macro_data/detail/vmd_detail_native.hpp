#if !defined(VMD_DETAIL_NATIVE_HPP)
#define VMD_DETAIL_NATIVE_HPP

#include "vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#define VMD_DETAIL_REMOVE_TUPLE_PARENS(...) \
  __VA_ARGS__ \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_DATA(tuple) \
  VMD_DETAIL_REMOVE_TUPLE_PARENS tuple \
/**/

#endif // BOOST_VMD_VARIADICS
#endif // VMD_DETAIL_NATIVE_HPP
