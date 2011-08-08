#if !defined(VMD_DETAIL_REMOVE_PARENS_PPLIB_HPP)
#define VMD_DETAIL_REMOVE_PARENS_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/preprocessor/tuple/enum.hpp>

#define VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(BOOST_PP_TUPLE_ENUM(x)) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_REMOVE_PARENS_PPLIB_HPP */
