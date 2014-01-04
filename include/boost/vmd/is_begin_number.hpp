#if !defined(BOOST_VMD_IS_BEGIN_NUMBER_HPP)
#define BOOST_VMD_IS_BEGIN_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/not.hpp>
#include <boost/vmd/begin_number.hpp>
#include <boost/vmd/is_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Tests whether a parameter begins with a number.

    ...       = One or two variadic parameters. These parameters are:
    
    parameter = the macro parameter to test for a number
    cnumber   = an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the first number to be found.

    returns = 1 if the param begins with a number, 
              0 if it does not.
              
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_IS_BEGIN_NUMBER(...) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_NUMBER(__VA_ARGS__) \
			) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_NUMBER_HPP */
