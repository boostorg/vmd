#if !defined(VMD_MAIN_NATIVE_HPP)
#define VMD_MAIN_NATIVE_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/array/data.hpp>
#include <boost/preprocessor/list/to_tuple.hpp>
#include <boost/preprocessor/seq/to_tuple.hpp>
#include "vmd_tuple.hpp"

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/// Expands to variadic macro data whose arguments are the same as an array's elements.
/**

    array = a Boost PP library array data type.

    returns = variadic macro data whose arguments are the same as the
              elements of an array that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/
#define BOOST_VMD_PP_ARRAY_TO_DATA(array) \
  BOOST_VMD_PP_TUPLE_TO_DATA(BOOST_PP_ARRAY_DATA(array)) \
/**/

/// Expands to variadic macro data whose arguments are the same as a list's elements.
/**

    list = a Boost PP library list data type.

    returns = variadic macro data whose arguments are the same as the
              elements of a list that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/
#define BOOST_VMD_PP_LIST_TO_DATA(list) \
  BOOST_VMD_PP_TUPLE_TO_DATA(BOOST_PP_LIST_TO_TUPLE(list)) \
/**/

/// Expands to variadic macro data whose arguments are the same as a sequence's elements.
/**

    seq = a Boost PP library sequence data type.

    returns = variadic macro data whose arguments are the same as the
              elements of a sequence that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/
#define BOOST_VMD_PP_SEQ_TO_DATA(seq) \
  BOOST_VMD_PP_TUPLE_TO_DATA(BOOST_PP_SEQ_TO_TUPLE(seq)) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_MAIN_NATIVE_HPP */
