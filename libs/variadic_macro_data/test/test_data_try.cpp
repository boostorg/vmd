#include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/arithmetic/add.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  int number(BOOST_PP_ADD(BOOST_VMD_DATA_SIZE(3,7,45),0));
  
  BOOST_TEST_EQ(number,3);
  
  number = BOOST_PP_CAT(6,BOOST_VMD_DATA_SIZE(3,7,45));

  BOOST_TEST_EQ(number,63);
  
  number = BOOST_PP_CAT(6,BOOST_PP_EMPTY());
  
  BOOST_TEST_EQ(number,6);
  
#endif

  return boost::report_errors();
  
  }
