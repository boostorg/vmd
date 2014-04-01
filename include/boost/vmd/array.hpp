#if !defined(BOOST_VMD_ARRAY_HPP)
#define BOOST_VMD_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/tuple.hpp>
#include <boost/vmd/detail/array.hpp>
#include <boost/vmd/detail/is_entire.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning array, and the preprocessor tokens after the beginning array, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with an array, both elements of the tuple are empty.
   				If the param does start with an array, the first element is the array
   				and the second element is the preprocessor tokens after the beginning array.
    
*/
#define BOOST_VMD_ARRAY(param) \
	BOOST_VMD_DETAIL_ARRAY_CHECK_RETURN \
		( \
		BOOST_VMD_TUPLE(param) \
		) \
/**/

/** \brief Expands to the beginning array of a macro parameter.

    param = a macro parameter.

    returns   = A beginning array of the macro parameter.
    			If the param does not start with an array, expands to nothing.
    
*/
#define BOOST_VMD_BEGIN_ARRAY(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_ARRAY(param) \
		) \
/**/

/** \brief Expands to the preprocessor tokens after the beginning array of a macro parameter.

    param = a macro parameter.

    returns   = The preprocessor tokens after the beginning array of the macro parameter.
    			If the param does not start with an array, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_ARRAY(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_ARRAY(param) \
		) \
/**/

/** \brief Tests whether a parameter begins with an array.

    param = a macro parameter.

    returns = 1 if the param begins with an array,
              0 if it does not.
    
*/
#define BOOST_VMD_IS_BEGIN_ARRAY(param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_ARRAY(param) \
			) \
		) \
/**/

/** \def BOOST_VMD_IS_ARRAY(array)

    \brief Determines if a parameter is a Boost pplib array.

    The macro checks that the parameter is a pplib array.
    It returns 1 if it is an array, else if returns 0.

    The macro works through variadic macro support.
    
    array = a possible pplib array.

    returns = 1 if it an array, else returns 0.
    
*/

#define BOOST_VMD_IS_ARRAY(array) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_ARRAY(array) \
		) \
/**/

/** \def BOOST_VMD_ASSERT_IS_ARRAY(array)

    \brief Asserts that the parameter is a pplib array.

    The macro checks that the parameter is a pplib array.
    If it is not a pplib array, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib array only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    array = a possible pplib array.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a pplib array, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a pplib array the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              pplib array.
    
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_ARRAY(array)

#else

#include <boost/vmd/assert.hpp>

#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_ARRAY(array), \
      	BOOST_VMD_IS_ARRAY_ASSERT_ERROR \
      	) \
/**/

#endif /* !BOOST_VMD_ASSERT_DATA */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ARRAY_HPP */
