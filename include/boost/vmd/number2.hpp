#if !defined(BOOST_VMD_NUMBER2_HPP)
#define BOOST_VMD_NUMBER2_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/number.hpp>
#if BOOST_VMD_ASSERT_DATA
#include <boost/vmd/assert.hpp>
#endif

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning number and the preprocessor tokens after the beginning number in a parameter.

    vseq      = A v-sequence to test.

    returns   = the result is a tuple of two elements.
    			If a beginning number is not found, both elements of the tuple are empty.
   				If a beginning number is found, the first element
   				is the number and the second element is the preprocessor tokens after the number.
    
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_NUMBER(vseq) \
	BOOST_VMD_DETAIL_NUMBER(vseq) \
/**/

/** \brief Expands to the beginning number of a macro parameter.

    vseq      = A v-sequence to test.
    
    returns = the beginning number of the v-sequence.
    		  If the parameter does not start with a number,
    		  the return value is empty.
    		  
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_BEGIN_NUMBER(vseq) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_NUMBER(vseq) \
		) \
/**/

/** \brief Expands to the preprocessor tokens after a number of a macro parameter.

    vseq      = A v-sequence to test.

    returns   = expands to the preprocessor tokens after a number.
    			If the number is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_NUMBER(vseq) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_NUMBER(vseq) \
		) \
/**/

/** \brief Tests whether a parameter begins with a number.

    vseq      = A v-sequence to test.

    returns = 1 if the v-sequence begins with a number, 
              0 if it does not.
              
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_IS_BEGIN_NUMBER(vseq) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_NUMBER(vseq) \
			) \
		) \
/**/

/** \def BOOST_VMD_IS_NUMBER(ppident)

    \brief Tests whether a parameter is a Boost PP number.

    The macro checks to see if a parameter is a Boost PP number.
    A Boost PP number is a value from 0 to 256.
    
    ppident = a preprocessor identifier

    returns = 1 if the param is a Boost PP number, 
              0 if it is not.
              
    The macro works through variadic macro support.
    The ppident can be either:
    
    1) A preprocessor identifier, alphanumeric or underscore characters.
    2) An empty value, returns 0.
    3) A set of beginning parens, returns 0.
    
    If it is not one of these possibilities a compiler error will occur.
    
*/

#define BOOST_VMD_IS_NUMBER(ppident) \
	BOOST_VMD_DETAIL_IS_NUMBER(ppident) \
/**/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_NUMBER(ppident)

#else

#define BOOST_VMD_ASSERT_IS_NUMBER(ppident) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_NUMBER(ppident), \
      	BOOST_VMD_IS_NUMBER_ASSERT_ERROR \
      	) \
/**/

#endif // !BOOST_VMD_ASSERT_DATA

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_NUMBER2_HPP */
