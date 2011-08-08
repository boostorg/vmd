#if !defined(VMD_DETAIL_ASSERT_IS_SEQ_PPLIB_HPP)
#define VMD_DETAIL_ASSERT_IS_SEQ_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_SIZE(...) \
    BOOST_PP_EQUAL \
      ( \
      BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
      1 \
      ) \
/**/

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_SIZE_AFTER(...) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_EQUAL \
        ( \
        BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
        1 \
        ), \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_ONE_COMMA, \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_ZERO_COMMA \
      ) \
    () \
/**/

#if BOOST_VMD_MSVC

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE_FULL(x) \
    BOOST_PP_VARIADIC_ELEM \
      ( \
      0, \
      VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_SIZE_AFTER x \
      ) \
/**/

#else

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE_FULL(x) \
    BOOST_PP_VARIADIC_ELEM \
      ( \
      0, \
      VMD_DETAIL_ASSERT_IS_SEQ_APPLY(VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_SIZE_AFTER,x) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA */
#endif /* VMD_DETAIL_ASSERT_IS_SEQ_PPLIB_HPP */
