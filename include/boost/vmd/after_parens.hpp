#if !defined(BOOST_VMD_AFTER_PARENS_HPP)
#define BOOST_VMD_AFTER_PARENS_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/is_begin_parens.hpp>
#include <boost/vmd/detail/after_parens.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the preprocessor tokens after a beginning set of parenthesis.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a set of parenthesis, both elements of the tuple are empty.
   				If the param does start with a set of parenthesis, the first element is the beginning set 
   				of parenthesis and the second element is the preprocessor tokens after the beginning set of parenthesis.
    
*/
# define BOOST_VMD_AFTER_PARENS(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS(param), \
      BOOST_VMD_DETAIL_AFTER_PARENS, \
      BOOST_VMD_DETAIL_AFTER_PARENS_NOT_FOUND \
      ) \
    (param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_AFTER_PARENS_HPP */
