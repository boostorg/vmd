#if !defined(BOOST_VMD_IDENTIFIER_HPP)
#define BOOST_VMD_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bool.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/vmd/detail/identifier.hpp>
#if BOOST_VMD_ASSERT_DATA
#include <boost/vmd/assert.hpp>
#endif

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
#define BOOST_VMD_IDENTIFIER(vseq) \
	BOOST_VMD_DETAIL_INTERNAL_IDENTIFIER(vseq) \
/**/

#define BOOST_VMD_IDENTIFIER_D(d,vseq) \
	BOOST_VMD_DETAIL_INTERNAL_IDENTIFIER_D(d,vseq) \
/**/

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

/** \brief Tests whether a v-sequence begins with a v-identifier.

    ...       = variadic parameters, maximum of 2
    
    The first variadic parameter is:
    
    vseq             = A v-sequence to test.
    v-ids (optional) = The data may take one of two forms:
    			       it is either a single v-identifier
    			       or a Boost PP tuple of v-identifiers.

    returns   = the result is 1 if the v-sequence begins with a v-identifier,
    			otherwise the result is 0.
    			
    			If a beginning v-identifier is not found, 
    			or if optional v-ids are specified and the found beginning v-identifier
    			does not match any of the v-ids, the return is 0.
    			
    V-identifiers are registered in VMD with:
    
    #define BOOST_VMD_REG_XXX (XXX) where XXX is a v-identifier.
    
    The beginning v-identifier must be registered to be found.
    
    V-identifiers are pre-detected in VMD with:
    
    #define BOOST_VMD_DETECT_XXX_XXX where XXX is a v-identifier.
    
    If you specify optional v-ids and have not specified the detection
    of an optional v-id, that v-id will never match a beginning v-identifier.
    			
*/
#define BOOST_VMD_IS_BEGIN_IDENTIFIER(...) \
	BOOST_VMD_DETAIL_IS_BEGIN_IDENTIFIER(__VA_ARGS__) \
/**/

#define BOOST_VMD_IS_BEGIN_IDENTIFIER_D(d,...) \
	BOOST_VMD_DETAIL_IS_BEGIN_IDENTIFIER_D(d,__VA_ARGS__) \
/**/

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

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_IDENTIFIER(...)
#define BOOST_VMD_ASSERT_IS_IDENTIFIER_D(d,...)

#else

#define BOOST_VMD_ASSERT_IS_IDENTIFIER(...) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_IDENTIFIER(__VA_ARGS__), \
      	BOOST_VMD_IDENTIFIER_ASSERT_ERROR \
      	) \
/**/

#define BOOST_VMD_ASSERT_IS_IDENTIFIER_D(d,...) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_IDENTIFIER_D(d,__VA_ARGS__), \
      	BOOST_VMD_IDENTIFIER_ASSERT_ERROR \
      	) \
/**/

#endif // !BOOST_VMD_ASSERT_DATA
#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTIFIER_HPP */
