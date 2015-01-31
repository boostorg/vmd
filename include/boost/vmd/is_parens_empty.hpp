#if !defined(BOOST_VMD_IS_PARENS_EMPTY_HPP)
#define BOOST_VMD_IS_PARENS_EMPTY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_empty_tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Determines if the input is a set of parens with no data.

    param = a macro parameter.

    returns = 1 if the input is a set of parens with no data,
    		  else returns 0.
    		  
    A set of parens with no data may be:
    
    1) a tuple whose size is a single element which is empty
    
    			or
    			
    2) a single element seq whose data is empty
    
*/
#define BOOST_VMD_IS_PARENS_EMPTY(param) \
	BOOST_VMD_DETAIL_IS_EMPTY_TUPLE(param) \
/**/

#define BOOST_VMD_IS_PARENS_EMPTY_D(d,param) \
	BOOST_VMD_DETAIL_IS_EMPTY_TUPLE_D(d,param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_PARENS_EMPTY_HPP */
