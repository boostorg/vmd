#if !defined(VMD_IS_EMPTY_NATIVE_HPP)
#define VMD_IS_EMPTY_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/arithmetic/dec.hpp>

#include <boost/variadic_macro_data/vmd_data.hpp>
#include <boost/variadic_macro_data/vmd_is_tuple_begin.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_is_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/


#if BOOST_VMD_MSVC

#define BOOST_VMD_IS_EMPTY(param) \
    VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_PP_DEC \
        ( \
        BOOST_VMD_DATA_SIZE \
          ( \
          VMD_DETAIL_COMMON_EXPAND param \
          ) \
        ) \
      ) \
      ( \
      VMD_DETAIL_GEN_ZERO, \
      BOOST_VMD_IS_TUPLE_BEGIN \
      ) \
    (VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C param ()) \
/**/

#endif /* BOOST_VMD_MSVC */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_IS_EMPTY_NATIVE_HPP */
