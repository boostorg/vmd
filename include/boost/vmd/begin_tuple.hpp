#if !defined(BOOST_VMD_BEGIN_TUPLE_HPP)
#define BOOST_VMD_BEGIN_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning tuple of a macro parameter.

    param = a macro parameter.

    returns = the preprocessor tokens forming the beginning tuple.
    		  If the param does not start with a tuple,
    		  the return value is empty.
    
*/
# define BOOST_VMD_BEGIN_TUPLE(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_TUPLE(param) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_TUPLE_HPP */
