#if !defined(BOOST_VMD_IS_BEGIN_TUPLE_HPP)
#define BOOST_VMD_IS_BEGIN_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_begin_tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_BEGIN_TUPLE(...)

    \brief Tests whether a parameter begins with a tuple.

    The macro checks to see if the parameter begins with a tuple.
    
    .... = variadic param(s)

    returns = 1 if the param begins with a tuple, 
              0 if it does not.
              
    The macro works through variadic macro support.
    
    The code for the non-VC++ version of this is taken from a 
    posting by Paul Mensonides.
    
    This macro is not a test for only a tuple
    since the parameter may have other tokens 
    following the tuple and it will still 
    return 1.
    
*/

#if BOOST_VMD_MSVC_V8

#define BOOST_VMD_IS_BEGIN_TUPLE(param) \
    BOOST_VMD_DETAIL_IBT_SPLIT \
      ( \
      0, \
      BOOST_VMD_DETAIL_IBT_CAT \
        ( \
        BOOST_VMD_DETAIL_IBT_IS_VARIADIC_R_, \
        BOOST_VMD_DETAIL_IBT_IS_VARIADIC_C param \
        ) \
      ) \
/**/

#else

#define BOOST_VMD_IS_BEGIN_TUPLE(...) \
    BOOST_VMD_DETAIL_IBT_SPLIT \
      ( \
      0, \
      BOOST_VMD_DETAIL_IBT_CAT \
        ( \
        BOOST_VMD_DETAIL_IBT_IS_VARIADIC_R_, \
        BOOST_VMD_DETAIL_IBT_IS_VARIADIC_C __VA_ARGS__ \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC_V8 */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_TUPLE_HPP */
