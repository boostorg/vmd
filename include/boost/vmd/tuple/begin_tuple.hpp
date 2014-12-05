#if !defined(BOOST_VMD_BEGIN_TUPLE_HPP)
#define BOOST_VMD_BEGIN_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning tuple of a vsequence.

    vseq = a vsequence.

    returns = the preprocessor tokens forming the beginning tuple.
    		  If the param does not start with a tuple,
    		  the return value is empty.
    
*/
#define BOOST_VMD_BEGIN_TUPLE(...) \
	BOOST_VMD_DETAIL_TUPLE(__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_TUPLE_HPP */
