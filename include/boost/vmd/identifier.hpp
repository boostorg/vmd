#if !defined(BOOST_VMD_IDENTIFIER_HPP)
#define BOOST_VMD_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/detail/after_identifier.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the index of a beginning identifier found and the preprocessor tokens after the beginning identifier.

    parameter = a macro parameter.
    keys  	  = The data may take one of two forms:
    			it is either a C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

    returns   = the result is a tuple of two elements.
    			If a beginning identifier is not found, the first element 
    			is 0 and the second element of the tuple is empty.
   				If a beginning identifier is found, the first element 
   				is the index, starting with 1, of the identifier 
   				and the second element is the preprocessor tokens after the identifier.
    
*/
# define BOOST_VMD_IDENTIFIER(parameter,...) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER \
      ) \
    (parameter,__VA_ARGS__) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_IDENTIFIER_HPP */
