#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/variadic_macro_data/vmd.hpp>
#else
#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>


int main()
  {
  
#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_TUPLE((x,3,e,2)ty)
  
#else

  typedef char BOOST_VMD_ASSERT_IS_TUPLE_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
