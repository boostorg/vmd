#if !defined(BOOST_VMD_ASSERT_IS_LIST_HPP)
#define BOOST_VMD_ASSERT_IS_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_ASSERT_IS_LIST(param)

    \brief Asserts that the parameter is a Boost pplib list.

    The macro checks that the parameter is a pplib list.
    If it is not a pplib list, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib list only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.
    
    param = a possible pplib list.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a pplib list, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a pplib list the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              pplib list.
              
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_LIST(param)
#define BOOST_VMD_ASSERT_IS_LIST_D(d,param)

#else

#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_list.hpp>

#define BOOST_VMD_ASSERT_IS_LIST(param) \
    BOOST_VMD_ASSERT \
      ( \
      BOOST_VMD_IS_LIST(param), \
      BOOST_VMD_ASSERT_IS_LIST_ERROR \
      ) \
/**/

#define BOOST_VMD_ASSERT_IS_LIST_D(d,param) \
    BOOST_VMD_ASSERT \
      ( \
      BOOST_VMD_IS_LIST_D(d,param), \
      BOOST_VMD_ASSERT_IS_LIST_ERROR \
      ) \
/**/

#endif /* BOOST_VMD_ASSERT_DATA */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_LIST_HPP */
