#if !defined(BOOST_VMD_IDENTIFIER_ELEM_HPP)
#define BOOST_VMD_IDENTIFIER_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/elem_identifier.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_IDENTIFIER_ELEM(elem,...) \
	BOOST_VMD_DETAIL_ELEM_IDENTIFIER(elem,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTIFIER_ELEM_HPP */
