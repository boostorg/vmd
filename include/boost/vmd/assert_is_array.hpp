#if !defined(BOOST_VMD_ASSERT_IS_ARRAY_HPP)
#define BOOST_VMD_ASSERT_IS_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_ASSERT_IS_ARRAY(array)

    \brief Asserts that the parameter is a Boost PP array.

    The macro checks that the parameter is a Boost PP array.
    If it is not a Boost PP array, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a Boost PP array only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    array = a possible Boost PP  array.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a Boost PP array, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a Boost PP array the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              Boost PP array.
    
*/

/** \def BOOST_VMD_ASSERT_IS_ARRAY_D(d,array)

    \brief Asserts that the parameter is a Boost PP array. Re-entrant version.

    The macro checks that the parameter is a Noost PP array.
    If it is not a Boost PP array, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a Boost PP array only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    d     = The next available BOOST_PP_WHILE iteration.
    array = a possible Boost PP  array.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a Boost PP array, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a Boost PP array the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              Boost PP array.
    
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_ARRAY(array)
#define BOOST_VMD_ASSERT_IS_ARRAY_D(d,array)

#else

#include <boost/vmd/is_array.hpp>
#include <boost/vmd/assert.hpp>

#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_ARRAY(array), \
      	BOOST_VMD_IS_ARRAY_ASSERT_ERROR \
      	) \
/**/

#define BOOST_VMD_ASSERT_IS_ARRAY_D(d,array) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_ARRAY_D(d,array), \
      	BOOST_VMD_IS_ARRAY_ASSERT_ERROR \
      	) \
/**/

#endif /* !BOOST_VMD_ASSERT_DATA */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_ARRAY_HPP */
