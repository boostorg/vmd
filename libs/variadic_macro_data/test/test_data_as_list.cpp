#include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>
#include <boost/preprocessor/list/size.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <vector>
#include <boost/type_traits/is_same.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  #define VMD_TEST_LIST_NUMBERS \
    BOOST_VMD_DATA_TO_PP_LIST(34,23467,12,9984,34,678,7890,1235678,3489,1,8965,345) \
  /**/
  
  #define VMD_TEST_LIST_TYPES(...) \
    BOOST_VMD_DATA_TO_PP_LIST(unsigned char,__VA_ARGS__) \
  /**/
  
  int addedNumber(0);
  
  #define VMD_TEST_ADD_TO_INT(z,n,data) \
    if (BOOST_PP_LIST_SIZE(data) > n) \
      { \
      addedNumber += BOOST_PP_LIST_AT(data,n); \
      } \
  /**/
  
#if defined(BOOST_MSVC)
  
#pragma warning( push )
#pragma warning( disable : 4127 )
  
#endif

  BOOST_PP_REPEAT(BOOST_PP_LIST_SIZE(VMD_TEST_LIST_NUMBERS),VMD_TEST_ADD_TO_INT,VMD_TEST_LIST_NUMBERS)
  
#if defined(BOOST_MSVC)
  
#pragma warning( pop )  
  
#endif

  addedNumber += BOOST_VMD_DATA_ELEM(8,BOOST_VMD_PP_LIST_TO_DATA(VMD_TEST_LIST_NUMBERS));
  
  BOOST_TEST_EQ(addedNumber,34+23467+12+9984+34+678+7890+1235678+3489+1+8965+345+3489);
  
  int numberOfTypes(BOOST_PP_LIST_SIZE(VMD_TEST_LIST_TYPES(unsigned short,unsigned,long,short,unsigned long,double,float,char)));
  
  BOOST_TEST_EQ(numberOfTypes,9);
  
  typedef std::vector<BOOST_PP_LIST_AT(VMD_TEST_LIST_TYPES(unsigned short,unsigned,long,short,unsigned long,double,float,char),3)>::value_type vtype;
  
  BOOST_TEST((boost::is_same<vtype,long>::value));
  
#endif

  return boost::report_errors();
  
  }
