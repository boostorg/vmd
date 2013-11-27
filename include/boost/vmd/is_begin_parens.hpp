#if !defined(BOOST_VMD_IS_BEGIN_PARENS_HPP)
#define BOOST_VMD_IS_BEGIN_PARENS_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_begin_parens.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_BEGIN_PARENS(...)

    \brief Tests whether a parameter begins with a set of parentheses.

    The macro checks to see if the parameter begins with a 
    set of parentheses surrounding any tokens.
    
    .... = variadic param(s)

    returns = 1 if the param begins with a set of parentheses, 
              0 if it does not.
              
    The macro works through variadic macro support.
    
    The code for the non-VC++ version of this is taken from a 
    posting by Paul Mensonides.
    
    This macro is not a test for a parameter which is only a
    single set of parentheses surrounding any tokens ( a Boost
    pplib tuple ) since the parameter may have other tokens 
    following the beginning set of parentheses and it will still 
    return 1.
    
    There is no completely safe way to test whether the param is a tuple.
    At best one can use BOOST_VMD_ASSERT_IS_TUPLE to cause a compiler error 
    if the parameter is not a tuple.
    
*/

#if BOOST_VMD_MSVC_V8

#define BOOST_VMD_IS_BEGIN_PARENS(param) \
    BOOST_VMD_DETAIL_IS_BEGIN_PARENS_SPLIT \
      ( \
      0, \
      BOOST_VMD_DETAIL_IS_BEGIN_PARENS_CAT \
        ( \
        BOOST_VMD_DETAIL_IS_BEGIN_PARENS_IS_VARIADIC_R_, \
        BOOST_VMD_DETAIL_IS_BEGIN_PARENS_IS_VARIADIC_C param \
        ) \
      ) \
/**/

#else

#define BOOST_VMD_IS_BEGIN_PARENS(...) \
    BOOST_VMD_DETAIL_IS_BEGIN_PARENS_SPLIT \
      ( \
      0, \
      BOOST_VMD_DETAIL_IS_BEGIN_PARENS_CAT \
        ( \
        BOOST_VMD_DETAIL_IS_BEGIN_PARENS_IS_VARIADIC_R_, \
        BOOST_VMD_DETAIL_IS_BEGIN_PARENS_IS_VARIADIC_C __VA_ARGS__ \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC_V8 */
#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_PARENS_HPP */
