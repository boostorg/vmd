#if !defined(VMD_DETAIL_REMOVE_PARENS_HPP)
#define VMD_DETAIL_REMOVE_PARENS_HPP

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/preprocessor/tuple/enum.hpp>

#define VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(BOOST_PP_TUPLE_ENUM(x)) \
/**/

#endif /* VMD_DETAIL_REMOVE_PARENS_HPP */
