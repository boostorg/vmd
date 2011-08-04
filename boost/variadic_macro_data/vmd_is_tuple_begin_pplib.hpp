#if !defined(VMD_IS_TUPLE_BEGIN_PPLIB_HPP)
#define VMD_IS_TUPLE_BEGIN_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/variadic/size.hpp>

#include <boost/variadic_macro_data/detail/vmd_detail.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if BOOST_VMD_MSVC

/// Tests whether its parameter begins with a tuple.
/**

    param = a macro parameter.

    returns = 1 if the param begins with a tuple, else 0 if it does not.
              If the param begins with a tuple, it may contain other 
              tokens after it.
              
    There is no completely safe way to test whether the param is a tuple.
    At best one can use BOOST_VMD_ASSERT_IS_TUPLE to cause a compiler error 
    if the parameter is not a tuple.
              
    
*/
#define BOOST_VMD_IS_TUPLE_BEGIN(param) \
    BOOST_PP_DEC \
      ( \
      BOOST_PP_VARIADIC_SIZE \
        ( \
        VMD_DETAIL_COMMON_EXPAND param \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_IS_TUPLE_BEGIN_PPLIB_HPP */
