#if !defined(BOOST_VMD_IS_LIST_HPP)
#define BOOST_VMD_IS_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_LIST(param)

    \brief Determines if a parameter is a Boost pplib list.

    The macro checks that the parameter is a pplib list.
    
    The macro works through variadic macro support.
    It returns 1 if it is a list, else if returns 0.
    
    param = input as a possible Boost PP list.
    
    returns = 1 if it a list, else returns 0.
    
*/

#define BOOST_VMD_IS_LIST(param) \
	BOOST_VMD_DETAIL_IS_LIST(param) \
/**/

#define BOOST_VMD_IS_LIST_D(d,param) \
	BOOST_VMD_DETAIL_IS_LIST_D(d,param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_LIST_HPP */
