#if !defined(BOOST_VMD_ENUM_HPP)
#define BOOST_VMD_ENUM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_enum.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

// ENUM

/** \brief Expands to comma-separated elements which are the v-types of a v-sequence.

    ...       = A maximum of 2 variadic parameters.
    
    The first variadic parameter is mandatory and is the v-sequence to test.
    
    The second optional variadic parameter can be either BOOST_VMD_PARSE_ONLY_TUPLE
    or BOOST_VMD_RETURN_TYPE, with the latter value the default value. 
    With BOOST_VMD_PARSE_ONLY_TUPLE, in order to determine the element type, the elements 
    are tested among other types for a possible tuple. With BOOST_VMD_RETURN_TYPE, 
    in order to determine the element type, the elements are tested among other types 
    for a possible array and a possible list before being tested for a possible tuple. 
    For the dangers of testing a tuple as an array or a list, see the main documentation.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			otherwise it is comma-separated data whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_ENUM(...) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM(__VA_ARGS__) \
/**/

/** \brief Reentrant - expands to comma-separated elements which are the v-types of a v-sequence.

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

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			othwerwise it is comma-separated data whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_ENUM_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ENUM_HPP */
