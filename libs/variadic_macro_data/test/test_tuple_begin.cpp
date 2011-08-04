#include <boost/variadic_macro_data/vmd_is_tuple_begin.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS

  #define A_TUPLE (*,#,zz)
  #define A_TUPLE2 (*,#,(zz,44,(e7)))
  #define A_TUPLE_PLUS (mmf,34,^^,!) 456
  #define PLUS_ATUPLE yyt (j,ii%)
  #define JDATA ggh 
  #define NOT_TUPLE y6()
  #define NOT_TUPLE2 &(kkkgg,(e))
  #define A_SEQ (r)($)(#)
  #define AN_ARRAY (4,(5,7,f,x))
  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  
  BOOST_TEST(BOOST_VMD_IS_TUPLE_BEGIN(A_TUPLE));
  BOOST_TEST(BOOST_VMD_IS_TUPLE_BEGIN(A_TUPLE2));
  BOOST_TEST(BOOST_VMD_IS_TUPLE_BEGIN(A_TUPLE_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE_BEGIN(PLUS_ATUPLE));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE_BEGIN(JDATA));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE_BEGIN(NOT_TUPLE));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE_BEGIN(NOT_TUPLE2));
  BOOST_TEST(BOOST_VMD_IS_TUPLE_BEGIN(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_TUPLE_BEGIN(AN_ARRAY));
  BOOST_TEST(BOOST_VMD_IS_TUPLE_BEGIN(A_LIST));
  
#endif

  return boost::report_errors();
  
  }
