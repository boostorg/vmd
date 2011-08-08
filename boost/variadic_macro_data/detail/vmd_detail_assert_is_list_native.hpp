#if !defined(VMD_DETAIL_ASSERT_IS_LIST_NATIVE_HPP)
#define VMD_DETAIL_ASSERT_IS_LIST_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
#include <boost/variadic_macro_data/vmd_tuple.hpp>

#define VMD_DETAIL_ASSERT_IS_LIST_PROCESS_TUPLE(x) \
    BOOST_VMD_ASSERT_IS_TUPLE(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_EQUAL(2,BOOST_VMD_PP_TUPLE_SIZE(x)), \
      VMD_DETAIL_ASSERT_IS_LIST_RETURN_SECOND, \
      VMD_DETAIL_ASSERT_IS_LIST_ASSERT \
      ) \
    (x) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_RETURN_SECOND(x) \
    BOOST_VMD_PP_TUPLE_ELEM(1,x) \
/**/

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA */
#endif /* VMD_DETAIL_ASSERT_IS_LIST_NATIVE_HPP */
