#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_empty_list.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_LIST_PLUS (mmf,(34,(^^,(!,BOOST_PP_NIL)))) 456
  #define PLUS_ALIST yyt (j,(ii%,BOOST_PP_NIL))
  #define JDATA ggh
  #define KDATA (a,(b,BOOST_PP_NIL)) name
  #define A_SEQ ((25,BOOST_PP_NIL))((26,BOOST_PP_NIL))((27,BOOST_PP_NIL))
  #define EMPTY_LIST BOOST_PP_NIL
  
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_LIST(anything));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_LIST(A_LIST_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_LIST(PLUS_ALIST));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_LIST(JDATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_LIST(KDATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_LIST(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_EMPTY_LIST(EMPTY_LIST));
  
#endif

  return boost::report_errors();
  
  }
