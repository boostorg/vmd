#if !defined(BOOST_VMD_IS_ARRAY_HPP)
#define BOOST_VMD_IS_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_ARRAY(array)

    \brief Determines if a parameter is a Boost pplib array.

    The macro checks that the parameter is a pplib array.
    It returns 1 if it is an array, else if returns 0.

    The macro works through variadic macro support.
    
    array = a possible pplib array.

    returns = 1 if it an array, else returns 0.
    
*/

#define BOOST_VMD_IS_ARRAY(array) \
	BOOST_VMD_DETAIL_IS_ARRAY(array) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_ARRAY_HPP */
