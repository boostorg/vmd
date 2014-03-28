#if !defined(BOOST_VMD_SEQ_HPP)
#define BOOST_VMD_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/while.hpp>
#include <boost/vmd/detail/seq.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning sequence, and the preprocessor tokens after the beginning sequence, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a sequence, both elements of the tuple are empty.
   				If the param does start with a sequence, the first element is the beginning sequence
   				and the second element is the preprocessor tokens after the beginning sequence.
    
*/

#define BOOST_VMD_SEQ(seq) \
    BOOST_VMD_DETAIL_SEQ_STATE_RESULT \
      ( \
      BOOST_PP_WHILE \
        ( \
        BOOST_VMD_DETAIL_SEQ_STATE_PRED, \
        BOOST_VMD_DETAIL_SEQ_STATE_OP, \
        BOOST_VMD_DETAIL_SEQ_STATE_INIT(seq) \
        ) \
      ) \
/**/

#define BOOST_VMD_SEQ_D(d,seq) \
    BOOST_VMD_DETAIL_SEQ_STATE_RESULT \
      ( \
      BOOST_PP_WHILE_ ## d \
        ( \
        BOOST_VMD_DETAIL_SEQ_STATE_PRED, \
        BOOST_VMD_DETAIL_SEQ_STATE_OP, \
        BOOST_VMD_DETAIL_SEQ_STATE_INIT(seq) \
        ) \
      ) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQ_HPP */
