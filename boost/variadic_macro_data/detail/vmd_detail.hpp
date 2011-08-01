#if !defined(VMD_DETAIL_HPP)
#define VMD_DETAIL_HPP

#include "vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_detail_pplib.hpp"
#else
#include "vmd_detail_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#include "vmd_detail_common.hpp"

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_HPP */
