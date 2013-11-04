#if !defined(BOOST_VMD_AFTER_PARENS_HPP)
#define BOOST_VMD_AFTER_PARENS_HPP

#include <boost/vmd/detail/vmd_detail_setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/vmd_is_begin_parens.hpp>
#include <boost/vmd/detail/vmd_detail_after_parens.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after a beginning set of parenthesis.

    param = a macro parameter.

    returns = the prepocessor tokens after a beginning set of parenthesis.
    		  If the param does not start with a set of parenthesis,
    		  the return value is empty.
    
*/
# define BOOST_VMD_AFTER_PARENS(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS(param), \
      BOOST_VMD_DETAIL_AFTER_PARENS, \
      BOOST_VMD_DETAIL_RETURN_EMPTY \
      ) \
    (param) \
/**/

#endif /* BOOST_PP_VARIADICS */

#endif /* BOOST_VMD_AFTER_PARENS_HPP */
