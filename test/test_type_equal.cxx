#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/type/type_equal.hpp>
#include <boost/vmd/type/type_not_equal.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
  
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_TYPE_LIST,BOOST_VMD_TYPE_LIST));
  BOOST_TEST(BOOST_VMD_TYPE_EQUAL(BOOST_VMD_TYPE_SEQ,BOOST_VMD_TYPE_SEQ));
  BOOST_TEST(BOOST_VMD_TYPE_NOT_EQUAL(BOOST_VMD_TYPE_EMPTY,BOOST_VMD_TYPE_VSEQUENCE));
  BOOST_TEST(BOOST_VMD_TYPE_NOT_EQUAL(BOOST_VMD_TYPE_TUPLE,NOT_TYPE));
  BOOST_TEST(BOOST_VMD_TYPE_NOT_EQUAL(BOOST_VMD_TYPE_TYPE,(3)));
  
#endif

  return boost::report_errors();
  
  }
