#if !defined(VMD_DETAIL_MAIN_PPLIB_HPP)
#define VMD_DETAIL_MAIN_PPLIB_HPP

#include "vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/preprocessor/tuple/enum.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include "vmd_detail.hpp"

#define VMD_DETAIL_IS_EMPTY_VSIZE(...) VMD_DETAIL_IS_EMPTY_VSIZE2(__VA_ARGS__)
#define VMD_DETAIL_IS_EMPTY_VSIZE2(...) VMD_DETAIL_IS_EMPTY_VSIZE3(__VA_ARGS__)
#define VMD_DETAIL_IS_EMPTY_VSIZE3(...) BOOST_PP_VARIADIC_SIZE(__VA_ARGS__)

#define VMD_DETAIL_IS_EMPTY_TUPLE_BEGIN(param) \
    BOOST_PP_DEC \
      ( \
      VMD_DETAIL_IS_EMPTY_VSIZE \
        ( \
        VMD_DETAIL_COMMON_EXPAND param \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */

#define VMD_DETAIL_REMOVE_PARENS(x) \
  BOOST_PP_IDENTITY(BOOST_PP_TUPLE_ENUM(x)) \
/**/

#endif // BOOST_VMD_VARIADICS
#endif // VMD_DETAIL_MAIN_PPLIB_HPP
