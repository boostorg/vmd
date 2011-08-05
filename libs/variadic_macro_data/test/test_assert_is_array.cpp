#include <boost/variadic_macro_data/vmd_assert_is_array.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS

  #define AN_ARRAY (7,(5,7,f,x,%,$,U))
  
  BOOST_VMD_ASSERT_IS_ARRAY((4,(x,3,e,2)))
  BOOST_VMD_ASSERT_IS_ARRAY((6,(x,3,e,2,(4,(x,3,e,2)),$)))
  BOOST_VMD_ASSERT_IS_ARRAY(AN_ARRAY)
  
#endif

  return boost::report_errors();
  
  }
