#if !defined(BOOST_VMD_IS_SEQ_HPP)
#define BOOST_VMD_IS_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/seq/begin_seq.hpp>
#include <boost/vmd/detail/is_entire.hpp>
#include <boost/vmd/detail/modifiers.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \def BOOST_VMD_IS_SEQ(seq)

    \brief Determines if a parameter is a Boost pplib seq.

    The macro checks that the parameter is a pplib seq.
    It returns 1 if it is a seq, else if returns 0.
    
    The macro works through variadic macro support.
    
    seq = a possible pplib seq.

    returns = 1 if it a seq, else returns 0.
    
*/

#define BOOST_VMD_IS_SEQ(seq) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_BEGIN_SEQ(seq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_IS_SEQ_D(d,seq) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_BEGIN_SEQ_D(d,seq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_SEQ_HPP */
