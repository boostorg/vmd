#if !defined(BOOST_VMD_AFTER_TUPLE_HPP)
#define BOOST_VMD_AFTER_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the beginning tuple of a macro parameter.

    parameter = a macro parameter.

    returns   = expands to the preprocessor tokens after the tuple.
    			If the tuple is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_TUPLE(parameter) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_TUPLE(parameter) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_TUPLE_HPP */
