#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_type.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
 
 BOOST_TEST(BOOST_VMD_IS_TYPE(BOOST_VMD_TYPE_SEQ));
 BOOST_TEST(BOOST_VMD_IS_TYPE(BOOST_VMD_TYPE_NUMBER));
 BOOST_TEST(!BOOST_VMD_IS_TYPE(SQUARE));
 BOOST_TEST(!BOOST_VMD_IS_TYPE(BOOST_VMD_TYPE_IDENTIFIER DATA));
 BOOST_TEST(!BOOST_VMD_IS_TYPE(( BOOST_VMD_TYPE_EMPTY )));
 
#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
