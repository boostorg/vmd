#if !defined(BOOST_VMD_IS_EMPTY_HPP)
#define BOOST_VMD_IS_EMPTY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/detail/is_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_EMPTY(...)

    \brief Tests whether its input is empty or not.

    The macro checks to see if the input is empty or not.
    It returns 1 if the input is empty, else returns 0.
    
    The macro is a variadic macro taking any input and works through variadic macro support.
    
    The macro is not perfect, and can not be so. The problem
    area is if the input to be checked is a function-like
    macro name, in which case either a compiler error can result
    or a false result can occur.
    
    This macro is a replacement, using variadic macro support,
    for the undocumented macro BOOST_PP_IS_EMPTY in the Boost
    pplib. The code is taken from a posting by Paul Mensonides
    of a variadic version for BOOST_PP_IS_EMPTY, and changed 
    in order to also support VC++.
    
    .... = variadic input

    returns = 1 if the input is empty, 0 if it is not
    
    It is recommended to append BOOST_PP_EMPTY() to whatever input
    is being tested in order to avoid possible warning messages 
    from some compilers about no parameters being passed to the macro
    when the input is truly empty.
    
*/

#if BOOST_VMD_MSVC_V8

#define BOOST_VMD_IS_EMPTY(param) \
    BOOST_VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE \
        ( \
        param \
        ) \
      ) \
      ( \
      BOOST_VMD_GEN_ZERO, \
      BOOST_VMD_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (param) \
/**/

#else

#define BOOST_VMD_IS_EMPTY(...) \
    BOOST_VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE \
        ( \
        __VA_ARGS__ \
        ) \
      ) \
      ( \
      BOOST_VMD_GEN_ZERO, \
      BOOST_VMD_DETAIL_IS_EMPTY_PROCESS \
      ) \
    (__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_MSVC_V8 */
#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_EMPTY_HPP */
