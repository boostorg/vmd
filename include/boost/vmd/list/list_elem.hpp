#if !defined(BOOST_VMD_LIST_ELEM_HPP)
#define BOOST_VMD_LIST_ELEM_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/elem_list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_LIST_ELEM(elem,...) \
	BOOST_VMD_DETAIL_ELEM_LIST(elem,__VA_ARGS__) \
/**/

#define BOOST_VMD_LIST_ELEM_D(d,elem,...) \
	BOOST_VMD_DETAIL_ELEM_LIST_D(d,elem,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_LIST_ELEM_HPP */
