#if !defined(BOOST_VMD_DETAIL_REMOVE_PARENS_HPP)
#define BOOST_VMD_DETAIL_REMOVE_PARENS_HPP

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/preprocessor/tuple/enum.hpp>

#define BOOST_VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(BOOST_PP_TUPLE_ENUM(x)) \
/**/

#endif /* BOOST_VMD_DETAIL_REMOVE_PARENS_HPP */
