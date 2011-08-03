#if !defined(VMD_MAIN_HPP)
#define VMD_MAIN_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_main_pplib.hpp"
#else
#include "vmd_main_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_MAIN_HPP */
