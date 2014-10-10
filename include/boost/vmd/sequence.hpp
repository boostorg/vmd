#if !defined(BOOST_VMD_SEQUENCE_HPP)
#define BOOST_VMD_SEQUENCE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

// SEQUENCE

/** \brief Expands to a tuple of the v-sequence type/element and the preprocessor tokens after the v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type as a tuple with the type being
    			  the first value and the element being the second value.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_SEQUENCE(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_SPLIT(vseq,elem) \
/**/

/** \brief Reentrant - expands to a tuple of the v-sequence type/element and the preprocessor tokens after the v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type as a tuple with the type being
    			  the first value and the element being the second value.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_SEQUENCE_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_SPLIT_D(d,vseq,elem) \
/**/

// DATA

/** \brief Expands to a tuple of the v-sequence element and the preprocessor tokens after the v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type found.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_DATA(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM_SPLIT(vseq,elem) \
/**/

/** \brief Reentrant - expands to a tuple of the v-sequence element and the preprocessor tokens after the v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = the result is a tuple of two elements.
    			If the v-sequence is empty or the element number is not in the range
    			both of the tuple elements are empty. Otherwise:
    			* The first tuple element is the v-type found.
   				* The second tuple element are the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_DATA_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM_SPLIT_D(d,vseq,elem) \
/**/

// ELEM

/** \brief Expands to a tuple of the v-sequence type/element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise returns the v-type as a tuple with the type being
    			the first value and the element being the second value.
    
*/
#define BOOST_VMD_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM(vseq,elem) \
/**/

/** \brief Reentrant - expands to a tuple of the v-sequence type/element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise returns the v-type as a tuple with the type being
    			the first value and the element being the second value.
    
*/
#define BOOST_VMD_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,vseq,elem) \
/**/

// ELEM_DATA

/** \brief Expands to the v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise returns the v-type element value.
    
*/
#define BOOST_VMD_DATA_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM(vseq,elem) \
/**/

/** \brief Reentrant - expands to the v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise returns the v-type element value.
    
*/
#define BOOST_VMD_DATA_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ELEM_D(d,vseq,elem) \
/**/

// AFTER

/** \brief Expands to the preprocessor tokens after a v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise expands to the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_AFTER(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER(vseq,elem) \
/**/

/** \brief Reentrant - expands to the preprocessor tokens after a v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise expands to the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_AFTER_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER_D(d,vseq,elem) \
/**/

// SIZE

/** \brief Expands to the size of a v-sequence.

    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty returns 0, else returns the number of v-types
    			in the v-sequence.
    
*/
#define BOOST_VMD_SIZE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE(vseq) \
/**/

/** \brief Reentrant - expands to the size of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty returns 0, else returns the number of v-types
    			in the v-sequence.
    
*/
#define BOOST_VMD_SIZE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_SIZE_D(d,vseq) \
/**/

// TO_ARRAY

/** \brief Expands to an array whose elements are the v-types of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, othwerwise it is an array whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_ARRAY(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY(vseq) \
/**/

/** \brief Reentrant - expands to an array whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, othwerwise it is an array whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_ARRAY_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_ARRAY_D(d,vseq) \
/**/

// TO_ARRAY_DATA

/** \brief Expands to an array whose elements are the v-type values of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, othwerwise it is an array whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_ARRAY(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_ARRAY(vseq) \
/**/

/** \brief Expands to an array whose elements are the v-type values of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP array. If the v-sequence is empty the array is a 0-size array
    			with no elements, othwerwise it is an array whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_ARRAY_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_ARRAY_D(d,vseq) \
/**/

// TO_LIST

/** \brief Expands to a list whose elements are the v-types of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP list. If the v-sequence is empty the list is a 0-size list
    			with no elements, othwerwise it is a list whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_LIST(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_LIST(vseq) \
/**/

/** \brief Reentrant - expands to a list whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP list. If the v-sequence is empty the list is a 0-size list
    			with no elements, othwerwise it is a list whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_LIST_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_LIST_D(d,vseq) \
/**/

// TO_LIST_DATA

/** \brief Expands to a list whose elements are the v-type values of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP list. If the v-sequence is empty the list is a 0-size list
    			with no elements, othwerwise it is a list whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_LIST(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_LIST(vseq) \
/**/

/** \brief Reentran - expands to a list whose elements are the v-type values of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP list. If the v-sequence is empty the list is a 0-size list
    			with no elements, othwerwise it is a list whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_LIST_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_LIST_D(d,vseq) \
/**/

// TO_SEQ

/** \brief Expands to a seq whose elements are the v-types of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP seq. If the v-sequence is empty expands to nothing,
    			othwerwise it is a seq whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ(vseq) \
/**/

/** \brief Reentrant - expands to a seq whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP seq. If the v-sequence is empty expands to nothing,
    			othwerwise it is a seq whose each element is a v-type,
    			as a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_SEQ_D(d,vseq) \
/**/

// TO_SEQ_DATA

/** \brief Expands to a seq whose elements are the v-type values of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP seq. If the v-sequence is empty expands to nothing,
    			otherwise it is a seq whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_SEQ(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ(vseq) \
/**/

/** \brief Reentrant - expands to a seq whose elements are the v-type values of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP seq. If the v-sequence is empty expands to nothing,
    			otherwise it is a seq whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_SEQ_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_SEQ_D(d,vseq) \
/**/

// TO_TUPLE

/** \brief Expands to a tuple whose elements are the v-types of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP tuple. If the v-sequence is empty expands to nothing,
    			otherwise it is a tuple whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_TUPLE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_TUPLE(vseq) \
/**/

/** \brief Reentrant - expands to a tuple whose elements are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP tuple. If the v-sequence is empty expands to nothing,
    			otherwise it is a tuple whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_TO_TUPLE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_TO_TUPLE_D(d,vseq) \
/**/

// TO_TUPLE_DATA

/** \brief Expands to a tuple whose elements are the v-type values of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = A Boost PP tuple. If the v-sequence is empty expands to nothing,
    			otherwise it is a tuple whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_TUPLE(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_TUPLE(vseq) \
/**/

/** \brief Reentrant - expands to a tuple whose elements are the v-type values of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = A Boost PP tuple. If the v-sequence is empty expands to nothing,
    			otherwise it is a tuple whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_TO_TUPLE_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_TO_TUPLE_D(d,vseq) \
/**/

// ENUM

/** \brief Expands to comma-separated elements which are the v-types of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			otherwise it is comma-separated data whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_ENUM(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM(vseq) \
/**/

/** \brief Reentrant - expands to comma-separated elements which are the v-types of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			othwerwise it is comma-separated data whose each element is a v-type,
    			which is a 2-element tuple of a type and a value.
    
*/
#define BOOST_VMD_ENUM_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_ENUM_D(d,vseq) \
/**/

// ENUM_DATA

/** \brief Expands to comma-separated elements which are the v-type values of a v-sequence.

    vseq      = A v-sequence to be converted.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			otherwise it is comma-separated data whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_ENUM(vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ENUM(vseq) \
/**/

/** \brief Reentrant - expands to comma-separated elements which are the v-type values of a v-sequence.

	d         = The next available BOOST_PP_WHILE iteration.
    vseq      = A v-sequence to be converted.

    returns   = Comma-separated data. If the v-sequence is empty expands to nothing,
    			otherwise it is comma-separated data whose each element is a v-type value.
    
*/
#define BOOST_VMD_DATA_ENUM_D(d,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_DATA_ENUM_D(d,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQUENCE_HPP */
