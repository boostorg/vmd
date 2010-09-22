#include <boost/variadic_macro_data/VariadicMacroData.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/rem.hpp>
#include <vector>
#include <boost/type_traits/is_same.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  #define VMD_TEST_TUPLE_NUMBERS \
    VMD_DATA_TO_PP_TUPLE(23,45,147,6,7743,12,67,43,89045,82) \
  /**/
  
  #define VMD_TEST_TUPLE_NUMBERS2 \
    VMD_DATA_TO_PP_TUPLE(23,45,147,6,7743) \
  /**/
  
  #define VMD_TEST_TUPLE_NUMBERS3 \
    VMD_DATA_TO_PP_TUPLE(23,45,147,6,7743,12,67,43,89045,82,8743,11) \
  /**/
  
  #define VMD_TEST_TUPLE_TYPES(...) \
    VMD_DATA_TO_PP_TUPLE(int,__VA_ARGS__) \
  /**/
  
  int addedNumber(0);
  
  #define VMD_TEST_ADD_TO_INT(z,n,data) \
    if (VMD_PP_TUPLE_SIZE(data) > n) \
      { \
      addedNumber += VMD_PP_TUPLE_ELEM(n,VMD_PP_TUPLE_REVERSE(data)); \
      } \
  /**/
  
  VMD_PP_REPEAT_TUPLE(VMD_TEST_ADD_TO_INT,VMD_TEST_TUPLE_NUMBERS)
  
  addedNumber += VMD_DATA_ELEMENT(5,VMD_PP_TUPLE_TO_DATA(VMD_TEST_TUPLE_NUMBERS));
  addedNumber += VMD_DATA_ELEMENT(3,VMD_PP_TUPLE_REM(VMD_PP_TUPLE_SIZE(VMD_TEST_TUPLE_NUMBERS))(23,45,147,6,7743,12,67,43,89045,82));
  addedNumber += VMD_DATA_ELEMENT(4,VMD_PP_TUPLE_REM_CTOR(VMD_TEST_TUPLE_NUMBERS));
  
  VMD_PP_TUPLE_EAT(VMD_PP_TUPLE_SIZE(VMD_TEST_TUPLE_NUMBERS))(23,45,147,6,7743,12,67,43,89045,82)
  
  BOOST_TEST_EQ(addedNumber,23+45+147+6+7743+12+67+43+89045+82+12+6+7743);
  
  int listSize(BOOST_PP_LIST_SIZE(VMD_PP_TUPLE_TO_LIST(VMD_TEST_TUPLE_NUMBERS2)));
  
  BOOST_TEST_EQ(listSize,5);
  
  int seqSize(BOOST_PP_SEQ_SIZE(VMD_PP_TUPLE_TO_SEQ(VMD_TEST_TUPLE_NUMBERS3)));
  
  BOOST_TEST_EQ(seqSize,12);
  
  int numberOfTypes(VMD_PP_TUPLE_SIZE(VMD_TEST_TUPLE_TYPES(unsigned,long,short,unsigned long,double,float)));
  
  BOOST_TEST_EQ(numberOfTypes,7);
  
  typedef std::vector<VMD_PP_TUPLE_ELEM(5,VMD_TEST_TUPLE_TYPES(unsigned,long,short,unsigned long,double,float))>::value_type vtype;
  
  BOOST_TEST((boost::is_same<vtype,double>::value));
  
#endif
  
  return boost::report_errors();
  
  }
