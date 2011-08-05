#if !defined(VMD_DETAIL_ASSERT_IS_LIST_HPP)
#define VMD_DETAIL_ASSERT_IS_LIST_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_PPLIB
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_list_pplib.hpp>
#else
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_list_native.hpp>
#endif /* BOOST_VMD_PPLIB */

#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_list_common.hpp>

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DETAIL_ASSERT_IS_LIST_HPP */
