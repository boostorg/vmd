#if !defined(BOOST_VMD_BEGIN_IDENTIFIER_HPP)
#define BOOST_VMD_BEGIN_IDENTIFIER_HPP

#include <boost/vmd/detail/vmd_detail_setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/vmd_is_begin_parens.hpp>
#include <boost/vmd/detail/vmd_detail_begin_identifier.hpp>
#include <boost/vmd/detail/vmd_detail_gen_zero.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning set of parenthesis of a macro parameter.

    param = a macro parameter.

    returns = the prepocessor tokens forming the beginning set of parenthesis.
    		  If the param does not start with a set of parenthesis,
    		  the return value is empty.
    
*/
# define BOOST_VMD_BEGIN_IDENTIFIER(param,keys) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS(param), \
      BOOST_VMD_DETAIL_GEN_ZERO, \
      BOOST_VMD_DETAIL_BEGIN_IDENTIFIER \
      ) \
    (param,keys) \
/**/

#endif /* BOOST_PP_VARIADICS */

#endif /* BOOST_VMD_BEGIN_IDENTIFIER_HPP */
