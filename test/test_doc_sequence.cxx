#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/equal.hpp>
#include <boost/vmd/get_type.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_multi.hpp>
#include <boost/vmd/is_unary.hpp>
#include <boost/vmd/size.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
 
 #define AN_EMPTY_SEQUENCE
 
 BOOST_TEST(BOOST_VMD_IS_EMPTY(AN_EMPTY_SEQUENCE));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_TYPE_EMPTY,BOOST_VMD_GET_TYPE(AN_EMPTY_SEQUENCE)));
 
 #define A_SINGLE_ELEMENT_SEQUENCE (1,2)
 
 BOOST_TEST(BOOST_VMD_IS_UNARY(A_SINGLE_ELEMENT_SEQUENCE));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_TYPE_TUPLE,BOOST_VMD_GET_TYPE(A_SINGLE_ELEMENT_SEQUENCE)));
 
 #define A_MULTI_ELEMENT_SEQUENCE (1,2) (1)(2) 45
 
 BOOST_TEST(BOOST_VMD_IS_MULTI(A_MULTI_ELEMENT_SEQUENCE));
 BOOST_TEST(BOOST_VMD_EQUAL(BOOST_VMD_TYPE_SEQUENCE,BOOST_VMD_GET_TYPE(A_MULTI_ELEMENT_SEQUENCE)));
 
 BOOST_TEST_EQ(BOOST_VMD_SIZE(AN_EMPTY_SEQUENCE),0);
 BOOST_TEST_EQ(BOOST_VMD_SIZE(A_SINGLE_ELEMENT_SEQUENCE),1);
 BOOST_TEST_EQ(BOOST_VMD_SIZE(A_MULTI_ELEMENT_SEQUENCE),3);
 
#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
