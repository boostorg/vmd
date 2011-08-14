#if !defined(VMD_IS_EMPTY_NATIVE_HPP)
#define VMD_IS_EMPTY_NATIVE_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_MSVC

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/variadic_macro_data/vmd_data.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_is_empty.hpp>

/** \brief Tests whether its input is empty or not.

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
#define BOOST_VMD_IS_EMPTY(...) \
    VMD_DETAIL_IS_EMPTY_IIF \
      ( \
      BOOST_PP_DEC \
        ( \
        BOOST_VMD_DATA_SIZE \
          ( \
          VMD_DETAIL_IS_EMPTY_COMMON_EXPAND __VA_ARGS__ \
          ) \
        ) \
      ) \
      ( \
      VMD_DETAIL_IS_EMPTY_GEN_ZERO, \
      VMD_DETAIL_IS_EMPTY_VC_IS_TUPLE_BEGIN \
      ) \
    (VMD_DETAIL_IS_EMPTY_NON_FUNCTION_C __VA_ARGS__ ()) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_MSVC */
#endif /* VMD_IS_EMPTY_NATIVE_HPP */
