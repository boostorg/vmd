#if !defined(VMD_IS_EMPTY_HPP)
#define VMD_IS_EMPTY_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_is_empty_pplib.hpp"
#else
#include "vmd_is_empty_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#include "vmd_is_empty_common.hpp"

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_IS_EMPTY_HPP */
