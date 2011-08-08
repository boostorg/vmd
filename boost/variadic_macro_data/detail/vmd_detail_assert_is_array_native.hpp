#if !defined(VMD_DETAIL_ASSERT_IS_ARRAY_NATIVE_HPP)
#define VMD_DETAIL_ASSERT_IS_ARRAY_NATIVE_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#if BOOST_VMD_ASSERT_DATA

#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/variadic_macro_data/vmd_tuple.hpp>
#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>

#if !BOOST_VMD_MSVC

#include <boost/variadic_macro_data/detail/vmd_detail.hpp>

#endif

#if BOOST_VMD_MSVC

#define VMD_DETAIL_ASSERT_IS_ARRAY_VC_IMP(x) \
    ( \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_EQUAL(2,BOOST_VMD_PP_TUPLE_SIZE(x)), \
      VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_ARRAY_FORM, \
      VMD_DETAIL_ASSERT_IS_ARRAY_GEN_ZERO \
      ) \
    (x) \
    ) \
/**/

/*

  Check if the first element of the tuple is numeric

*/

#define VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_ARRAY_FORM(x) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_ARRAY_NUM(BOOST_VMD_PP_TUPLE_ELEM(0,x)), \
      VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_NUMERIC_MATCH, \
      VMD_DETAIL_ASSERT_IS_ARRAY_GEN_ZERO \
      ) \
    (x) \
/**/

#else

/*

  Check if the first element of the tuple is numeric

*/

#define VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_ARRAY_FORM(x) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_ARRAY_NUM(BOOST_VMD_PP_TUPLE_ELEM(0,x)), \
      VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_NUMERIC_MATCH, \
      VMD_DETAIL_GEN_ZERO \
      ) \
    (x) \
/**/

#endif /* BOOST_VMD_MSVC */

/*

  Finally check if the first element of the tuple is equal to the number of tuple elements of the second element

*/

#define VMD_DETAIL_ASSERT_IS_ARRAY_CHECK_NUMERIC_MATCH(x) \
    BOOST_VMD_ASSERT_IS_TUPLE(BOOST_VMD_PP_TUPLE_ELEM(1,x)) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_EQUAL(BOOST_VMD_PP_TUPLE_ELEM(0,x),BOOST_VMD_PP_TUPLE_SIZE(BOOST_VMD_PP_TUPLE_ELEM(1,x))), \
      1, \
      0 \
      ) \
/**/

#endif /* BOOST_VMD_ASSERT_DATA */
#endif // BOOST_VMD_VARIADICS
#endif // VMD_DETAIL_ASSERT_IS_ARRAY_NATIVE_HPP
