#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/list/is_begin_list.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  #define A_LIST2 (e,(g,((zz,44,(e7)),BOOST_PP_NIL)))
  #define A_LIST_PLUS (mmf,(34,(^^,(!,BOOST_PP_NIL)))) 456
  #define PLUS_ALIST yyt (j,(ii%,BOOST_PP_NIL))
  #define JDATA ggh 
  #define KDATA (a,(b,BOOST_PP_NIL)) name
  #define NOT_LIST y6(x,BOOST_PP_NIL)
  #define NOT_LIST2 44(^^,(!,BOOST_PP_NIL))
  #define A_SEQ (r)($)(#)
  #define AN_ARRAY (4,(5,7,f,x))
  
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST());
  BOOST_TEST(BOOST_VMD_IS_BEGIN_LIST(A_LIST));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_LIST(A_LIST2));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_LIST(A_LIST_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST(PLUS_ALIST));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST(JDATA));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_LIST(KDATA));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST(NOT_LIST));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST(NOT_LIST2));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST(AN_ARRAY));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_LIST(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_LIST((y,BOOST_PP_NIL)2(x)));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_LIST(BOOST_PP_NIL (go)));
  
#endif

  return boost::report_errors();
  
  }
