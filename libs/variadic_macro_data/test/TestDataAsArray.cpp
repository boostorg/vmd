#include <boost/variadic_macro_data/VariadicMacroData.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/array/size.hpp>
#include <boost/preprocessor/array/elem.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <vector>
#include <boost/type_traits/is_same.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  #define VMD_TEST_ARRAY_NUMBERS \
    VMD_DATA_TO_PP_ARRAY(47,69,23,985,458,77,12457,89,99872) \
  /**/
  
  #define VMD_TEST_ARRAY_TYPES(...) \
    VMD_DATA_TO_PP_ARRAY(int,__VA_ARGS__) \
  /**/
  
  int addedNumber(0);
  
  #define VMD_TEST_ADD_TO_INT(z,n,data) \
    if (BOOST_PP_ARRAY_SIZE(data) > n) \
      { \
      addedNumber += BOOST_PP_ARRAY_ELEM(n,data); \
      } \
  /**/
  
  BOOST_PP_REPEAT(BOOST_PP_ARRAY_SIZE(VMD_TEST_ARRAY_NUMBERS),VMD_TEST_ADD_TO_INT,VMD_TEST_ARRAY_NUMBERS)
  
  addedNumber += VMD_DATA_ELEMENT(5,VMD_PP_ARRAY_TO_DATA(VMD_TEST_ARRAY_NUMBERS));
  
  BOOST_TEST_EQ(addedNumber,47+69+23+985+458+77+12457+89+99872+77);
  
  int numberOfTypes(BOOST_PP_ARRAY_SIZE(VMD_TEST_ARRAY_TYPES(unsigned,long,short,unsigned long,double,float)));
  
  BOOST_TEST_EQ(numberOfTypes,7);
  
  typedef std::vector<BOOST_PP_ARRAY_ELEM(4,VMD_TEST_ARRAY_TYPES(unsigned,long,short,unsigned long,double,float))>::value_type vtype;
  
  BOOST_TEST((boost::is_same<vtype,unsigned long>::value));
  
#endif
  
  return boost::report_errors();
  
  }
