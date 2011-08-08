#if !defined(VMD_REMOVE_PARENS_COMMON_HPP)
#define VMD_REMOVE_PARENS_COMMON_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/facilities/identity.hpp>
#include <boost/variadic_macro_data/vmd_is_tuple_begin.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_remove_parens.hpp>

/// Removes the set of parens from the start of a parameter if it has any.
/**

    param = a macro parameter.

    returns = the parameter with the beginning set of parens removed.
              If the parameter has no beginning set of parameters, the
              parameter is returned as is. If there are further sets of 
              parens after the beginning set of parameters, they are not
              removed.
    
*/
# define BOOST_VMD_REMOVE_PARENS(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_TUPLE_BEGIN(param), \
      VMD_DETAIL_REMOVE_PARENS, \
      BOOST_PP_IDENTITY \
      ) \
    (param)() \
/**/

#endif /* BOOST_VMD_VARIADICS */

#endif /* VMD_REMOVE_PARENS_COMMON_HPP */
