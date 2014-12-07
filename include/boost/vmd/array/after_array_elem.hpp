#if !defined(BOOST_VMD_AFTER_ARRAY_ELEM_HPP)
#define BOOST_VMD_AFTER_ARRAY_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/elem_after_array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_AFTER_ARRAY_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER_ARRAY(elem,vseq) \
/**/

#define BOOST_VMD_AFTER_ARRAY_ELEM_D(d,elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER_ARRAY_D(d,elem,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_ARRAY_ELEM_HPP */
