#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/list.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/seq/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_LIST_PLUS (mmf,(34,(^^,(!,BOOST_PP_NIL)))) 456
  #define PLUS_ALIST yyt (j,(ii%,BOOST_PP_NIL))
  #define JDATA ggh
  #define KDATA (a,(b,BOOST_PP_NIL)) name
  #define A_SEQ ((25,BOOST_PP_NIL))((26,BOOST_PP_NIL))((27,BOOST_PP_NIL))
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_LIST(anything)));
  BOOST_TEST_EQ(BOOST_PP_LIST_AT(BOOST_VMD_BEGIN_LIST(A_LIST_PLUS),1),34);
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_LIST(PLUS_ALIST)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_BEGIN_LIST(JDATA)));
  BOOST_TEST_EQ(BOOST_PP_LIST_AT(BOOST_VMD_BEGIN_LIST(BOOST_PP_SEQ_ELEM(1,A_SEQ)),0),26);
  
#endif

  return boost::report_errors();
  
  }
