#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/equal.hpp>
#include <boost/vmd/not_equal.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
  
  #define BOOST_VMD_REGISTER_aaa (aaa)
  #define BOOST_VMD_REGISTER_bbb (bbb)
  #define BOOST_VMD_REGISTER_ccc (ccc)
  #define BOOST_VMD_REGISTER_ddd (ddd)
  #define BOOST_VMD_REGISTER_ggh (ggh)
  #define BOOST_VMD_REGISTER_dvd (dvd)
  #define BOOST_VMD_DETECT_aaa_aaa
  #define BOOST_VMD_DETECT_bbb_bbb
  #define BOOST_VMD_DETECT_ccc_ccc
  #define BOOST_VMD_DETECT_ddd_ddd
  #define BOOST_VMD_DETECT_ggh_ggh
  #define BOOST_VMD_DETECT_dvd_dvd
  
  BOOST_TEST(BOOST_VMD_EQUAL(aaa,aaa,BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_EQUAL(ddd,ddd,BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ggg,dvd,BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(bbb,ccc,BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(eee,eee,BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL((1,2),(1,2),BOOST_VMD_TYPE_IDENTIFIER));
  
#endif

  return boost::report_errors();
  
  }
