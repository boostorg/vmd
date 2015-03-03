#if !defined(BOOST_VMD_IS_IDENTIFIER_HPP)
#define BOOST_VMD_IS_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_IDENTIFIER(...)

	\brief Tests whether a parameter is an identifier.

    ...       = variadic parameters
    
    The first variadic parameter is:
    
    parameter        = A parameter to test.
    ids (optional)   = The data may take one of two forms:
    			       it is either one or more single identifiers
    			       or a single Boost PP tuple of identifiers.

    returns   = 1 if the parameter is an identifier, otherwise 0.
    			
    			If the parameter is not an identifier, 
    			or if optional ids are specified and the identifier
    			does not match any of the ids, the macro returns 0.
    			
    Identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The identifier must be registered to be found.
    
    Identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is an identifier.
    
    If you specify optional ids and have not specified the detection
    of an optional id, that id will never match an identifier.
    			
*/

#define BOOST_VMD_IS_IDENTIFIER(...) \
	BOOST_VMD_DETAIL_IS_IDENTIFIER(__VA_ARGS__) \
/**/

/** \def BOOST_VMD_IS_IDENTIFIER_D(d,...)

	\brief Tests whether a parameter is an identifier.

	d         = The next available BOOST_PP_WHILE iteration. 
    ...       = variadic parameters
    
    The first variadic parameter is:
    
    parameter        = A parameter to test.
    ids (optional)   = The data may take one of two forms:
    			       it is either one or more single identifiers
    			       or a single Boost PP tuple of identifiers.

    returns   = 1 if the parameter is an identifier, otherwise 0.
    			
    			If the parameter is not an identifier, 
    			or if optional ids are specified and the identifier
    			does not match any of the ids, the macro returns 0.
    			
    Identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The identifier must be registered to be found.
    
    Identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is an identifier.
    
    If you specify optional ids and have not specified the detection
    of an optional id, that id will never match an identifier.
    			
*/

#define BOOST_VMD_IS_IDENTIFIER_D(d,...) \
	BOOST_VMD_DETAIL_IS_IDENTIFIER_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_IDENTIFIER_HPP */
