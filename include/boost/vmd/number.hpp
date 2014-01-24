#if !defined(BOOST_VMD_NUMBER_HPP)
#define BOOST_VMD_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/detail/after_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the number and the preprocessor tokens after the beginning number in a parameter.

    ...       = One or two variadic parameters. These parameters are:
    
    parameter = the macro parameter to test for a number
    cnumber   = an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the first number to be found.

    returns   = the result is a tuple of two elements.
    			If a beginning number is not found, both elements of the tuple are empty.
   				If a beginning number is found, the first element
   				is the number and the second element is the preprocessor tokens after the number.
    
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_NUMBER(...) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
      BOOST_VMD_DETAIL_AFTER_NUMBER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_NUMBER \
      ) \
    (__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_NUMBER_HPP */
