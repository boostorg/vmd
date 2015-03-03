#if !defined(BOOST_VMD_IS_EMPTY_ARRAY_HPP)
#define BOOST_VMD_IS_EMPTY_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/is_array.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/detail/is_empty_array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_EMPTY_ARRAY(param)

    \brief Tests whether an array is an empty Boost PP array.

    An empty Boost PP array is a two element tuple where the first
    size element is 0 and the second element is a tuple with a single 
    empty element, ie. '(0,())'.
    
    param = a preprocessor parameter

    returns = 1 if the param is an empty Boost PP array
              0 if it is not.
              
    The macro will generate a preprocessing error if the input
    is in the form of an array but its first tuple element, instead
    of being a number, is a preprocessor token which VMD cannot parse,
    as in the example '(&0,())' which is a valid tuple but an invalid
    array.
    
*/

#define BOOST_VMD_IS_EMPTY_ARRAY(param) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_IS_ARRAY(param), \
			BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_SIZE, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(param) \
		) \
/**/

/** \def BOOST_VMD_IS_EMPTY_ARRAY_D(d,param)

    \brief Tests whether an array is an empty Boost PP array.

    An empty Boost PP array is a two element tuple where the first
    size element is 0 and the second element is a tuple with a single 
    empty element, ie. '(0,())'.
    
	d     = The next available BOOST_PP_WHILE iteration. 
    param = a preprocessor parameter

    returns = 1 if the param is an empty Boost PP array
              0 if it is not.
              
    The macro will generate a preprocessing error if the input
    is in the form of an array but its first tuple element, instead
    of being a number, is a preprocessor token which VMD cannot parse,
    as in the example '(&0,())' which is a valid tuple but an invalid
    array.
    
*/

#define BOOST_VMD_IS_EMPTY_ARRAY_D(d,param) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_IS_ARRAY_D(d,param), \
			BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_SIZE, \
			BOOST_VMD_IDENTITY(0) \
			) \
		(param) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_EMPTY_ARRAY_HPP */
