#if !defined(BOOST_VMD_TUPLE_TUPLE_HPP)
#define BOOST_VMD_TUPLE_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/vmd/tuple/is_tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_TUPLE(vseq) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_TUPLE(vseq), \
		vseq \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_TUPLE_TUPLE_HPP */
