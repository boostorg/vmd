#if !defined(BOOST_VMD_AFTER_IDENTIFIER_HPP)
#define BOOST_VMD_AFTER_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the beginning v-identifier of a v-sequence.

    ...       = variadic parameters, maximum of 2
    
    The first variadic parameter is:
    
    vseq             = A v-sequence to test.
    v-ids (optional) = The data may take one of two forms:
    			       it is either a single v-identifier
    			       or a Boost PP tuple of v-identifiers.

    returns   = the result is the preprocessor tokens after the beginning v-identifier.
    			
    			If a beginning v-identifier is not found, 
    			or if optional v-ids are specified and the found beginning v-identifier
    			does not match any of the v-ids, the return is empty.
    			
    			The return may be empty even if a beginning v-identifier is found, if the
    			beginning v-identifier is the only preprocessing token in the v-sequence.
    			
    Identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The beginning v-identifier must be registered to be found.
    
    Identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is a v-identifier.
    
    If you specify optional v-ids and have not specified the detection
    of an optional v-id, that v-id will never match a beginning identifier.
    			
*/
#define BOOST_VMD_AFTER_IDENTIFIER(...) \
	BOOST_VMD_DETAIL_AFTER_IDENTIFIER(__VA_ARGS__) \
/**/

#define BOOST_VMD_AFTER_IDENTIFIER_D(d,...) \
	BOOST_VMD_DETAIL_AFTER_IDENTIFIER_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_IDENTIFIER_HPP */
