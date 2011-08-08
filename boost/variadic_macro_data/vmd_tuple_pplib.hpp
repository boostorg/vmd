#if !defined(VMD_TUPLE_PPLIB_HPP)
#define VMD_TUPLE_PPLIB_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/enum.hpp>
#include <boost/preprocessor/tuple/rem.hpp>
#include <boost/preprocessor/tuple/reverse.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>

/// Expands to the number of elements in a tuple.
/**

    tuple = a Boost PP library tuple data type.

    returns = the number of elements in the tuple,
              commonly referred to as the tuple size.
              
    In the Boost PP library there is no way to calculate
    the size of a tuple, so that the size must be known
    in order to be used by Boost PP library tuple macros.
    With variadic macros the size of a tuple can be
    calculated from the tuple itself.
    
*/
#define BOOST_VMD_PP_TUPLE_SIZE(tuple) \
  BOOST_PP_TUPLE_SIZE(tuple) \
/**/

/// Expands to a particular tuple element.
/**

    n   = number of the tuple element.
          The number starts from 0 to the size of
          the tuple - 1.
          
    tuple = a Boost PP library tuple data type.

    returns = the particular tuple element as specified
              by n.
              
    In the Boost PP library there is no way to calculate 
    the size of a tuple, so that the size must be known 
    in order to be used by Boost PP library tuple macros.
    With variadic macros the size of a tuple can be 
    calculated from the tuple itself.
    
    Therefore this macro is a replacement for the BOOST_PP_TUPLE_ELEM
    macro without the necessity of having to pass a size.
    
*/
#define BOOST_VMD_PP_TUPLE_ELEM(n,tuple) \
  BOOST_PP_TUPLE_ELEM(n,tuple) \
/**/

/// Expands to a series of tokens which are equivalent to removing the parentheses from a tuple.
/**

    tuple = a Boost PP library tuple data type.

    returns = a series of comma-separated tokens equivalent to removing the parentheses from a tuple.
    
              This result is actually equivalent to the form of variadic macro data
              and can be used as an alternative to BOOST_VMD_PP_TUPLE_TO_DATA to convert
              the tuple to variadic macro data.
              
    In the Boost PP library there is no way to calculate 
    the size of a tuple, so that the size must be known 
    in order to be used by Boost PP library tuple macros.
    With variadic macros the size of a tuple can be 
    calculated from the tuple itself.
    
    Therefore this macro is a replacement for the BOOST_PP_TUPLE_REM_CTOR
    macro without the necessity of having to pass a size.
    
*/
#define BOOST_VMD_PP_TUPLE_REM_CTOR(tuple) \
  BOOST_PP_TUPLE_REM_CTOR(tuple) \
/**/

/// Expands to a tuple whose elements are in reversed order.
/**

    tuple = a Boost PP library tuple data type.

    returns = a tuple whose elements are in reversed order
              from the original tuple.
              
    In the Boost PP library there is no way to calculate 
    the size of a tuple, so that the size must be known 
    in order to be used by Boost PP library tuple macros.
    With variadic macros the size of a tuple can be 
    calculated from the tuple itself.
    
    Therefore this macro is a replacement for the BOOST_PP_TUPLE_REVERSE
    macro without the necessity of having to pass a size.
    
*/
#define BOOST_VMD_PP_TUPLE_REVERSE(tuple) \
  BOOST_PP_TUPLE_REVERSE(tuple) \
/**/

/// Expands to a list whose elements are the same as a tuple.
/**

    tuple = a Boost PP library tuple data type.

    returns = a list whose elements are the same as the tuple
              that is inputted.
              
    In the Boost PP library there is no way to calculate 
    the size of a tuple, so that the size must be known 
    in order to be used by Boost PP library tuple macros.
    With variadic macros the size of a tuple can be 
    calculated from the tuple itself.
    
    Therefore this macro is a replacement for the BOOST_PP_TUPLE_TO_LIST
    macro without the necessity of having to pass a size.
    
*/
#define BOOST_VMD_PP_TUPLE_TO_LIST(tuple) \
  BOOST_PP_TUPLE_TO_LIST(tuple) \
/**/

/// Expands to a sequence whose elements are the same as a tuple.
/**

    tuple = a Boost PP library tuple data type.

    returns = a sequence whose elements are the same as the tuple
              that is inputted.
              
    In the Boost PP library there is no way to calculate 
    the size of a tuple, so that the size must be known 
    in order to be used by Boost PP library tuple macros.
    With variadic macros the size of a tuple can be 
    calculated from the tuple itself.
    
    Therefore this macro is a replacement for the BOOST_PP_TUPLE_TO_SEQ
    macro without the necessity of having to pass a size.
    
*/
#define BOOST_VMD_PP_TUPLE_TO_SEQ(tuple) \
  BOOST_PP_TUPLE_TO_SEQ(tuple) \
/**/

/// Expands to variadic macro data whose arguments are the same as a tuple's elements.
/**

    tuple = a Boost PP library tuple data type.

    returns = variadic macro data whose arguments are the same as the
              elements of a tuple that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/
#define BOOST_VMD_PP_TUPLE_TO_DATA(tuple) \
  BOOST_PP_TUPLE_ENUM(tuple) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TUPLE_PPLIB_HPP */
