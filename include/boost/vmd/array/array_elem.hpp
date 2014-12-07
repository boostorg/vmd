#if !defined(BOOST_VMD_ARRAY_ELEM_HPP)
#define BOOST_VMD_ARRAY_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/elem_array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_ARRAY_ELEM(elem,...) \
	BOOST_VMD_DETAIL_ELEM_ARRAY(elem,__VA_ARGS__) \
/**/

#define BOOST_VMD_ARRAY_ELEM_D(d,elem,...) \
	BOOST_VMD_DETAIL_ELEM_ARRAY_D(d,elem,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ARRAY_ELEM_HPP */
