#if !defined(BOOST_VMD_IS_EMPTY_ARRAY_HPP)
#define BOOST_VMD_IS_EMPTY_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/array/is_array.hpp>
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
    size element is 0 and the second tuple element is empty.
    
    param = a preprocessor parameter

    returns = 1 if the param is an empty Boost PP array
              0 if it is not.
              
*/

#define BOOST_VMD_IS_EMPTY_ARRAY_IRESULT(param) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_ARRAY(param), \
		BOOST_VMD_DETAIL_IS_EMPTY_ARRAY_SIZE, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(param) \
/**/

#define BOOST_VMD_IS_EMPTY_ARRAY(param) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_IS_EMPTY_ARRAY_IRESULT(param)) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_EMPTY_ARRAY_HPP */
