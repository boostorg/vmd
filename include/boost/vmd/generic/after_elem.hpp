#if !defined(BOOST_VMD_AFTER_ELEM_HPP)
#define BOOST_VMD_AFTER_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_after.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

// AFTER ELEM

/** \brief Expands to the preprocessor tokens after a v-sequence element.

	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise expands to the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_AFTER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER(elem,vseq) \
/**/

/** \brief Reentrant - expands to the preprocessor tokens after a v-sequence element.

	d         = The next available BOOST_PP_WHILE iteration.
	elem      = A v-sequence element number. From 0 to v-sequence size - 1.
    vseq      = A v-sequence to test.

    returns   = If the v-sequence is empty or the element number is not in the range
    			returns nothing, otherwise expands to the preprocessor tokens after the v-type found.
    
*/
#define BOOST_VMD_AFTER_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_SEQUENCE_AFTER_D(d,elem,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_ELEM_HPP */
