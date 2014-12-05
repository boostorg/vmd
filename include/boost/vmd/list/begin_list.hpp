#if !defined(BOOST_VMD_BEGIN_LIST_HPP)
#define BOOST_VMD_BEGIN_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning list of a macro parameter.

    param = input possibly beginning with a Boost PP list.

    returns   = A beginning list of the macro parameter.
    			If the param does not start with a list, expands to nothing.
    
*/
#define BOOST_VMD_BEGIN_LIST(...) \
	BOOST_VMD_DETAIL_LIST(__VA_ARGS__) \
/**/

#define BOOST_VMD_BEGIN_LIST_D(d,...) \
	BOOST_VMD_DETAIL_LIST_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_LIST_HPP */
