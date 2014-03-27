#if !defined(BOOST_VMD_DETAIL_REMOVE_PARENS_HPP)
#define BOOST_VMD_DETAIL_REMOVE_PARENS_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/preprocessor/tuple/enum.hpp>
#include <boost/vmd/is_begin_tuple.hpp>

#define BOOST_VMD_DETAIL_REMOVE_PARENS(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE(param), \
      BOOST_VMD_DETAIL_REMOVE_PARENS_EXEC, \
      BOOST_PP_IDENTITY \
      ) \
    (param)() \
/**/

#define BOOST_VMD_DETAIL_REMOVE_PARENS_EXEC(x) \
  BOOST_PP_IDENTITY(BOOST_PP_TUPLE_ENUM(x)) \
/**/

#endif /* BOOST_VMD_DETAIL_REMOVE_PARENS_HPP */
