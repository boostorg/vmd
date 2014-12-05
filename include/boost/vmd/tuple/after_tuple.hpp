#if !defined(BOOST_VMD_AFTER_TUPLE_HPP)
#define BOOST_VMD_AFTER_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after the beginning tuple of a macro parameter.

    vseq = a vsequence.

    returns   = expands to the preprocessor tokens after the tuple.
    			If the tuple is not found, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_TUPLE(vseq) \
	BOOST_VMD_DETAIL_AFTER_TUPLE(vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_TUPLE_HPP */
