#if !defined(BOOST_VMD_BEGIN_PARENS_HPP)
#define BOOST_VMD_BEGIN_PARENS_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/is_begin_parens.hpp>
#include <boost/vmd/detail/begin_parens.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning set of parenthesis of a macro parameter.

    param = a macro parameter.

    returns = the preprocessor tokens forming the beginning set of parenthesis.
    		  If the param does not start with a set of parenthesis,
    		  the return value is empty.
    
*/
# define BOOST_VMD_BEGIN_PARENS(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS(param), \
      BOOST_VMD_DETAIL_BEGIN_PARENS, \
      BOOST_VMD_GEN_EMPTY \
      ) \
    (param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_PARENS_HPP */
