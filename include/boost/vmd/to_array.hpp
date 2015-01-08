#if !defined(BOOST_VMD_TO_ARRAY_HPP)
#define BOOST_VMD_TO_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_to_array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

// TO_ARRAY

/** \brief Expands to an array whose elements are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_PARSE_ONLY_TUPLE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_PARSE_ONLY_TUPLE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, otherwise it is an array whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_ARRAY(...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to an array whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_PARSE_ONLY_TUPLE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_PARSE_ONLY_TUPLE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, othwerwise it is an array whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_ARRAY_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_TO_ARRAY_HPP */
