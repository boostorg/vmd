#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/seq/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY_PLUS (4,(mmf,34,^^,!)) 456
  #define PLUS_ANARRAY yyt (2,(j,ii%))
  #define JDATA ggh
  #define KDATA (2,(a,b)) name
  #define A_SEQ ((1,(25)) 7)((1,(26)) 8)((1,(27)) 9)
  #define AN_EMPTY_ARRAY_PLUS (0,()) 46
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_ARRAY(anything)));
  BOOST_TEST_EQ(BOOST_VMD_AFTER_ARRAY(AN_ARRAY_PLUS),456);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_ARRAY(PLUS_ANARRAY)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_ARRAY(JDATA)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_ARRAY(KDATA)));
  BOOST_TEST_EQ(BOOST_VMD_AFTER_ARRAY(BOOST_PP_SEQ_ELEM(1,A_SEQ)),8);
  BOOST_TEST_EQ(BOOST_VMD_AFTER_ARRAY(AN_EMPTY_ARRAY_PLUS),46);
  
#endif

  return boost::report_errors();
  
  }
