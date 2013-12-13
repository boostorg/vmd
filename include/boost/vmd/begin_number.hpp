#if !defined(BOOST_VMD_BEGIN_NUMBER_HPP)
#define BOOST_VMD_BEGIN_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/detail/begin_number.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

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
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_GEN_EMPTY, \
      BOOST_VMD_DETAIL_BEGIN_NUMBER \
      ) \
    (parameter) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_NUMBER_HPP */
