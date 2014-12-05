#if !defined(BOOST_VMD_IS_EMPTY_LIST_HPP)
#define BOOST_VMD_IS_EMPTY_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/list/is_list.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

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

#define BOOST_VMD_IS_EMPTY_LIST_IRESULT_D(d,param) \
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
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_IS_EMPTY_LIST_IRESULT_D(d,param)) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_EMPTY_LIST_HPP */
