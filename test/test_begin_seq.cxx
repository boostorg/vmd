#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/seq.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_SEQ_PLUS (mmf)(34)(^^)(!) 456
  #define PLUS_ASEQ yyt (j)(ii%)
  #define JDATA ggh
  #define KDATA (a)(b) name
  #define A_SEQ (25)(26)(27)
  #define ATUPLE (0,1,2,3,((VMD_TEST_88_,VMD_TEST_1_))((VMD_TEST_99_,VMD_TEST_3_))((VMD_TEST_2_))((VMD_TEST_99_,VMD_TEST_100_,VMD_TEST_101_)))
  
#if !BOOST_VMD_MSVC_V8  

  #define AN_EMPTY_SEQ_PLUS () 16

#endif

  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ((x))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ((x)(y))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ((x)(y)(z)(2)(3)(4))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ((x)(y)(z)((1,2))(3)(4))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ((x)(y)(z)((1,2))(3)((4,(x,BOOST_PP_NIL))))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ((x)(y)((x)(y)(z)(2)(3)(4))((1,2))(3)((4,(x,BOOST_PP_NIL))))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ(BOOST_PP_TUPLE_ELEM(4,ATUPLE))));
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ(anything)));
  BOOST_TEST_EQ(BOOST_PP_SEQ_ELEM(1,BOOST_VMD_BEGIN_SEQ(A_SEQ_PLUS)),34);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ(PLUS_ASEQ)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_SEQ(JDATA)));
  BOOST_TEST_EQ(BOOST_PP_SEQ_ELEM(0,BOOST_VMD_BEGIN_SEQ(A_SEQ)),25);
  
#if !BOOST_VMD_MSVC_V8  

  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_SEQ_ELEM(0,BOOST_VMD_BEGIN_SEQ(AN_EMPTY_SEQ_PLUS))));
  
#endif

#endif

  return boost::report_errors();
  
  }
