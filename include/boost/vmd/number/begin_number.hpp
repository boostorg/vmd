#if !defined(BOOST_VMD_BEGIN_NUMBER_HPP)
#define BOOST_VMD_BEGIN_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/number.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning number of a macro parameter.

    vseq      = A v-sequence to test.
    
    returns = the beginning number of the v-sequence.
    		  If the parameter does not start with a number,
    		  the return value is empty.
    		  
	The number if found must be in the range of numbers for the Boost preprocessor library,
	which is 0 to 256.
    
*/
# define BOOST_VMD_BEGIN_NUMBER(...) \
	BOOST_VMD_DETAIL_NUMBER(__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_NUMBER_HPP */
