#if !defined(BOOST_VMD_ARRAY_ARRAY_HPP)
#define BOOST_VMD_ARRAY_ARRAY_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/vmd/array/is_array.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#define BOOST_VMD_ARRAY(vseq) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_IS_ARRAY(vseq), \
		vseq \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ARRAY_ARRAY_HPP */
