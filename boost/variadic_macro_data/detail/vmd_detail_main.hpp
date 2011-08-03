#if !defined(VMD_DETAIL_MAIN_HPP)
#define VMD_DETAIL_MAIN_HPP

#include "vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_detail_main_pplib.hpp"
#else
#include "vmd_detail_main_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#include "vmd_detail_main_common.hpp"

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_MAIN_HPP */
