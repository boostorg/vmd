#if !defined(BOOST_VMD_DETAIL_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_IDENTIFIER_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/vmd/detail/after_identifier.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

# define BOOST_VMD_DETAIL_IDENTIFIER(parameter,...) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_IDENTIFIER \
      ) \
    (parameter,__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_IDENTIFIER_HPP */
