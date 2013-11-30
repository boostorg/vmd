#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_number.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

#define A_TUPLE (4,241,zzz)
#define JDATA somevalue
#define KDATA 213
#define A_SEQ (num)(78)(42)
#define A_LIST (eeb,(grist,(152,BOOST_PP_NIL)))

BOOST_TEST(!BOOST_VMD_IS_NUMBER(BOOST_PP_TUPLE_ELEM(2,A_TUPLE)));
BOOST_TEST(BOOST_VMD_IS_NUMBER(BOOST_PP_TUPLE_ELEM(1,A_TUPLE)));
BOOST_TEST(!BOOST_VMD_IS_NUMBER(JDATA));
BOOST_TEST(BOOST_VMD_IS_NUMBER(KDATA));
BOOST_TEST(!BOOST_VMD_IS_NUMBER(BOOST_PP_SEQ_ELEM(0,A_SEQ)));
BOOST_TEST(BOOST_VMD_IS_NUMBER(BOOST_PP_SEQ_ELEM(2,A_SEQ)));
BOOST_TEST(!BOOST_VMD_IS_NUMBER(BOOST_PP_LIST_AT(A_LIST,0)));
BOOST_TEST(BOOST_VMD_IS_NUMBER(BOOST_PP_LIST_AT(A_LIST,2)));
BOOST_TEST(!BOOST_VMD_IS_NUMBER(BOOST_PP_LIST_AT(A_LIST,1)));
  
#endif

  return boost::report_errors();
  
  }
