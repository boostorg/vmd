#if !defined(VMD_IS_TUPLE_BEGIN_PPLIB_HPP)
#define VMD_IS_TUPLE_BEGIN_PPLIB_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_MSVC

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_is_begin_parens.hpp>

/** \brief Tests whether a parameter begins with a set of parentheses.

    The macro checks to see if the parameter begins with a 
    set of parentheses surrounding any tokens.
    
    .... = variadic param(s)

    returns = 1 if the param begins with a set of parentheses, 
              0 if it does not.
              
    The macro works through variadic macro support.
    
    The code for the non-VC++ version of this is taken from a 
    posting by Paul Mensonides.
    
    This macro is not a test for a parameter which is only 
    single set of parentheses surrounding any tokens ( a Boost
    pplib tuple ) since the parameter may have other tokens 
    following the beginning set of parentheses and it will still 
    return 1.
    
    There is no completely safe way to test whether the param is a tuple.
    At best one can use BOOST_VMD_ASSERT_IS_TUPLE to cause a compiler error 
    if the parameter is not a tuple.
    
*/
#define BOOST_VMD_IS_BEGIN_PARENS(param) \
    BOOST_PP_DEC \
      ( \
      BOOST_PP_VARIADIC_SIZE \
        ( \
        VMD_DETAIL_IS_TUPLE_BEGIN_COMMON_EXPAND param \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_MSVC */
#endif /* VMD_IS_TUPLE_BEGIN_PPLIB_HPP */
