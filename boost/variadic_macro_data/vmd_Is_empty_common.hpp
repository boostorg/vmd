#if !defined(VMD_IS_EMPTY_COMMON_HPP)
#define VMD_IS_EMPTY_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/variadic_macro_data/vmd_is_tuple_begin.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_is_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_MSVC

#define BOOST_VMD_IS_EMPTY(...) \
    VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_VMD_IS_TUPLE_BEGIN \
        ( \
        __VA_ARGS__ \
        ) \
      ) \
      ( \
      0, \
      BOOST_VMD_IS_TUPLE_BEGIN \
        ( \
        VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ () \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_VARIADICS */

#endif /* VMD_IS_EMPTY_COMMON_HPP */
