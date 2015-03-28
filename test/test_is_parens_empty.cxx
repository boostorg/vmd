#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_parens_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define DATA () * 4
  #define DATA2 4 * ()
  #define DATA3 (X)
  #define DATA4 ()
  #define DATA5 (   )
  
  BOOST_TEST(!BOOST_VMD_IS_PARENS_EMPTY(DATA));
  BOOST_TEST(!BOOST_VMD_IS_PARENS_EMPTY(DATA2));
  BOOST_TEST(!BOOST_VMD_IS_PARENS_EMPTY(DATA3));
  BOOST_TEST(BOOST_VMD_IS_PARENS_EMPTY(DATA4));
  BOOST_TEST(BOOST_VMD_IS_PARENS_EMPTY(DATA5));
  
#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
