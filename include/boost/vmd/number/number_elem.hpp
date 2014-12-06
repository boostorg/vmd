#if !defined(BOOST_VMD_NUMBER_ELEM_HPP)
#define BOOST_VMD_NUMBER_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/elem_number.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_NUMBER_ELEM(elem,...) \
	BOOST_VMD_DETAIL_ELEM_NUMBER(elem,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_NUMBER_ELEM_HPP */
