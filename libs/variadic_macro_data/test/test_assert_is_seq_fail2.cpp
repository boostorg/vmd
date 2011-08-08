#include <boost/variadic_macro_data/vmd_assert_is_seq.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_SEQ((y)2(x))
  
#else

  typedef char BOOST_VMD_ASSERT_IS_SEQ_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
