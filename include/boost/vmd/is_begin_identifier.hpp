#if !defined(BOOST_VMD_IS_BEGIN_IDENTIFIER_HPP)
#define BOOST_VMD_IS_BEGIN_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/bool.hpp>
#include <boost/vmd/begin_identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Tests whether a parameter begins with an identifier.

    parameter = a macro parameter.
    keys  	  = The variadic data may take one of two forms:
    			it is either a C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

    returns = 1 if the param begins with an identifier,
              0 if it does not.
              
*/
# define BOOST_VMD_IS_BEGIN_IDENTIFIER(parameter,keys) \
	BOOST_PP_BOOL \
		( \
		BOOST_VMD_BEGIN_IDENTIFIER(parameter,keys) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_BEGIN_IDENTIFIER_HPP */
