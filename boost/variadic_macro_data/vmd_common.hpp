#if !defined(VMD_COMMON_HPP)
#define VMD_COMMON_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/facilities/identity.hpp>

#include "detail/vmd_detail.hpp"

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

# define BOOST_VMD_REMOVE_PARENS(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_TUPLE_BEGIN(x), \
      VMD_DETAIL_REMOVE_PARENS, \
      BOOST_PP_IDENTITY \
      ) \
    (x)() \
/**/

#endif // BOOST_VMD_VARIADICS
#endif // VMD_COMMON_HPP
