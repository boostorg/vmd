#if !defined(BOOST_VMD_BEGIN_NUMBER_HPP)
#define BOOST_VMD_BEGIN_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/number.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning number of a macro parameter.

    parameter = a macro parameter.

    returns = the beginning number of the parameter.
    		  If the parameter does not start with a number,
    		  the return value is empty.
    		  
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_BEGIN_NUMBER(parameter) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_NUMBER(parameter) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_NUMBER_HPP */
