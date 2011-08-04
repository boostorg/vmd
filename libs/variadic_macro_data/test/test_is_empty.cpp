#include <boost/variadic_macro_data/vmd_is_empty.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS

  #define DATA
  #define OBJECT OBJECT2
  #define OBJECT2
  #define FUNC(x) FUNC2(x)
  #define FUNC2(x)
  #define FUNC_GEN() ()
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY());
  BOOST_TEST(BOOST_VMD_IS_EMPTY(DATA));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY((x)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(OBJECT));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(FUNC(z)));
  
//  BOOST_TEST(BOOST_VMD_IS_EMPTY(FUNC_GEN));

#endif

  return boost::report_errors();
  
  }
