#if !defined(VMD_DATA_HPP)
#define VMD_DATA_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_data_pplib.hpp"
#else
#include "vmd_data_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DATA_HPP */
