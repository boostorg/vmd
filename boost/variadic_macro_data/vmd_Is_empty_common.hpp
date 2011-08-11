#if !defined(VMD_IS_EMPTY_COMMON_HPP)
#define VMD_IS_EMPTY_COMMON_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && !BOOST_VMD_MSVC

#include <boost/variadic_macro_data/vmd_is_begin_parens.hpp>
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
    
    .... = variadic param(s)

    returns = 1 if the param is empty, 0 if it is not
    
*/
#define BOOST_VMD_IS_EMPTY(...) \
    VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS \
        ( \
        __VA_ARGS__ \
        ) \
      ) \
      ( \
      0, \
      BOOST_VMD_IS_BEGIN_PARENS \
        ( \
        VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ () \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_VARIADICS && !BOOST_VMD_MSVC */
#endif /* VMD_IS_EMPTY_COMMON_HPP */
