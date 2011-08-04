#if !defined(VMD_DATA_NATIVE_HPP)
#define VMD_DATA_NATIVE_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include "detail/vmd_detail_data.hpp"

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/// Expands to the number of comma-separated variadic macro data arguments.
/**

    ... = variadic macro data.

    returns = the number of comma-separated variadic macro data
              arguments being passed to it.
    
    The value returned can be between 1 and 64.
    
*/
#define BOOST_VMD_DATA_SIZE(...) \
  VMD_DETAIL_DATA_SIZE(__VA_ARGS__) \
/**/

/// Expands to a particular variadic macro data argument.
/**

    n   = number of the variadic macro data argument.
          The number starts from 0 to the number of
          variadic macro data arguments - 1. The maximum
          number for n is 63.
          
    ... = variadic macro data.

    returns = the particular macro data argument as specified
              by n. The argument returned can be any valid
              preprocessing token.
              
*/
#define BOOST_VMD_DATA_ELEM(n,...) \
  VMD_DETAIL_DATA_ELEM(n,__VA_ARGS__) \
/**/

/// Expand to a Boost PP tuple data type.
/**

    ... = variadic macro data.

    returns = a Boost PP library tuple data type.
    
    You can use the result of this macro whenever 
    you need to pass a Boost PP library tuple as 
    data to a Boost PP library macro.
    
*/
#define BOOST_VMD_DATA_TO_PP_TUPLE(...) \
  VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__) \
/**/

/// Expand to a Boost PP array data type.
/**

    ... = variadic macro data.

    returns = a Boost PP library array data type.
    
    You can use the result of this macro whenever 
    you need to pass a Boost PP library array as 
    data to a Boost PP library macro.
    
*/
#define BOOST_VMD_DATA_TO_PP_ARRAY(...) \
  VMD_DETAIL_DATA_TO_PP_ARRAY(__VA_ARGS__) \
/**/

/// Expand to a Boost PP list data type.
/**

    ... = variadic macro data.

    returns = a Boost PP library list data type.
    
    You can use the result of this macro whenever
    you need to pass a Boost PP library list as
    data to a Boost PP library macro.
    
*/
#define BOOST_VMD_DATA_TO_PP_LIST(...) \
  VMD_DETAIL_DATA_TO_PP_LIST(__VA_ARGS__) \
/**/

/// Expand to a Boost PP sequence data type.
/**

    ... = variadic macro data.

    returns = a Boost PP library sequence data type.
    
    You can use the result of this macro whenever
    you need to pass a Boost PP library sequence as
    data to a Boost PP library macro.
    
*/
#define BOOST_VMD_DATA_TO_PP_SEQ(...) \
  VMD_DETAIL_DATA_TO_PP_SEQ(__VA_ARGS__) \
/**/


#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DATA_NATIVE_HPP */
