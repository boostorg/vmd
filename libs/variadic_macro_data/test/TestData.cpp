#include <boost/variadic_macro_data/VariadicMacroData.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <vector>
#include <boost/type_traits/is_same.hpp>
#include <boost/preprocessor/arithmetic/inc.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  #define VMD_TEST_THE_DATA 657,1298,the,*,we99,33,++,jjgg,+=
  
  int mSize(VMD_DATA_SIZE(VMD_TEST_THE_DATA));

  BOOST_TEST_EQ(mSize,9);
  
  mSize VMD_DATA_ELEM(8,VMD_TEST_THE_DATA) 5;
  
  BOOST_TEST_EQ(mSize,14);
  
  int aSize(VMD_DATA_SIZE(23,ll,678,456));
  
  BOOST_TEST_EQ(aSize,4);
  
  aSize += mSize VMD_DATA_ELEM(3,VMD_TEST_THE_DATA) VMD_DATA_SIZE(VMD_TEST_THE_DATA);
  
  BOOST_TEST_EQ(aSize,130);
  
  BOOST_TEST_EQ(BOOST_PP_INC(VMD_DATA_ELEM(5,VMD_TEST_THE_DATA)),34);
  
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
