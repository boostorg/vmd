#if !defined(BOOST_VMD_DETAIL_AFTER_NUMBER_HPP)
#define BOOST_VMD_DETAIL_AFTER_NUMBER_HPP

#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/detail/after_number_common.hpp>
#include <boost/vmd/detail/after_number_re.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_AFTER_NUMBER_EXECUTE(...) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__)), \
      BOOST_VMD_DETAIL_AFTER_NUMBER_NOT_FOUND, \
      BOOST_VMD_DETAIL_AFTER_NUMBER \
      ) \
    (__VA_ARGS__) \
/**/

#endif /* BOOST_VMD_DETAIL_AFTER_NUMBER_HPP */
