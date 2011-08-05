#include <boost/variadic_macro_data/vmd_assert_is_array.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_ARRAY((3,(x,3,e,2)))
  
#else

  typedef char BOOST_VMD_ASSERT_IS_ARRAY_ERROR[-1]; \
   
#endif

  return boost::report_errors();
  
  }
