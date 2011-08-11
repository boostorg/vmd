#if !defined(VMD_ASSERT_IS_ARRAY_PPLIB_HPP)
#define VMD_ASSERT_IS_ARRAY_PPLIB_HPP

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA && !BOOST_VMD_MSVC

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_array.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail.hpp>

/** \brief Asserts that the parameter is a pplib array.

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
              
     There is no completely fool-proof way to check if a 
     parameter is empty without possible producing a compiler 
     error if it is not. Because a macro checking if a parameter 
     is a pplib array needs to perform such a check, the best 
     that one can do is to create a compiler error if a parameter 
     is not a pplib array rather than having a macro which 
     returns 1 or 0, depending on whether a parameter is a pplib 
     array.
    
*/
#define BOOST_VMD_ASSERT_IS_ARRAY(array) \
    BOOST_VMD_ASSERT_IS_TUPLE(array) \
    BOOST_PP_ASSERT \
      ( \
      BOOST_PP_IIF \
        ( \
        BOOST_PP_EQUAL(2,BOOST_PP_TUPLE_SIZE(array)), \
        VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_ARRAY_FORM, \
        VMD_DETAIL_GEN_ZERO \
        ) \
      (array) \
      ) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA && !BOOST_VMD_MSVC */
#endif /* VMD_ASSERT_IS_ARRAY_PPLIB_HPP */
