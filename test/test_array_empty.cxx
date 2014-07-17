#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY_PLUS (4,(mmf,34,^^,!)) 456
  #define PLUS_ANARRAY yyt (2,(j,ii%))
  #define JDATA ggh
  #define KDATA (2,(a,b)) name
  #define A_SEQ ((1,(25)))((1,(26)))((1,(27)))
  #define AN_EMPTY_ARRAY_PLUS (0,()) 46
  #define EMPTY_ARRAY_INVALID ("string",() xx)
  #define EMPTY_ARRAY (0,())
  
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(anything));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(AN_ARRAY_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(PLUS_ANARRAY));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(JDATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(KDATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(A_SEQ));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(AN_EMPTY_ARRAY_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_ARRAY(EMPTY_ARRAY_INVALID));
  BOOST_TEST(BOOST_VMD_IS_EMPTY_ARRAY(EMPTY_ARRAY));
  
#endif

  return boost::report_errors();
  
  }
