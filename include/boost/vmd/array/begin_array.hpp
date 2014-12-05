#if !defined(BOOST_VMD_BEGIN_ARRAY_HPP)
#define BOOST_VMD_BEGIN_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning array of a macro parameter.

    ... = a macro parameter.

    returns   = A beginning array of the macro parameter.
    			If the param does not start with an array, expands to nothing.
    
*/
#define BOOST_VMD_BEGIN_ARRAY(...) \
	BOOST_VMD_DETAIL_ARRAY(__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_ARRAY_HPP */
