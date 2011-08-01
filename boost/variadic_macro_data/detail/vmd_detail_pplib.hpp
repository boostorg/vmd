#if !defined(VMD_DETAIL_PPLIB_HPP)
#define VMD_DETAIL_PPLIB_HPP

#include "vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/preprocessor/tuple/enum.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/variadic/size.hpp>

#endif /* BOOST_PP_VARIADICS_MSVC */

#define VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(BOOST_PP_TUPLE_ENUM(x)) \
/**/

#if BOOST_VMD_MSVC

# define VMD_DETAIL_IS_EMPTY_IS_TUPLE_BEGIN(x) \
    BOOST_PP_DEC \
      ( \
      BOOST_PP_VARIADIC_SIZE \
        ( \
        VMD_DETAIL_IS_EMPTY_IS_TUPLE_BEGIN_EXPAND x \
        ) \
      ) \
/**/

#endif /* BOOST_PP_VARIADICS_MSVC */

#endif // BOOST_VMD_VARIADICS
#endif // VMD_DETAIL_PPLIB_HPP
