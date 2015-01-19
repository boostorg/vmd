#if !defined(BOOST_VMD_ELEM_HPP)
#define BOOST_VMD_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/modifiers.hpp>
#include <boost/vmd/detail/sequence_elem.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

// ELEM

/** \brief Expands to a tuple of the v-sequence type/element and the preprocessor tokens after the v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_TYPE_TUPLE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_TYPE_TUPLE, in order to determine the element type, the element 
    found is tested among other types for a possible tuple, rather than the specific tuples 
    of an array or a list. With BOOST_VMD_RETURN_TYPE, in order to determine the element 
    type, the element found is tested among other types for a possible array and a possible list 
    before being tested for a possible tuple. For the dangers of testing a tuple as an array or 
    a list, see the main documentation.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type as a tuple with the type being
    			  the first value and the element being the second value.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_ELEM(elem,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM(BOOST_VMD_ALLOW_ALL,elem,__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to a tuple of the v-sequence type/element and the preprocessor tokens after the v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_RETURN_TYPE_TUPLE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_RETURN_TYPE_TUPLE, in order to determine the element type, the element 
    found is tested among other types for a possible tuple, rather than the specific tuples 
    of an array or a list. With BOOST_VMD_RETURN_TYPE, in order to determine the element 
    type, the element found is tested among other types for a possible array and a possible list 
    before being tested for a possible tuple. For the dangers of testing a tuple as an array or 
    a list, see the main documentation.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type as a tuple with the type being
    			  the first value and the element being the second value.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_ELEM_D(d,elem,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,BOOST_VMD_ALLOW_ALL,elem,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ELEM_HPP */
