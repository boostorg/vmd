#if !defined(BOOST_VMD_IS_LIST_HPP)
#define BOOST_VMD_IS_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_LIST(list)

    \brief Determines if a parameter is a Boost pplib list.

    The macro checks that the parameter is a pplib list.
    
    The macro works through variadic macro support.
    It returns 1 if it is a list, else if returns 0.
    
    list = a possible pplib list.

    returns = 1 if it a list, else returns 0.
    
*/

#include <boost/preprocessor/control/while.hpp>
#include <boost/vmd/detail/is_list.hpp>

#define BOOST_VMD_IS_LIST(list) \
    BOOST_VMD_DETAIL_IS_LIST_RESULT \
      ( \
      BOOST_PP_WHILE \
        ( \
        BOOST_VMD_DETAIL_IS_LIST_PRED, \
        BOOST_VMD_DETAIL_IS_LIST_OP, \
        list \
        ) \
      ) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_LIST_HPP */
