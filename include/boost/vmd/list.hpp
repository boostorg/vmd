#if !defined(BOOST_VMD_LIST_HPP)
#define BOOST_VMD_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/tuple.hpp>
#include <boost/vmd/detail/list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning list, and the preprocessor tokens after the beginning list, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a list, both elements of the tuple are empty.
   				If the param does start with a list, the first element is the list 
   				and the second element is the preprocessor tokens after the beginning list.
    
*/
# define BOOST_VMD_LIST(param) \
	BOOST_VMD_DETAIL_LIST_CHECK_RETURN \
		( \
		BOOST_VMD_TUPLE(param) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_LIST_HPP */
