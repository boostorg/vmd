#if !defined(BOOST_VMD_AFTER_NUMBER_HPP)
#define BOOST_VMD_AFTER_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/number.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after a number of a macro parameter.

    ...       = One or two variadic parameters. These parameters are:
    
    parameter = the macro parameter to test for a number
    cnumber   = an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the first number to be found.

    returns   = expands to the preprocessor tokens after a number.
    			If the number is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_NUMBER(...) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_NUMBER(__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_NUMBER_HPP */
