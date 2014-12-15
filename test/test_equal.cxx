#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/generic/equal.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_ggh (ggh)
  #define BOOST_VMD_DETECT_ggh_ggh
  #define BOOST_VMD_REGISTER_dvd (dvd)
  #define BOOST_VMD_DETECT_dvd_dvd
  
  #define ANIDENTIFIER ggh
  #define ANIDENTIFIER2 dvd
  #define ANUMBER 249
  #define ANUMBER2 17
  #define ASEQ (25)(26)(27)
  #define ASEQ2 (1)(2)(3)
  #define ATUPLE (0,1,2,3,((a,b))((c,d))((e))((f,g,h)))
  #define ALIST (0,(1,(2,(3,BOOST_PP_NIL))))
  #define ANARRAY (3,(a,b,38))
  #define ASEQUENCE ANUMBER ALIST ATUPLE ANIDENTIFIER ANARRAY ASEQ
  #define ASEQUENCE2 ANIDENTIFIER2 ASEQ ALIST ANUMBER ATUPLE
  #define ASEQUENCE3 ASEQ ANUMBER2 ATUPLE
  #define ASEQUENCE4
  
  BOOST_TEST(BOOST_VMD_EQUAL(ANUMBER,249));
  BOOST_TEST(BOOST_VMD_EQUAL(ANUMBER2,17));
  BOOST_TEST(BOOST_VMD_EQUAL(ANIDENTIFIER,ggh));
  BOOST_TEST(BOOST_VMD_EQUAL(ANIDENTIFIER2,dvd));
  BOOST_TEST(BOOST_VMD_EQUAL(ASEQUENCE4,));
  BOOST_TEST(!BOOST_VMD_EQUAL(ASEQUENCE4,ASEQ));
  BOOST_TEST(!BOOST_VMD_EQUAL(ASEQ,ASEQ2));
  BOOST_TEST(!BOOST_VMD_EQUAL(ASEQ,22));

#endif

  return boost::report_errors();
  
  }
