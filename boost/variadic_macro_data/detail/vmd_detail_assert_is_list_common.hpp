#if !defined(VMD_DETAIL_ASSERT_IS_LIST_COMMON_HPP)
#define VMD_DETAIL_ASSERT_IS_LIST_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/variadic_macro_data/vmd_is_empty.hpp>
#include <boost/variadic_macro_data/vmd_is_begin_parens.hpp>

#if BOOST_VMD_MSVC

#include <boost/preprocessor/facilities/empty.hpp>

#define VMD_DETAIL_ASSERT_IS_LIST_CHECK_RETURN_FAILURE(x) \
    VMD_DETAIL_ASSERT_IS_LIST_VC_CHECK_RETURN_FAILURE \
      ( \
      BOOST_PP_NOT \
        ( \
        VMD_DETAIL_ASSERT_IS_LIST_IS_FAILURE(x) \
        ) \
      ) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_VC_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT \
      ( \
      x \
      ) \
    BOOST_PP_IIF \
      ( \
      x, \
      BOOST_PP_EMPTY, \
      VMD_DETAIL_ASSERT_IS_LIST_VC_GEN_ERROR_OUTPUT \
      ) \
    () \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_VC_GEN_ERROR_OUTPUT() \
    typedef char BOOST_VMD_ASSERT_IS_LIST_ERROR[-1]; \
/**/

#else

#define VMD_DETAIL_ASSERT_IS_LIST_CHECK_RETURN_FAILURE(x) \
    BOOST_PP_ASSERT \
      ( \
      BOOST_PP_NOT \
        ( \
        VMD_DETAIL_ASSERT_IS_LIST_IS_FAILURE(x) \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_MSVC */

#define VMD_DETAIL_ASSERT_IS_LIST_PRED(d,state) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS(state), \
      VMD_DETAIL_ASSERT_IS_LIST_GEN_ONE, \
      VMD_DETAIL_ASSERT_IS_LIST_NOT_BOOST_PP_NIL \
      ) \
    (state) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_OP(d,state) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_PARENS(state), \
      VMD_DETAIL_ASSERT_IS_LIST_PROCESS_TUPLE, \
      VMD_DETAIL_ASSERT_IS_LIST_PROCESS_IF_BOOST_PP_NIL \
      ) \
    (state) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_PROCESS_IF_BOOST_PP_NIL(x) \
    BOOST_PP_IIF \
      ( \
      VMD_DETAIL_ASSERT_IS_LIST_BOOST_PP_NIL(x), \
      BOOST_PP_NIL, \
      BOOST_VMD_IS_LIST_FAILURE \
      ) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_ASSERT(x) \
    BOOST_VMD_IS_LIST_FAILURE \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_GEN_ONE(x) \
    1 \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_NOT_BOOST_PP_NIL(x) \
    BOOST_PP_NOT \
      ( \
      BOOST_PP_BITOR \
        ( \
        VMD_DETAIL_ASSERT_IS_LIST_BOOST_PP_NIL(x), \
        VMD_DETAIL_ASSERT_IS_LIST_IS_FAILURE(x) \
        ) \
      ) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_BOOST_PP_NIL(x) \
    BOOST_VMD_IS_EMPTY \
      ( \
      BOOST_PP_CAT \
        ( \
        VMD_DETAIL_ASSERT_IS_LIST_NIL_HELPER_, \
        x \
        ) BOOST_PP_EMPTY() \
      ) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_NIL_HELPER_BOOST_PP_NIL

#define VMD_DETAIL_ASSERT_IS_LIST_IS_FAILURE(x) \
    BOOST_VMD_IS_EMPTY \
      ( \
      BOOST_PP_CAT(VMD_DETAIL_ASSERT_IS_LIST_FHELPER_,x) BOOST_PP_EMPTY() \
      ) \
/**/

#define VMD_DETAIL_ASSERT_IS_LIST_FHELPER_BOOST_VMD_IS_LIST_FAILURE

#endif /* BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA */
#endif /* VMD_DETAIL_ASSERT_IS_LIST_COMMON_HPP */
