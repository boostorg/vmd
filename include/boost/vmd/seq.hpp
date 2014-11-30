#if !defined(BOOST_VMD_SEQ_HPP)
#define BOOST_VMD_SEQ_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/is_entire.hpp>
#include <boost/vmd/detail/seq.hpp>
#if BOOST_VMD_ASSERT_DATA
#include <boost/vmd/assert.hpp>
#endif

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning seq, and the preprocessor tokens after the beginning seq, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a seq, both elements of the tuple are empty.
   				If the param does start with a seq, the first element is the beginning seq
   				and the second element is the preprocessor tokens after the beginning seq.
    
*/

#define BOOST_VMD_SEQ(seq) \
/**/

#define BOOST_VMD_SEQ_D(d,seq) \
/**/

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

/** \brief Expands to the preprocessor tokens after the beginning seq of a macro parameter.

    param = a macro parameter.

    returns   = The preprocessor tokens after the beginning seq of the macro parameter.
    			If the param does not start with a seq, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_SEQ(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_BEGIN_SEQ(param,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_AFTER_SEQ_D(d,param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_BEGIN_SEQ_D(d,param,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

/** \brief Tests whether a parameter begins with a seq.

    param = a macro parameter.

    returns = 1 if the param begins with a seq,
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

#define BOOST_VMD_IS_BEGIN_SEQ_D(d,param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_SEQ_D(d,param) \
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
		BOOST_VMD_BEGIN_SEQ(seq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_IS_SEQ_D(d,seq) \
	BOOST_VMD_DETAIL_IS_ENTIRE \
		( \
		BOOST_VMD_BEGIN_SEQ_D(d,seq,BOOST_VMD_RETURN_AFTER) \
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
