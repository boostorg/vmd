#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/begin_parens.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
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
  #define NOT_TUPLE y6()
  #define NOT_TUPLE2 &(kkkgg,(e))
  #define A_SEQ (r)($)(#)
  #define AN_ARRAY (4,(5,7,f,x))
  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS()));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(A_TUPLE)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(A_TUPLE2)));
  BOOST_TEST_EQ(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_PARENS(A_TUPLE_PLUS)),34);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(PLUS_ATUPLE)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(JDATA)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(NOT_TUPLE)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(NOT_TUPLE2)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(A_SEQ)));
  BOOST_TEST_EQ(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_BEGIN_PARENS(AN_ARRAY)),4);
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS(A_LIST)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_PARENS((y)2(x))));
  
#endif

  return boost::report_errors();
  
  }
