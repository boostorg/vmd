#if !defined(BOOST_VMD_BEGIN_TUPLE_HPP)
#define BOOST_VMD_BEGIN_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/detail/begin_tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to the beginning tuple of a macro parameter.

    param = a macro parameter.

    returns = the preprocessor tokens forming the beginning tuple.
    		  If the param does not start with a tuple,
    		  the return value is empty.
    
*/
# define BOOST_VMD_BEGIN_TUPLE(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE(param), \
      BOOST_VMD_DETAIL_BEGIN_TUPLE, \
      BOOST_VMD_GEN_EMPTY \
      ) \
    (param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_BEGIN_TUPLE_HPP */
