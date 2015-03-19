#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_identifier.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
 
 #define BOOST_VMD_REGISTER_yellow (yellow)
 #define BOOST_VMD_REGISTER_green  (green)
 #define BOOST_VMD_REGISTER_blue   (blue)
 
 BOOST_TEST(BOOST_VMD_IS_IDENTIFIER(yellow));
 BOOST_TEST(BOOST_VMD_IS_IDENTIFIER(green));
 BOOST_TEST(BOOST_VMD_IS_IDENTIFIER(blue));
 BOOST_TEST(!BOOST_VMD_IS_IDENTIFIER(purple));

#endif

  return boost::report_errors();
  
  }
