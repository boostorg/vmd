#if !defined(VMD_IS_TUPLE_BEGIN_COMMON_HPP)
#define VMD_IS_TUPLE_BEGIN_COMMON_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include "detail/vmd_detail_is_empty.hpp"

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_MSVC

# define BOOST_VMD_IS_TUPLE_BEGIN(...) \
    VMD_DETAIL_IS_EMPTY_SPLIT \
      ( \
      0, \
      VMD_DETAIL_IS_EMPTY_CAT \
        ( \
        VMD_DETAIL_IS_EMPTY_IS_VARIADIC_R_, \
        VMD_DETAIL_IS_EMPTY_IS_VARIADIC_C __VA_ARGS__ \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_VARIADICS */

#endif /* VMD_IS_TUPLE_BEGIN_COMMON_HPP */
