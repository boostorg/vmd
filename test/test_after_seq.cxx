#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/seq.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_SEQ_PLUS (mmf)(34)(^^)(!) 456
  #define PLUS_ASEQ yyt (j)(ii%)
  #define JDATA ggh
  #define KDATA (a)(b) name
  #define A_SEQ (25)(26)(27) 33
  #define ATUPLE (0,1,2,3,((VMD_TEST_88_,VMD_TEST_1_))((VMD_TEST_99_,VMD_TEST_3_))((VMD_TEST_2_))((VMD_TEST_99_,VMD_TEST_100_,VMD_TEST_101_)) gene)

  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ(anything)));
  BOOST_TEST_EQ(BOOST_VMD_AFTER_SEQ(A_SEQ_PLUS),456);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ(PLUS_ASEQ)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ(JDATA)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ(KDATA)));
  BOOST_TEST_EQ(BOOST_VMD_AFTER_SEQ(A_SEQ),33);
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ(BOOST_PP_TUPLE_ELEM(4,ATUPLE))));
  
#endif

  return boost::report_errors();
  
  }
