#if !defined(BOOST_VMD_NUMBER_ELEM_HPP)
#define BOOST_VMD_NUMBER_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/after_number.hpp>
#include <boost/vmd/detail/elem_number.hpp>
#include <boost/vmd/detail/split_number.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_NUMBER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SPLIT_NUMBER(elem,vseq) \
/**/

#define BOOST_VMD_ONLY_NUMBER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_NUMBER(elem,vseq) \
/**/

#define BOOST_VMD_AFTER_NUMBER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER_NUMBER(elem,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_NUMBER_ELEM_HPP */
