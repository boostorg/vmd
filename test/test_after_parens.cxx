#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/after_parens.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_TUPLE_PLUS (mmf,34,^^,!) 456
  #define PLUS_ATUPLE yyt (j,ii%)
  #define JDATA ggh
  #define KDATA (a,b) name
  #define A_SEQ (25)(26)(27)
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_PARENS(anything)));
  BOOST_TEST_EQ(BOOST_VMD_AFTER_PARENS(A_TUPLE_PLUS),456);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_PARENS(PLUS_ATUPLE)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_PARENS(JDATA)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_PARENS(KDATA)));
  BOOST_TEST_EQ(BOOST_PP_SEQ_ELEM(1,BOOST_VMD_AFTER_PARENS(A_SEQ)),BOOST_PP_SEQ_ELEM(2,A_SEQ));
  
#endif

  return boost::report_errors();
  
  }
