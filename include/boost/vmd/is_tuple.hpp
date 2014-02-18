#if !defined(BOOST_VMD_IS_TUPLE_HPP)
#define BOOST_VMD_IS_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/parens.hpp>
#include <boost/vmd/detail/is_entire.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_TUPLE(param)

    \brief Tests whether a parameter is a Boost PP tuple.

    The macro checks to see if a parameter is a Boost PP tuple.
    A Boost PP tuple is a parameter enclosed by a set of parenthesis
    with no prerocessing tokens before or after the parenthesis.
    
    param = a preprocessor parameter

    returns = 1 if the param is a Boost PP tuple.
              0 if it is not.
              
*/

#define BOOST_VMD_IS_TUPLE(param) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_PARENS(param) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_TUPLE_HPP */
