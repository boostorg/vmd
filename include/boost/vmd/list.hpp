#if !defined(BOOST_VMD_LIST_HPP)
#define BOOST_VMD_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/detail/list.hpp>
#include <boost/vmd/detail/is_list.hpp>
#if BOOST_VMD_ASSERT_DATA
#include <boost/vmd/assert.hpp>
#endif

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning list, and the preprocessor tokens after the beginning list, of a macro parameter.

    param = input possibly beginning with a Boost PP list.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a list, both elements of the tuple are empty.
   				If the param does start with a list, the first element is the list 
   				and the second element is the preprocessor tokens after the beginning list.
    
*/
# define BOOST_VMD_LIST(param) \
	BOOST_VMD_DETAIL_LIST(param) \
/**/

# define BOOST_VMD_LIST_D(d,param) \
	BOOST_VMD_DETAIL_LIST_D(d,param) \
/**/

/** \brief Expands to the beginning list of a macro parameter.

    param = input possibly beginning with a Boost PP list.

    returns   = A beginning list of the macro parameter.
    			If the param does not start with a list, expands to nothing.
    
*/
#define BOOST_VMD_BEGIN_LIST(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_LIST(param) \
		) \
/**/

#define BOOST_VMD_BEGIN_LIST_D(d,param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_LIST_D(d,param) \
		) \
/**/

/** \brief Expands to the preprocessor tokens after the beginning list of a macro parameter.

    param = input possibly beginning with a Boost PP list.

    returns   = The preprocessor tokens after the beginning list of the macro parameter.
    			If the param does not start with a list, expands to nothing.
    
*/
#define BOOST_VMD_AFTER_LIST(param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_LIST(param) \
		) \
/**/

#define BOOST_VMD_AFTER_LIST_D(d,param) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_LIST_D(d,param) \
		) \
/**/

/** \brief Tests whether a parameter begins with a list.

    param = input possibly beginning with a Boost PP list.

    returns = 1 if the param begins with a list,
              0 if it does not.
    
*/
#define BOOST_VMD_IS_BEGIN_LIST(param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_LIST(param) \
			) \
		) \
/**/

#define BOOST_VMD_IS_BEGIN_LIST_D(d,param) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_VMD_BEGIN_LIST_D(d,param) \
			) \
		) \
/**/

/** \def BOOST_VMD_IS_LIST(param)

    \brief Determines if a parameter is a Boost pplib list.

    The macro checks that the parameter is a pplib list.
    
    The macro works through variadic macro support.
    It returns 1 if it is a list, else if returns 0.
    
    param = input as a possible Boost PP list.
    
    returns = 1 if it a list, else returns 0.
    
*/

#define BOOST_VMD_IS_LIST(param) \
	BOOST_VMD_DETAIL_IS_LIST(param) \
/**/

#define BOOST_VMD_IS_LIST_D(d,param) \
	BOOST_VMD_DETAIL_IS_LIST_D(d,param) \
/**/

/** \def BOOST_VMD_IS_EMPTY_LIST(param)

    \brief Tests whether a list is an empty Boost PP list.

    An empty Boost PP list consists of the single identifier 'BOOST_PP_NIL'.
    This identifier also serves as a list terminator for a non-empty list.
    
    param = a preprocessor parameter

    returns = 1 if the param is an empty Boost PP list
              0 if it is not.
              
*/

#define BOOST_VMD_IS_EMPTY_LIST_IRESULT(param) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_LIST(param), \
		BOOST_VMD_DETAIL_IS_LIST_IS_EMPTY_LIST_PROCESS, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(param) \
/**/

#define BOOST_VMD_IS_EMPTY_LIST_D_IRESULT(d,param) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_LIST_D(d,param), \
		BOOST_VMD_DETAIL_IS_LIST_IS_EMPTY_LIST_PROCESS_D, \
		BOOST_VMD_IDENTITY(0) \
		) \
	(d,param) \
/**/

#define BOOST_VMD_IS_EMPTY_LIST(param) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_IS_EMPTY_LIST_IRESULT(param)) \
/**/

#define BOOST_VMD_IS_EMPTY_LIST_D(d,param) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_IS_EMPTY_LIST_D_IRESULT(d,param)) \
/**/

/** \def BOOST_VMD_ASSERT_IS_LIST(param)

    \brief Asserts that the parameter is a Boost pplib list.

    The macro checks that the parameter is a pplib list.
    If it is not a pplib list, it forces a compiler error.
    
    The macro works through variadic macro support.
    
    The macro normally checks for a pplib list only in 
    debug mode. However an end-user can force the macro 
    to check or not check by defining the macro 
    BOOST_VMD_ASSERT_DATA to 1 or 0 respectively.
    
    param = a possible pplib list.

    returns = Normally the macro returns nothing. 
    
              If the parameter is a pplib list, nothing is 
              output.
              
              For VC++, because there is no sure way of forcing  
              a compiler error from within a macro without producing
              output, if the parameter is not a pplib list the 
              macro forces a compiler error by outputting invalid C++.
              
              For all other compilers a compiler error is forced 
              without producing output if the parameter is not a 
              pplib list.
              
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_LIST(param)
#define BOOST_VMD_ASSERT_IS_LIST_D(d,param)

#else

#define BOOST_VMD_ASSERT_IS_LIST(param) \
    BOOST_VMD_ASSERT \
      ( \
      BOOST_VMD_IS_LIST(param), \
      BOOST_VMD_ASSERT_IS_LIST_ERROR \
      ) \
/**/

#define BOOST_VMD_ASSERT_IS_LIST_D(d,param) \
    BOOST_VMD_ASSERT \
      ( \
      BOOST_VMD_IS_LIST_D(d,param), \
      BOOST_VMD_ASSERT_IS_LIST_ERROR \
      ) \
/**/

#endif /* BOOST_VMD_ASSERT_DATA */

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_LIST_HPP */
