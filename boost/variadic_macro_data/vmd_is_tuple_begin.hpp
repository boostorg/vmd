#if !defined(VMD_IS_TUPLE_BEGIN_HPP)
#define VMD_IS_TUPLE_BEGIN_HPP

#include "detail/vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include "vmd_is_tuple_begin_pplib.hpp"
#else
#include "vmd_is_tuple_begin_native.hpp"
#endif /* BOOST_VMD_PPLIB */

#include "vmd_is_tuple_begin_common.hpp"

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_IS_TUPLE_BEGIN_HPP */
