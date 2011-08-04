#if !defined(VMD_IS_EMPTY_HPP)
#define VMD_IS_EMPTY_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include <boost/variadic_macro_data/vmd_is_empty_pplib.hpp>
#else
#include <boost/variadic_macro_data/vmd_is_empty_native.hpp>
#endif /* BOOST_VMD_PPLIB */

#include <boost/variadic_macro_data/vmd_is_empty_common.hpp>

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_IS_EMPTY_HPP */
