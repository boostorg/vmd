#if !defined(BOOST_VMD_IS_MULTI_HPP)
#define BOOST_VMD_IS_MULTI_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/sequence_arity.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_IS_MULTI(vseq) \
	BOOST_VMD_DETAIL_IS_MULTI(vseq) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_MULTI_HPP */
