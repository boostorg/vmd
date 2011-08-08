#include <boost/variadic_macro_data/vmd_assert_is_list.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS && BOOST_VMD_ASSERT_DATA
  
  BOOST_VMD_ASSERT_IS_LIST((tt,(5,(uu,BOOST_PP_NIL yy))))
  
#else

  typedef char BOOST_VMD_ASSERT_IS_LIST_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
