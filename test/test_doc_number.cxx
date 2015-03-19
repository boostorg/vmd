#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_number.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
 
 BOOST_TEST(BOOST_VMD_IS_NUMBER(0));
 BOOST_TEST(BOOST_VMD_IS_NUMBER(44));
 BOOST_TEST(!BOOST_VMD_IS_NUMBER(SQUARE));
 BOOST_TEST(!BOOST_VMD_IS_NUMBER(44 DATA));
 BOOST_TEST(!BOOST_VMD_IS_NUMBER(044));
 BOOST_TEST(BOOST_VMD_IS_NUMBER(256));
 BOOST_TEST(!BOOST_VMD_IS_NUMBER(257));
 BOOST_TEST(!BOOST_VMD_IS_NUMBER(245e2));
 BOOST_TEST(!BOOST_VMD_IS_NUMBER((44)));
 
#endif

  return boost::report_errors();
  
  }
