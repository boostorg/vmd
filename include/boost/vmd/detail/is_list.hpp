#if !defined(BOOST_VMD_DETAIL_IS_LIST_HPP)
#define BOOST_VMD_DETAIL_IS_LIST_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/control/while.hpp>
#include <boost/preprocessor/debug/assert.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/vmd/gen_one.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/tuple.hpp>

#define BOOST_VMD_DETAIL_IS_LIST_PROCESS_TUPLE(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_TUPLE(x), \
      BOOST_VMD_DETAIL_IS_LIST_PROCESS_TUPLE_SIZE, \
      BOOST_VMD_DETAIL_IS_LIST_ASSERT \
      ) \
    (x) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_PROCESS_TUPLE_SIZE(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_EQUAL(2,BOOST_PP_TUPLE_SIZE(x)), \
      BOOST_VMD_DETAIL_IS_LIST_RETURN_SECOND, \
      BOOST_VMD_DETAIL_IS_LIST_ASSERT \
      ) \
    (x) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_PRED(d,state) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE(state), \
      BOOST_VMD_GEN_ONE, \
      BOOST_VMD_DETAIL_IS_LIST_NOT_BOOST_PP_NIL \
      ) \
    (state) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_OP(d,state) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_IS_BEGIN_TUPLE(state), \
      BOOST_VMD_DETAIL_IS_LIST_PROCESS_TUPLE, \
      BOOST_VMD_DETAIL_IS_LIST_PROCESS_IF_BOOST_PP_NIL \
      ) \
    (state) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_PROCESS_IF_BOOST_PP_NIL(x) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_IS_LIST_BOOST_PP_NIL(x), \
      BOOST_PP_NIL, \
      BOOST_VMD_IS_LIST_FAILURE \
      ) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_ASSERT(x) \
    BOOST_VMD_IS_LIST_FAILURE \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_NOT_BOOST_PP_NIL(x) \
    BOOST_PP_NOT \
      ( \
      BOOST_PP_BITOR \
        ( \
        BOOST_VMD_DETAIL_IS_LIST_BOOST_PP_NIL(x), \
        BOOST_VMD_DETAIL_IS_LIST_IS_FAILURE(x) \
        ) \
      ) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_BOOST_PP_NIL(x) \
    BOOST_VMD_IS_EMPTY \
      ( \
      BOOST_PP_CAT \
        ( \
        BOOST_VMD_DETAIL_IS_LIST_NIL_HELPER_, \
        x \
        ) BOOST_PP_EMPTY() \
      ) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_NIL_HELPER_BOOST_PP_NIL

#define BOOST_VMD_DETAIL_IS_LIST_IS_FAILURE(x) \
    BOOST_VMD_IS_EMPTY \
      ( \
      BOOST_PP_CAT(BOOST_VMD_DETAIL_IS_LIST_FHELPER_,x) BOOST_PP_EMPTY() \
      ) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_FHELPER_BOOST_VMD_IS_LIST_FAILURE

#define BOOST_VMD_DETAIL_IS_LIST_RETURN_SECOND(x) \
    BOOST_PP_TUPLE_ELEM(1,x) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_RESULT(x) \
	BOOST_PP_NOT \
    	( \
        BOOST_VMD_DETAIL_IS_LIST_IS_FAILURE(x) \
        ) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST(list) \
    BOOST_VMD_DETAIL_IS_LIST_RESULT \
      ( \
      BOOST_PP_WHILE \
        ( \
        BOOST_VMD_DETAIL_IS_LIST_PRED, \
        BOOST_VMD_DETAIL_IS_LIST_OP, \
        list \
        ) \
      ) \
/**/

#define BOOST_VMD_DETAIL_IS_LIST_D(d,list) \
    BOOST_VMD_DETAIL_IS_LIST_RESULT \
      ( \
      BOOST_PP_WHILE_ ## d \
        ( \
        BOOST_VMD_DETAIL_IS_LIST_PRED, \
        BOOST_VMD_DETAIL_IS_LIST_OP, \
        list \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_DETAIL_IS_LIST_HPP */
