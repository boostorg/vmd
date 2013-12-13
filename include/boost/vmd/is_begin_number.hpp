#if !defined(BOOST_VMD_IS_BEGIN_NUMBER_HPP)
#define BOOST_VMD_IS_BEGIN_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/not.hpp>
#include <boost/vmd/begin_number.hpp>
#include <boost/vmd/is_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Tests whether a parameter begins with a number.

    parameter = a macro parameter.

    returns = 1 if the param begins with a number, 
              0 if it does not.
              
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_IS_BEGIN_NUMBER(parameter) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_NUMBER(parameter) \
			) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_NUMBER_HPP */
