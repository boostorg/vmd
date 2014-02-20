#if !defined(BOOST_VMD_IS_SEQ_HPP)
#define BOOST_VMD_IS_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

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

#include <boost/preprocessor/control/while.hpp>
#include <boost/vmd/detail/is_seq.hpp>

#define BOOST_VMD_IS_SEQ(seq) \
    BOOST_VMD_DETAIL_IS_SEQ_STATE_RESULT \
      ( \
      BOOST_PP_WHILE \
        ( \
        BOOST_VMD_DETAIL_IS_SEQ_STATE_PRED, \
        BOOST_VMD_DETAIL_IS_SEQ_STATE_OP, \
        BOOST_VMD_DETAIL_IS_SEQ_STATE_INIT(seq) \
        ) \
      ) \
/**/

#define BOOST_VMD_IS_SEQ_D(d,seq) \
    BOOST_VMD_DETAIL_IS_SEQ_STATE_RESULT \
      ( \
      BOOST_PP_WHILE_ ## d \
        ( \
        BOOST_VMD_DETAIL_IS_SEQ_STATE_PRED, \
        BOOST_VMD_DETAIL_IS_SEQ_STATE_OP, \
        BOOST_VMD_DETAIL_IS_SEQ_STATE_INIT(seq) \
        ) \
      ) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_SEQ_HPP */
