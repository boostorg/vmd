#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_ARRAY (3,(*,#,zz))
  #define A_ARRAY2 (3,(*,#,(zz,44,(e7))))
  #define A_ARRAY_PLUS (4,(mmf,34,^^,!)) 456
  #define PLUS_AARRAY yyt (2,(j,ii%))
  #define JDATA ggh 
  #define NOT_ARRAY y6()
  #define NOT_ARRAY2 &(2,(kkkgg,(e)))
  #define A_SEQ (r)($)(#)
  #define AN_ARRAY (4,(5,7,f,x))
  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
#if !BOOST_VMD_MSVC_V8  
  #define AN_EMPTY_ARRAY (0,()) data
#endif
  
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY());
  BOOST_TEST(BOOST_VMD_IS_BEGIN_ARRAY(A_ARRAY));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_ARRAY(A_ARRAY2));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_ARRAY(A_ARRAY_PLUS));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY(PLUS_AARRAY));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY(JDATA));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY(NOT_ARRAY));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY(NOT_ARRAY2));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY(A_SEQ));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_ARRAY(AN_ARRAY));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY(A_LIST));
  BOOST_TEST(BOOST_VMD_IS_BEGIN_ARRAY((1,(y))2(x)));
  BOOST_TEST(!BOOST_VMD_IS_BEGIN_ARRAY((2,(y))2(x)));
#if !BOOST_VMD_MSVC_V8  
  BOOST_TEST(BOOST_VMD_IS_BEGIN_ARRAY(AN_EMPTY_ARRAY));
#endif
  
#endif

  return boost::report_errors();
  
  }
