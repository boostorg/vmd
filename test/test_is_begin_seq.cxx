#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/seq.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  
  #define A_SEQ (r)($)(#)
  #define A_SEQ2 ((#,%,&))((hot,cold))(3)
  #define A_SEQ_PLUS (mmf)(34)(^^)(!) 456
  #define PLUS_ASEQ yyt (j)(ii%)
  #define JDATA ggh 
  #define KDATA (a)(b) name
  #define NOT_SEQ y6(e)
  #define NOT_SEQ2 &(kkkgg)(f)
  #define AN_ARRAY (4,(5,7,f,x))
  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ());
  BOOST_TEST(BOOST_VMD_IS_BEGIN_SEQ(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_SEQ(A_SEQ2));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_SEQ(A_SEQ_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ(PLUS_ASEQ));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ(JDATA));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_SEQ(KDATA));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ(NOT_SEQ));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ(NOT_SEQ2));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ(AN_ARRAY));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_SEQ(A_LIST));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_SEQ((y)2(x)));
  
#endif

  return boost::report_errors();
  
  }
