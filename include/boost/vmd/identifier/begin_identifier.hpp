#if !defined(BOOST_VMD_BEGIN_IDENTIFIER_HPP)
#define BOOST_VMD_BEGIN_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Looks for a beginning identifier in a v-sequence.

    ...       = variadic parameters, maximum of 2
    
    The first variadic parameter is:
    
    vseq             = A v-sequence to test.
    v-ids (optional) = The data may take one of two forms:
    			       it is either a single v-identifier
    			       or a Boost PP tuple of v-identifiers.

    returns   = If optional v-ids are used the result is a tuple of two elements whose elements are:
    			1) The beginning v-identifier found.
    			2) A 0-based index specifying the matching v-identifier in the tuple of v-ids.
    			   
    			If no optional v-ids are used the result is just the beginning v-identifier found.
    			
    			If a beginning v-identifier is not found, 
    			or if optional v-ids are specified and the found beginning v-identifier
    			does not match any of the v-ids, all results are empty.
    			
				You can test for failure to find the information by testing if the beginning 
				v-identifier returned is empty or not.
    			
    Identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The beginning v-identifier must be registered to be found.
    
    Identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is a v-identifier.
    
    If you specify optional v-ids and have not specified the detection
    of an optional v-id, that v-id will never match a beginning v-identifier.
    			
*/
#define BOOST_VMD_BEGIN_IDENTIFIER(...) \
	BOOST_VMD_DETAIL_IDENTIFIER(__VA_ARGS__) \
/**/

#define BOOST_VMD_BEGIN_IDENTIFIER_D(d,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_IDENTIFIER_HPP */
