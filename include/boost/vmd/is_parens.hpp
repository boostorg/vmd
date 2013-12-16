#if !defined(BOOST_VMD_IS_PARENS_HPP)
#define BOOST_VMD_IS_PARENS_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/parens.hpp>
#include <boost/vmd/detail/is_entire.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_PARENS(ppident)

    \brief Tests whether a parameter is a set of parenthesis.

    The macro checks to see if a parameter is a set of parenthesis.
    
    ppident = a preprocessor identifier

    returns = 1 if the param is a set of parenthesis.
              0 if it is not.
              
*/

#define BOOST_VMD_IS_PARENS(param) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_PARENS(param) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_PARENS_HPP */
