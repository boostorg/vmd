#if !defined(VMD_ASSERT_IS_LIST_COMMON_HPP)
#define VMD_ASSERT_IS_LIST_COMMON_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_ASSERT_IS_LIST(list)

    \brief Asserts that the parameter is a pplib list.

    The macro checks that the parameter is a pplib list.
    If it is not a pplib list, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib list only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    list = a possible pplib list.

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
              
     There is no completely fool-proof way to check if a 
     parameter is empty without possible producing a compiler 
     error if it is not. Because a macro checking if a parameter 
     is a pplib list needs to perform such a check, the best 
     that one can do is to create a compiler error if a parameter 
     is not a pplib list rather than having a macro which 
     returns 1 or 0, depending on whether a parameter is a pplib 
     list.
    
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_LIST(list)

#else

#include <boost/preprocessor/control/while.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_list.hpp>

#define BOOST_VMD_ASSERT_IS_LIST(list) \
    VMD_DETAIL_ASSERT_IS_LIST_CHECK_RETURN_FAILURE \
      ( \
      BOOST_PP_WHILE \
        ( \
        VMD_DETAIL_ASSERT_IS_LIST_PRED, \
        VMD_DETAIL_ASSERT_IS_LIST_OP, \
        list \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_LIST_COMMON_HPP */
