#if !defined(VMD_DETAIL_COMMON_HPP)
#define VMD_DETAIL_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#define VMD_DETAIL_COMMON_EXPAND(...) \
  1,1 \
/**/
#define VMD_DETAIL_GEN_ZERO(x) 0

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_COMMON_HPP */
