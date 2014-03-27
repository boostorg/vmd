#if !defined(BOOST_VMD_IS_EMPTY_TUPLE_HPP)
#define BOOST_VMD_IS_EMPTY_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/is_tuple.hpp>
#include <boost/vmd/detail/is_empty_tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_EMPTY_TUPLE(param)

    \brief Tests whether a parameter is a Boost PP tuple with a single empty element.

    The macro checks to see if a parameter is a Boost PP tuple with a single empty element.
    A Boost PP tuple is a parameter enclosed by a set of parenthesis
    with no prerocessing tokens before or after the parenthesis.
    
    param = a preprocessor parameter

    returns = 1 if the param is an empty Boost PP tuple
              0 if it is not.
              
*/

#define BOOST_VMD_IS_EMPTY_TUPLE(param) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_TUPLE(param), \
		BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_SIZE, \
		BOOST_VMD_GEN_ZERO \
		) \
	(param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_EMPTY_TUPLE_HPP */
