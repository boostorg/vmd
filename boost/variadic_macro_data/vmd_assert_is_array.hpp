#if !defined(VMD_ASSERT_IS_ARRAY_HPP)
#define VMD_ASSERT_IS_ARRAY_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include <boost/variadic_macro_data/vmd_assert_is_array_pplib.hpp>
#else
#include <boost/variadic_macro_data/vmd_assert_is_array_native.hpp>
#endif /* BOOST_VMD_PPLIB */

#include <boost/variadic_macro_data/vmd_assert_is_array_common.hpp>

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_ARRAY_HPP */
