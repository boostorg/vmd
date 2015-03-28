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

  #define ATYPE BOOST_VMD_TYPE_TUPLE
  #define ATYPE2 BOOST_VMD_TYPE_NUMBER
  #define ATYPE3 BOOST_VMD_TYPE_TUPLE
  
  BOOST_TEST(BOOST_VMD_EQUAL(ATYPE,ATYPE3));
  BOOST_TEST(BOOST_VMD_NOT_EQUAL(ATYPE,ATYPE2));
  
#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
