#if !defined(BOOST_VMD_AFTER_LIST_HPP)
#define BOOST_VMD_AFTER_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/detail/list.hpp>
#include <boost/vmd/detail/modifiers.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the beginning list of a macro parameter.

    param = input possibly beginning with a Boost PP list.

    returns   = The preprocessor tokens after the beginning list of the macro parameter.
    			If the param does not start with a list, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_LIST(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_DETAIL_LIST(param,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_AFTER_LIST_D(d,param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_DETAIL_LIST_D(d,param,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_LIST_HPP */
