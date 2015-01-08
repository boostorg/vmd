#if !defined(BOOST_VMD_SIZE_HPP)
#define BOOST_VMD_SIZE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_size.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

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

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SIZE_HPP */
