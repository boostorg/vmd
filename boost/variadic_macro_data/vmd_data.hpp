#if !defined(VMD_DATA_HPP)
#define VMD_DATA_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_DATA_SIZE(...)

    \brief Expands to the number of comma-separated variadic macro data arguments.

    ... = variadic macro data.

    returns = the number of comma-separated variadic macro data
              arguments being passed to it.
    
    The value returned can be between 1 and 64.
    
*/

/** \def BOOST_VMD_DATA_ELEM(n,...)

    \brief Expands to a particular variadic macro data argument.

    n   = number of the variadic macro data argument.
          The number starts from 0 to the number of
          variadic macro data arguments - 1. The maximum
          number for n is 63.
          
    ... = variadic macro data.

    returns = the particular macro data argument as specified
              by n. The argument returned can be any valid
              preprocessing token.
              
*/

/** \def BOOST_VMD_DATA_TO_PP_TUPLE(...)

    \brief Expand to a Boost PP tuple data type.

    ... = variadic macro data.

    returns = a Boost PP library tuple data type.
    
    You can use the result of this macro whenever 
    you need to pass a Boost PP library tuple as 
    data to a Boost PP library macro.
    
*/

/** \def BOOST_VMD_DATA_TO_PP_ARRAY(...)

    \brief Expand to a Boost PP array data type.

    ... = variadic macro data.

    returns = a Boost PP library array data type.
    
    You can use the result of this macro whenever 
    you need to pass a Boost PP library array as 
    data to a Boost PP library macro.
    
*/

/** \def BOOST_VMD_DATA_TO_PP_LIST(...)

    \brief Expand to a Boost PP list data type.

    ... = variadic macro data.

    returns = a Boost PP library list data type.
    
    You can use the result of this macro whenever
    you need to pass a Boost PP library list as
    data to a Boost PP library macro.
    
*/

/** \def BOOST_VMD_DATA_TO_PP_SEQ(...)

    \brief Expand to a Boost PP sequence data type.

    ... = variadic macro data.

    returns = a Boost PP library sequence data type.
    
    You can use the result of this macro whenever
    you need to pass a Boost PP library sequence as
    data to a Boost PP library macro.
    
*/

#if BOOST_VMD_PPLIB
#include <boost/variadic_macro_data/vmd_data_pplib.hpp>
#else
#include <boost/variadic_macro_data/vmd_data_native.hpp>
#endif /* BOOST_VMD_PPLIB */

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DATA_HPP */
