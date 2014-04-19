#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/array.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define AN_ARRAY (7,(5,7,f,x,%,$,U))
  #define AN_EMPTY_ARRAY (0,)
  
  BOOST_VMD_ASSERT_IS_ARRAY((4,(x,3,e,2)))
  BOOST_VMD_ASSERT_IS_ARRAY((6,(x,3,e,2,(4,(x,3,e,2)),$)))
  BOOST_VMD_ASSERT_IS_ARRAY(AN_ARRAY)
  BOOST_VMD_ASSERT_IS_ARRAY(AN_EMPTY_ARRAY)
  
#endif

  return boost::report_errors();
  
  }
