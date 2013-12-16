#if !defined(BOOST_VMD_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_AFTER_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the identifier of a macro parameter.

    parameter = a macro parameter.
    keys  	  = The variadic data may take one of two forms:
    			it is either a C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

    returns   = expands to the preprocessor tokens after the identifier.
    			If the identifier is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_IDENTIFIER(parameter,keys) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_IDENTIFIER(parameter,keys) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_IDENTIFIER_HPP */
