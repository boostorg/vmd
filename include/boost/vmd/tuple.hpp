#if !defined(BOOST_VMD_TUPLE_HPP)
#define BOOST_VMD_TUPLE_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/detail/tuple.hpp>

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

/** \brief Expands to a tuple of the beginning tuple, and the preprocessor tokens after the beginning tuple, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a tuple, both elements of the tuple are empty.
   				If the param does start with a tuple, the first element is the beginning tuple
   				and the second element is the preprocessor tokens after the beginning tuple.
    
*/
# define BOOST_VMD_TUPLE(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE(param), \
      BOOST_VMD_DETAIL_AFTER_TUPLE, \
      BOOST_VMD_DETAIL_AFTER_TUPLE_NOT_FOUND \
      ) \
    (param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_TUPLE_HPP */
