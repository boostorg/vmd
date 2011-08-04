#if !defined(VMD_DETAIL_REMOVE_PARENS_NATIVE_HPP)
#define VMD_DETAIL_REMOVE_PARENS_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_tuple.hpp>

#define VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(VMD_DETAIL_PP_TUPLE_TO_DATA(x)) \
/**/

#endif // BOOST_VMD_VARIADICS
#endif // VMD_DETAIL_REMOVE_PARENS_NATIVE_HPP
