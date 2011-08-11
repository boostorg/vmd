#if !defined(VMD_IS_EMPTY_PPLIB_HPP)
#define VMD_IS_EMPTY_PPLIB_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_MSVC

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_is_empty.hpp>

/** \brief Tests whether a parameter is empty or not.

    The macro checks to see if the parameter is empty or not.
    It returns 1 if the parameter is empty, else returns 0.
    
    The macro works through variadic macro support.
    
    The macro is not perfect, and can not be so. The problem
    area is if the parameter to be checked is a function-like
    macro name, in which case either a compiler error can result
    or a false result can occur.
    
    This macro is a replacement, using variadic macro support,
    for the undocumented macro BOOST_PP_IS_EMPTY in the Boost
    pplib. The code is taken from a posting by Paul Mensonides
    of a variadic version for BOOST_PP_IS_EMPTY, and changed 
    in order to also support VC++.
    
    param = a parameter

    returns = 1 if the param is empty, 0 if it is not
    
*/
#define BOOST_VMD_IS_EMPTY(param) \
    VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_PP_DEC \
        ( \
        BOOST_PP_VARIADIC_SIZE \
          ( \
          VMD_DETAIL_IS_EMPTY_COMMON_EXPAND param \
          ) \
        ) \
      ) \
      ( \
      VMD_DETAIL_IS_EMPTY_GEN_ZERO, \
      VMD_DETAIL_IS_EMPTY_TUPLE_BEGIN \
      ) \
    (VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C param ()) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_MSVC */
#endif /* VMD_IS_EMPTY_PPLIB_HPP */
