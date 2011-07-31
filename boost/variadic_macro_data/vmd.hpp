#if !defined(VARIADIC_MACRO_DATA_HPP)
#define VARIADIC_MACRO_DATA_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_pplib.hpp"
#else
#include "vmd_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#include "vmd_common.hpp"

#endif /* BOOST_VMD_VARIADICS */
#endif /* VARIADIC_MACRO_DATA_HPP */
