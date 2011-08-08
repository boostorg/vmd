#if !defined(VMD_DETAIL_IS_EMPTY_NATIVE_HPP)
#define VMD_DETAIL_IS_EMPTY_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_MSVC

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/variadic_macro_data/vmd_data.hpp>

#define VMD_DETAIL_IS_EMPTY_VC_IS_TUPLE_BEGIN(param) \
    BOOST_PP_DEC \
      ( \
      BOOST_VMD_DATA_SIZE \
        ( \
        VMD_DETAIL_IS_EMPTY_COMMON_EXPAND param \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_IS_EMPTY_NATIVE_HPP */
