#if !defined(BOOST_VMD_TYPE_HPP)
#define BOOST_VMD_TYPE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_type.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_TYPE(...) \
	BOOST_VMD_DETAIL_TYPE(__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_TYPE_HPP */
