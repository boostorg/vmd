#if !defined(VMD_ASSERT_IS_TUPLE_HPP)
#define VMD_ASSERT_IS_TUPLE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_ASSERT_IS_TUPLE(tuple)

    \brief Asserts that the parameter is a pplib tuple.

    The macro checks that the parameter is a pplib tuple.
    If it is not a pplib tuple, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib tuple only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    tuple = a possible pplib tuple.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a pplib tuple, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a pplib tuple the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              pplib tuple.
              
     There is no completely fool-proof way to check if a 
     parameter is empty without possible producing a compiler 
     error if it is not. Because a macro checking if a parameter 
     is a pplib tuple needs to perform such a check, the best 
     that one can do is to create a compiler error if a parameter 
     is not a pplib tuple rather than having a macro which 
     returns 1 or 0, depending on whether a parameter is a pplib 
     tuple.
    
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_TUPLE(tuple)

#else

#include <boost/preprocessor/control/iif.hpp>

#if !BOOST_VMD_MSVC

#include <boost/preprocessor/debug/assert.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail.hpp>

#endif

#include <boost/variadic_macro_data/vmd_is_begin_parens.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_tuple.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/facilities/empty.hpp>

#define BOOST_VMD_ASSERT_IS_TUPLE(tuple) \
   VMD_DETAIL_ASSERT_IS_TUPLE_VC_CHECK_RETURN_FAILURE \
     ( \
     BOOST_PP_IIF \
       ( \
       BOOST_VMD_IS_BEGIN_PARENS(tuple), \
       VMD_DETAIL_ASSERT_IS_TUPLE_IS_NOT_AFTER, \
       VMD_DETAIL_ASSERT_IS_TUPLE_GEN_ZERO \
       ) \
     (tuple) \
     ) \
/**/

#else

#define BOOST_VMD_ASSERT_IS_TUPLE(tuple) \
   BOOST_PP_ASSERT \
     ( \
     BOOST_PP_IIF \
       ( \
       BOOST_VMD_IS_BEGIN_PARENS(tuple), \
       VMD_DETAIL_ASSERT_IS_TUPLE_IS_NOT_AFTER, \
       VMD_DETAIL_GEN_ZERO \
       ) \
     (tuple) \
     ) \
/**/

#endif /* BOOST_VMD_MSVC */
#endif /* BOOST_VMD_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_TUPLE_HPP */
