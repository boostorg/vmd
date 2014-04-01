#if !defined(BOOST_VMD_SEQ_HPP)
#define BOOST_VMD_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/is_entire.hpp>
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

/** \brief Expands to the beginning sequence of a macro parameter.

    param = a macro parameter.

    returns   = A beginning sequence of the macro parameter.
    			If the param does not start with a sequence, expands to nothing.
    
*/
#define BOOST_VMD_BEGIN_SEQ(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_SEQ(param) \
		) \
/**/

/** \brief Expands to the preprocessor tokens after the beginning sequence of a macro parameter.

    param = a macro parameter.

    returns   = The preprocessor tokens after the beginning sequence of the macro parameter.
    			If the param does not start with a sequence, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_SEQ(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_SEQ(param) \
		) \
/**/

/** \brief Tests whether a parameter begins with a sequence.

    param = a macro parameter.

    returns = 1 if the param begins with a sequence,
              0 if it does not.
    
*/
#define BOOST_VMD_IS_BEGIN_SEQ(param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_SEQ(param) \
			) \
		) \
/**/

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
		BOOST_VMD_SEQ(seq) \
		) \
/**/

#define BOOST_VMD_IS_SEQ_D(d,seq) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_SEQ_D(d,seq) \
		) \
/**/

/** \def BOOST_VMD_ASSERT_IS_SEQ(seq)

    \brief Asserts that the parameter is a Boost pplib seq.

    The macro checks that the parameter is a pplib seq.
    If it is not a pplib seq, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib seq only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.

    seq = a possible pplib seq.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a pplib seq, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a pplib seq the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              pplib seq.
              
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_SEQ(seq)
#define BOOST_VMD_ASSERT_IS_SEQ_D(d,seq)

#else

#include <boost/vmd/assert.hpp>

#define BOOST_VMD_ASSERT_IS_SEQ(seq) \
    BOOST_VMD_ASSERT \
      ( \
      BOOST_VMD_IS_SEQ(seq), \
      BOOST_VMD_ASSERT_IS_SEQ_ERROR \
      ) \
/**/

#define BOOST_VMD_ASSERT_IS_SEQ_D(d,seq) \
    BOOST_VMD_ASSERT \
      ( \
      BOOST_VMD_IS_SEQ_D(d,seq), \
      BOOST_VMD_ASSERT_IS_SEQ_ERROR \
      ) \
/**/

#endif /* BOOST_VMD_ASSERT_DATA */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_SEQ_HPP */
