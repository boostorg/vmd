#if !defined(BOOST_VMD_TUPLE_EQUAL_HPP)
#define BOOST_VMD_TUPLE_EQUAL_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/tuple_equal.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_TUPLE_EQUAL(tuplef,tuples) \
	BOOST_VMD_DETAIL_TUPLE_EQUAL(tuplef,tuples) \
/**/

#define BOOST_VMD_TUPLE_EQUAL_D(d,tuplef,tuples) \
	BOOST_VMD_DETAIL_TUPLE_EQUAL_D(d,tuplef,tuples) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_TUPLE_EQUAL_HPP */
