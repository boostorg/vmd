#if !defined(BOOST_VMD_ASSERT_IS_TYPE_HPP)
#define BOOST_VMD_ASSERT_IS_TYPE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_ASSERT_IS_TYPE(ppident)

    \brief Asserts that the parameter is a VMD type.

    The macro checks that the parameter is a VMD type.
    If it is not a VMD type, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a VMD type only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    ppident = a possible VMD type.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a VMD type, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a VMD type the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              VMD type.
    
*/

/** \def BOOST_VMD_ASSERT_IS_TYPE_D(d,ppident)

    \brief Asserts that the parameter is a VMD type. Re-entrant version.

    The macro checks that the parameter is a VMD type.
    If it is not a VMD type, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a VMD type only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

	d       = The next available BOOST_PP_WHILE iteration. 
    ppident = a possible VMD type.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a VMD type, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a VMD type the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              VMD type.
    
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_TYPE(ppident)
#define BOOST_VMD_ASSERT_IS_TYPE_D(d,ppident)

#else

#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_type.hpp>

#define BOOST_VMD_ASSERT_IS_TYPE(ppident) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_TYPE(ppident), \
      	BOOST_VMD_IS_TYPE_ASSERT_ERROR \
      	) \
/**/

#define BOOST_VMD_ASSERT_IS_TYPE_D(d,ppident) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_TYPE_D(d,ppident), \
      	BOOST_VMD_IS_TYPE_ASSERT_ERROR \
      	) \
/**/

#endif // !BOOST_VMD_ASSERT_DATA

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_TYPE_HPP */
