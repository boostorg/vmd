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
  
  #define ANUMBER 249
  #define ANUMBER2 17
  #define ANUMBER3 249
  #define ASEQ (22)(33)
  #define ASEQ2 (22)(33)
  
  BOOST_TEST(BOOST_VMD_EQUAL(ANUMBER,ANUMBER3,BOOST_VMD_TYPE_NUMBER));
  BOOST_TEST(BOOST_VMD_EQUAL(ANUMBER,ANUMBER3,BOOST_VMD_TYPE_IDENTIFIER));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ANUMBER,NUMBER2,BOOST_VMD_TYPE_NUMBER));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ASEQ,ASEQ2,BOOST_VMD_TYPE_NUMBER));
  
#endif

  return boost::report_errors();
  
  }
