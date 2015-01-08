#if !defined(BOOST_VMD_GET_TYPE_HPP)
#define BOOST_VMD_GET_TYPE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_type.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_GET_TYPE(...) \
	BOOST_VMD_DETAIL_SEQUENCE_TYPE(__VA_ARGS__) \
/**/

#define BOOST_VMD_GET_TYPE_D(d,...) \
	BOOST_VMD_DETAIL_SEQUENCE_TYPE_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_GET_TYPE_HPP */
