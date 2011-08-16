#if !defined(VMD_DETAIL_REMOVE_PARENS_HPP)
#define VMD_DETAIL_REMOVE_PARENS_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/variadic_macro_data/vmd_to_data.hpp>

#define VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(BOOST_VMD_PP_TUPLE_TO_DATA(x)) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_REMOVE_PARENS_HPP */
