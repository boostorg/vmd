#include <boost/variadic_macro_data/VariadicMacroData.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <vector>
#include <boost/type_traits/is_same.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  int aSize(VMD_DATA_SIZE(23,ll,678,456));
  
  BOOST_TEST_EQ(aSize,4);
  
  int anElement(VMD_DATA_ELEM(2,23,ll,678,456));
  
  BOOST_TEST_EQ(anElement,678);
  
  #define VMD_TEST_EXPAND(...) int,__VA_ARGS__
  
  int numberOfTypes(VMD_DATA_SIZE(VMD_TEST_EXPAND(unsigned,long,short,unsigned long)));
  
  BOOST_TEST_EQ(numberOfTypes,5);
  
  typedef std::vector<VMD_DATA_ELEM(0,VMD_TEST_EXPAND(unsigned,long,short,unsigned long))>::value_type vtype;
  
  BOOST_TEST((boost::is_same<vtype,int>::value));
  
#endif

  return boost::report_errors();
  
  }
