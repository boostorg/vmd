#if !defined(VMD_TO_DATA_HPP)
#define VMD_TO_DATA_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_PP_ARRAY_TO_DATA(array)

    \brief Expands to variadic macro data whose arguments are the same as an array's elements.

    array = a Boost PP library array data type.

    returns = variadic macro data whose arguments are the same as the
              elements of an array that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/

/** \def BOOST_VMD_PP_LIST_TO_DATA(list)

    \brief Expands to variadic macro data whose arguments are the same as a list's elements.

    list = a Boost PP library list data type.

    returns = variadic macro data whose arguments are the same as the
              elements of a list that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/

/** \def BOOST_VMD_PP_SEQ_TO_DATA(seq)

    \brief Expands to variadic macro data whose arguments are the same as a sequence's elements.

    seq = a Boost PP library sequence data type.

    returns = variadic macro data whose arguments are the same as the
              elements of a sequence that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/

/** \def BOOST_VMD_PP_TUPLE_TO_DATA(tuple)

    \brief Expands to variadic macro data whose arguments are the same as a tuple's elements.

    tuple = a Boost PP library tuple data type.

    returns = variadic macro data whose arguments are the same as the
              elements of a tuple that is inputted.
              
    The variadic macro data that is returned is in the form of
    of comma separated arguments. The variadic macro data can be
    passed to any macro which takes variadic macro data in the form
    of a final variadic macro data '...' macro parameter.
    
*/

#if BOOST_VMD_PPLIB
#include <boost/variadic_macro_data/vmd_to_data_pplib.hpp>
#else
#include <boost/variadic_macro_data/vmd_to_data_native.hpp>
#endif /* BOOST_VMD_PPLIB */

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TO_DATA_HPP */
