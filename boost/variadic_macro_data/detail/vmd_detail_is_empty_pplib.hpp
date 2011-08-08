#if !defined(VMD_DETAIL_IS_EMPTY_PPLIB_HPP)
#define VMD_DETAIL_IS_EMPTY_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_MSVC

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/variadic/size.hpp>

#define VMD_DETAIL_IS_EMPTY_TUPLE_BEGIN(param) \
    BOOST_PP_DEC \
      ( \
      BOOST_PP_VARIADIC_SIZE \
        ( \
        VMD_DETAIL_IS_EMPTY_COMMON_EXPAND param \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_MSVC */
#endif /* VMD_DETAIL_IS_EMPTY_PPLIB_HPP */
