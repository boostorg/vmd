#if !defined(VMD_DETAIL_ASSERT_IS_SEQ_COMMON_HPP)
#define VMD_DETAIL_ASSERT_IS_SEQ_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/facilities/expand.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/variadic_macro_data/vmd_is_empty.hpp>
#include <boost/variadic_macro_data/vmd_is_tuple_begin.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/facilities/empty.hpp>

#endif

#define VMD_DETAIL_ASSERT_IS_SEQ_PRED(d,state) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_TUPLE_BEGIN(state), \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_ONE, \
      VMD_DETAIL_ASSERT_IS_SEQ_PRED_CHECK_SUCCESS \
      ) \
    (state) \
/**/

#define VMD_DETAIL_ASSERT_IS_SEQ_PRED_CHECK_SUCCESS(state) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_IS_SUCCESS(state), \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_ZERO, \
      VMD_DETAIL_ASSERT_IS_SEQ_PRED_CHECK_FAILURE \
      ) \
    (state) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_PRED_CHECK_FAILURE(state) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_IS_FAILURE(state), \
      0, \
      1 \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_OP(d,state) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_TUPLE_BEGIN(state), \
      VMD_DETAIL_ASSERT_IS_SEQ_CHECK_FIRST_TUPLE_SIZE, \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_RETURN_ASSERT \
      ) \
    (state) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_CHECK_FIRST_TUPLE_SIZE(state) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE(state), \
      VMD_DETAIL_ASSERT_IS_SEQ_CHECK_AFTER_FIRST_TUPLE, \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_FAILURE \
      ) \
    (state) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_CHECK_AFTER_FIRST_TUPLE(state) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_IS_AFTER_FIRST_TUPLE(state), \
      VMD_DETAIL_ASSERT_IS_SEQ_GET_AFTER_FIRST_TUPLE, \
      VMD_DETAIL_ASSERT_IS_SEQ_GEN_NOT_TUPLE \
      ) \
    (state) \
/**/

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_EMPTY \
        ( \
        VMD_DETAIL_ASSERT_IS_SEQ_GET_AFTER_FIRST_TUPLE(x) \
        ), \
      VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE_EMPTY, \
      VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE_FULL \
      ) \
    (x) \
/**/

#if BOOST_VMD_MSVC

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE_EMPTY(x) \
    BOOST_PP_EXPAND(VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_SIZE x) \
/**/

#define VMD_DETAIL_ASSERT_IS_SEQ_GET_AFTER_FIRST_TUPLE(x) \
    BOOST_PP_EXPAND(VMD_DETAIL_ASSERT_IS_SEQ_EMPTY x) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_NOT_TUPLE(x) \
    VMD_DETAIL_ASSERT_IS_SEQ_GEN_NOT_TUPLE_GET \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_EMPTY x \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_IS_AFTER_FIRST_TUPLE(x) \
    BOOST_VMD_IS_TUPLE_BEGIN \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_EMPTY x \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_CHECK_RETURN_FAILURE(x) \
    VMD_DETAIL_ASSERT_IS_SEQ_VC_CHECK_RETURN_FAILURE \
      ( \
      BOOST_PP_NOT \
        ( \
        VMD_DETAIL_ASSERT_IS_SEQ_IS_FAILURE(x) \
        ) \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_VC_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT \
      ( \
      x \
      ) \
    BOOST_PP_IIF \
      ( \
      x, \
      BOOST_PP_EMPTY, \
      VMD_DETAIL_ASSERT_IS_SEQ_VC_GEN_ERROR_OUTPUT \
      ) \
    () \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_VC_GEN_ERROR_OUTPUT() \
    typedef char BOOST_VMD_ASSERT_IS_SEQ_ERROR[-1]; \
/**/

#else

#define VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_FIRST_TUPLE_SIZE_EMPTY(x) \
    VMD_DETAIL_ASSERT_IS_SEQ_APPLY(VMD_DETAIL_ASSERT_IS_SEQ_ASSERT_SIZE,x) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_GET_AFTER_FIRST_TUPLE(x) \
    VMD_DETAIL_ASSERT_IS_SEQ_APPLY(VMD_DETAIL_ASSERT_IS_SEQ_EMPTY,x) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_NOT_TUPLE(x) \
    VMD_DETAIL_ASSERT_IS_SEQ_GEN_NOT_TUPLE_GET \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_APPLY(VMD_DETAIL_ASSERT_IS_SEQ_EMPTY,x) \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_IS_AFTER_FIRST_TUPLE(x) \
    BOOST_VMD_IS_TUPLE_BEGIN \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_APPLY(VMD_DETAIL_ASSERT_IS_SEQ_EMPTY,x) \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT \
      ( \
      BOOST_PP_NOT \
        ( \
        VMD_DETAIL_ASSERT_IS_SEQ_IS_FAILURE(x) \
        ) \
      ) \
/**/

#endif

#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_NOT_TUPLE_GET(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_EMPTY \
        ( \
        x \
        ), \
      BOOST_VMD_IS_SEQ_SUCCESS, \
      x \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_APPLY_I(macro, args) \
  macro args \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_APPLY(macro, args) \
  VMD_DETAIL_ASSERT_IS_SEQ_APPLY_I(macro, args) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_RETURN_ASSERT(x) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_SEQ_IS_SUCCESS(x), \
      BOOST_VMD_IS_SEQ_SUCCESS, \
      BOOST_VMD_IS_SEQ_FAILURE \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_EMPTY(...) VMD_DETAIL_ASSERT_IS_SEQ_EMPTY1(__VA_ARGS__)
#define VMD_DETAIL_ASSERT_IS_SEQ_EMPTY1(...)
#define VMD_DETAIL_ASSERT_IS_SEQ_IS_SUCCESS(x) \
    BOOST_VMD_IS_EMPTY \
      ( \
      BOOST_PP_CAT(VMD_DETAIL_ASSERT_IS_SEQ_SHELPER_,x) \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_IS_FAILURE(x) \
    BOOST_VMD_IS_EMPTY \
      ( \
      BOOST_PP_CAT(VMD_DETAIL_ASSERT_IS_SEQ_FHELPER_,x) \
      ) \
/**/
#define VMD_DETAIL_ASSERT_IS_SEQ_SHELPER_BOOST_VMD_IS_SEQ_SUCCESS
#define VMD_DETAIL_ASSERT_IS_SEQ_FHELPER_BOOST_VMD_IS_SEQ_FAILURE
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_ONE(x) 1
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_ZERO(x) 0
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_ONE_COMMA() 1,
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_ZERO_COMMA() 0,
#define VMD_DETAIL_ASSERT_IS_SEQ_GEN_FAILURE(x) BOOST_VMD_IS_SEQ_FAILURE

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA */
#endif /* VMD_DETAIL_ASSERT_IS_SEQ_COMMON_HPP */
