#if !defined(BOOST_VMD_IDENTIFIER_ELEM_HPP)
#define BOOST_VMD_IDENTIFIER_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/after_identifier.hpp>
#include <boost/vmd/detail/elem_identifier.hpp>
#include <boost/vmd/detail/split_identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_IDENTIFIER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_SPLIT_IDENTIFIER(elem,vseq) \
/**/

#define BOOST_VMD_ONLY_IDENTIFIER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_IDENTIFIER(elem,vseq) \
/**/

#define BOOST_VMD_AFTER_IDENTIFIER_ELEM(elem,vseq) \
	BOOST_VMD_DETAIL_ELEM_AFTER_IDENTIFIER(elem,vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTIFIER_ELEM_HPP */
