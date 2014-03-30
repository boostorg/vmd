#if !defined(BOOST_VMD_NUMBER_HPP)
#define BOOST_VMD_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/after_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning number and the preprocessor tokens after the beginning number in a parameter.

    ...       = One to three variadic parameters. These parameters are:
    
    first     = required, the macro parameter to test for a beginning number.
    second    = optional,
    	cnumber     an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the beginning number to be found.
                
                OR
                
        isequence   an optional Boost PP sequence of 1-5 elements. The elements of the sequence are 
        			keys for possibly subsequent identifiers. The keys can be specified as either a 
        			single key or as a tuple of keys. The actual number of sequence elements may be 
        			more than the amount of consecutive identifiers which exist after the beginning 
        			number. The identifiers	matching the keys must either end the parameter or have 
        			a set of parenthesis after them for the beginning number to be found.
        			
	third     = optional,
		isequence   if the second optional variadic parameter is a 'cnumber', the third parameter
					can be an 'isequence'. This allows the beginning number to be followed by one or
					more other numbers, and then followed by one or more identifiers.

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

/** \brief Expands to the beginning number of a macro parameter.

    ...       = One to three variadic parameters. These parameters are:
    
    first     = required, the macro parameter to test for a beginning number.
    second    = optional,
    	cnumber     an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the beginning number to be found.
                
                OR
                
        isequence   an optional Boost PP sequence of 1-5 elements. The elements of the sequence are 
        			keys for possibly subsequent identifiers. The keys can be specified as either a 
        			single key or as a tuple of keys. The actual number of sequence elements may be 
        			more than the amount of consecutive identifiers which exist after the beginning 
        			number. The identifiers	matching the keys must either end the parameter or have 
        			a set of parenthesis after them for the beginning number to be found.
        			
	third     = optional,
		isequence   if the second optional variadic parameter is a 'cnumber', the third parameter
					can be an 'isequence'. This allows the beginning number to be followed by one or
					more other numbers, and then followed by one or more identifiers.

    returns = the beginning number of the parameter.
    		  If the parameter does not start with a number,
    		  the return value is empty.
    		  
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_BEGIN_NUMBER(...) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_NUMBER(__VA_ARGS__) \
		) \
/**/

/** \brief Expands to the preprocessor tokens after a number of a macro parameter.

    ...       = One to three variadic parameters. These parameters are:
    
    first     = required, the macro parameter to test for a beginning number.
    second    = optional,
    	cnumber     an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the beginning number to be found.
                
                OR
                
        isequence   an optional Boost PP sequence of 1-5 elements. The elements of the sequence are 
        			keys for possibly subsequent identifiers. The keys can be specified as either a 
        			single key or as a tuple of keys. The actual number of sequence elements may be 
        			more than the amount of consecutive identifiers which exist after the beginning 
        			number. The identifiers	matching the keys must either end the parameter or have 
        			a set of parenthesis after them for the beginning number to be found.
        			
	third     = optional,
		isequence   if the second optional variadic parameter is a 'cnumber', the third parameter
					can be an 'isequence'. This allows the beginning number to be followed by one or
					more other numbers, and then followed by one or more identifiers.

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

/** \brief Tests whether a parameter begins with a number.

    ...       = One to three variadic parameters. These parameters are:
    
    first     = required, the macro parameter to test for a beginning number.
    second    = optional,
    	cnumber     an optional digit from 1-5 indicating the maximum amount of consecutive numbers in the parameter.
                Specifying 1 is not necessary but allowed, as 1 is the default.
                The actual cnumber may be more than the amount of consecutive numbers which exist.
                The consecutive numbers must either end the parameter or have a set of parenthesis
                after them for the beginning number to be found.
                
                OR
                
        isequence   an optional Boost PP sequence of 1-5 elements. The elements of the sequence are 
        			keys for possibly subsequent identifiers. The keys can be specified as either a 
        			single key or as a tuple of keys. The actual number of sequence elements may be 
        			more than the amount of consecutive identifiers which exist after the beginning 
        			number. The identifiers	matching the keys must either end the parameter or have 
        			a set of parenthesis after them for the beginning number to be found.
        			
	third     = optional,
		isequence   if the second optional variadic parameter is a 'cnumber', the third parameter
					can be an 'isequence'. This allows the beginning number to be followed by one or
					more other numbers, and then followed by one or more identifiers.

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
#endif /* BOOST_VMD_NUMBER_HPP */
