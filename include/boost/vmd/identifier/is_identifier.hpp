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

/** \brief Tests whether a parameter is a v-identifier.

    ...       = variadic parameters, maximum of 2
    
    The first variadic parameter is:
    
    parameter        = A parameter to test.
    v-ids (optional) = The data may take one of two forms:
    			       it is either a single v-identifier
    			       or a Boost PP tuple of v-identifiers.

    returns   = 1 if the parameter is a v-identifier, otherwise 0.
    			
    			If the parameter is not a v-identifier, 
    			or if optional v-ids are specified and the v-identifier
    			does not match any of the v-ids, the macro returns 0.
    			
    V-identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The beginning v-identifier must be registered to be found.
    
    V-identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is a v-identifier.
    
    If you specify optional v-ids and have not specified the detection
    of an optional v-id, that v-id will never match a v-identifier.
    			
*/
#define BOOST_VMD_IS_IDENTIFIER(...) \
	BOOST_VMD_DETAIL_IS_IDENTIFIER(__VA_ARGS__) \
/**/

#define BOOST_VMD_IS_IDENTIFIER_D(d,...) \
	BOOST_VMD_DETAIL_IS_IDENTIFIER_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_IDENTIFIER_HPP */
