#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_TUPLE (*,#,zz)
  #define A_TUPLE2 (*,#,(zz,44,(e7)))
  #define A_TUPLE_PLUS (mmf,34,^^,!) 456
  #define PLUS_ATUPLE yyt (j,ii%)
  #define JDATA ggh 
  #define KDATA (ggh)
  #define NOT_TUPLE y6()
  #define NOT_TUPLE2 &(kkkgg,(e))
  #define A_SEQ (r)($)(#)
  #define AN_ARRAY (4,(5,7,f,x))
  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  
  BOOST_TEST(!BOOST_VMD_IS_TUPLE());
  BOOST_TEST(BOOST_VMD_IS_TUPLE(A_TUPLE));
  BOOST_TEST(BOOST_VMD_IS_TUPLE(A_TUPLE2));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE(A_TUPLE_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE(PLUS_ATUPLE));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE(JDATA));
  BOOST_TEST(BOOST_VMD_IS_TUPLE(KDATA));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE(NOT_TUPLE));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE(NOT_TUPLE2));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_TUPLE(AN_ARRAY));
  BOOST_TEST(BOOST_VMD_IS_TUPLE(A_LIST));
  BOOST_TEST(!BOOST_VMD_IS_TUPLE((y)2(x)));
  
#endif

  return boost::report_errors();
  
  }
