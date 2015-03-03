#if !defined(BOOST_VMD_IS_EMPTY_LIST_HPP)
#define BOOST_VMD_IS_EMPTY_LIST_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/detail/is_list.hpp>

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
              
    The macro will generate a preprocessing error if the input
    as an empty list marker, instead of being an identifier, is 
    a preprocessor token which VMD cannot parse, as in the 
    example '&BOOST_PP_NIL'.
    
*/

#define BOOST_VMD_IS_EMPTY_LIST(param) \
	BOOST_VMD_DETAIL_IS_LIST_IS_EMPTY_LIST_PROCESS(param) \
/**/

/** \def BOOST_VMD_IS_EMPTY_LIST_D(d,param)

    \brief Tests whether a list is an empty Boost PP list. Re-entrant version.

    An empty Boost PP list consists of the single identifier 'BOOST_PP_NIL'.
    This identifier also serves as a list terminator for a non-empty list.
    
	d     = The next available BOOST_PP_WHILE iteration
    param = a preprocessor parameter

    returns = 1 if the param is an empty Boost PP list
              0 if it is not.
              
    The macro will generate a preprocessing error if the input
    as an empty list marker, instead of being an identifier, is 
    a preprocessor token which VMD cannot parse, as in the 
    example '&BOOST_PP_NIL'.
    
*/

#define BOOST_VMD_IS_EMPTY_LIST_D(d,param) \
	BOOST_VMD_DETAIL_IS_LIST_IS_EMPTY_LIST_PROCESS_D(d,param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IS_EMPTY_LIST_HPP */
