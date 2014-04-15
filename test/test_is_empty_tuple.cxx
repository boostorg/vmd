#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/if.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_TUPLE (*,#,zz)
  #define A_TUPLE2 (*,#,(zz,44,(e7)))
  #define A_TUPLE_PLUS (mmf,34,^^,!) 456
  #define PLUS_ATUPLE yyt (j,ii%)
  #define JDATA ggh 
  #define KDATA (ggh)
  #define NOT_TUPLE y6()
  #define NOT_TUPLE2 &(kkkgg,(e))
  #define A_SEQ (r)($)(#)
  #define A_MAC
  
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE());
  BOOST_TEST(BOOST_VMD_IS_EMPTY_TUPLE(()));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(A_TUPLE));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(A_TUPLE2));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(A_TUPLE_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(PLUS_ATUPLE));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(JDATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(KDATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(NOT_TUPLE));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(NOT_TUPLE2));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_EMPTY_TUPLE(( )));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY_TUPLE(()2(x)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY_TUPLE((A_MAC)));
  
#endif

  return boost::report_errors();
  
  }
