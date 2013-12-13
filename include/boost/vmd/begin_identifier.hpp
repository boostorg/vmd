#if !defined(BOOST_VMD_BEGIN_IDENTIFIER_HPP)
#define BOOST_VMD_BEGIN_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_zero.hpp>
#include <boost/vmd/detail/begin_identifier.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the index of a beginning identifier of a macro parameter.

    parameter = a macro parameter.
    keys  	  = The variadic data may take one of two forms:
    			it is either a C++ identifier as a unique 'key'
    			or a Boost PP tuple of the unique 'key's.

    returns   = expands to the index, starting with 1, of the particular identifier it matches, otherwise expands to 0.
    
*/
# define BOOST_VMD_BEGIN_IDENTIFIER(parameter,keys) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_GEN_ZERO, \
      BOOST_VMD_DETAIL_BEGIN_IDENTIFIER \
      ) \
    (parameter,keys) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_IDENTIFIER_HPP */
