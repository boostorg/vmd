#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_TUPLE(x,3,e,2)
  
#else

  typedef char BOOST_VMD_ASSERT_IS_TUPLE_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
