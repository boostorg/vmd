#if !defined(BOOST_VMD_LIST_HPP)
#define BOOST_VMD_LIST_HPP

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

/** \brief Expands to a tuple of the beginning list, and the preprocessor tokens after the beginning list, of a macro parameter.

    param = a macro parameter.

    returns   = the result is a tuple of two elements.
    			If the param does not start with a list, both elements of the tuple are empty.
   				If the param does start with a list, the first element is the list 
   				and the second element is the preprocessor tokens after the beginning list.
    
*/
# define BOOST_VMD_LIST(param) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE(param), \
      BOOST_VMD_DETAIL_AFTER_TUPLE, \
      BOOST_VMD_DETAIL_AFTER_TUPLE_NOT_FOUND \
      ) \
    (param) \
/**/

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_LIST_HPP */
