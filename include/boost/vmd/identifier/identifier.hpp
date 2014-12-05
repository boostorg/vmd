#if !defined(BOOST_VMD_IDENTIFIER_IDENTIFIER_HPP)
#define BOOST_VMD_IDENTIFIER_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/identifier/is_identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Looks for beginning v-identifier and rest of tokens of a v-sequence.

    ...       = variadic parameters, maximum of 2
    
    The first variadic parameter is:
    
    vseq             = A v-sequence to test.
    v-ids (optional) = The data may take one of two forms:
    			       it is either a single v-identifier
    			       or a Boost PP tuple of v-identifiers.

    returns   = A tuple whose 3 elements are:
    			1) The beginning v-identifier found.
    			2) The preprocessor tokens after the v-identifier.
    			3) If the optional v-ids are used a 0-based index specifying the 
    			   matching v-identifier in the tuple of ids, else this tuple
    			   element is empty.
    			
    			If a beginning identifier is not found, 
    			or if optional v-ids are specified and the found beginning identifier
    			does not match any of the v-ids, all members of the returning tuple are empty.
    			
				You can test for falure to find the information by testing if the 
				beginning v-identifier is empty or not.
    			
    Identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The beginning v-identifier must be registered to be found.
    
    Identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is a v-identifier.
    
    If you specify optional v-ids and have not specified the detection
    of an optional v-id, that v-id will never match a beginning v-identifier.
    			
*/
#define BOOST_VMD_IDENTIFIER(...) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_IDENTIFIER(__VA_ARGS__), \
		BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__) \
		) \
/**/

#define BOOST_VMD_IDENTIFIER_D(d,...) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_IDENTIFIER_D(d,__VA_ARGS__), \
		BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTIFIER_IDENTIFIER_HPP */
