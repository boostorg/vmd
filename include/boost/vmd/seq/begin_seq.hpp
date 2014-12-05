#if !defined(BOOST_VMD_BEGIN_SEQ_HPP)
#define BOOST_VMD_BEGIN_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/seq.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning seq of a macro parameter.

    param = a macro parameter.

    returns   = A beginning seq of the macro parameter.
    			If the param does not start with a seq, expands to nothing.
    
*/
#define BOOST_VMD_BEGIN_SEQ(...) \
	BOOST_VMD_DETAIL_SEQ(__VA_ARGS__) \
/**/

#define BOOST_VMD_BEGIN_SEQ_D(d,...) \
	BOOST_VMD_DETAIL_SEQ_D(d,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_SEQ_HPP */
