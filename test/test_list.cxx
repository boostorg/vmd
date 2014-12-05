#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/list/list.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  #define AN_EMPTY_LIST BOOST_PP_NIL
  #define AN_EMPTY_LIST_PLUS BOOST_PP_NIL ( here )
  
  BOOST_TEST_EQ(BOOST_PP_LIST_AT(BOOST_VMD_LIST((4,(x,BOOST_PP_NIL))),0),4);
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_LIST(((3,6m,irj),(x,BOOST_PP_NIL)))));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_LIST(A_LIST)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_LIST(AN_EMPTY_LIST)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_LIST(AN_EMPTY_LIST_PLUS)));

#endif

  return boost::report_errors();
  
  }
