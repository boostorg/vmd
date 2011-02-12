#include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <vector>
#include <string>
#include <boost/type_traits/is_same.hpp>
#include <boost/type_traits/is_const.hpp>
#include <boost/preprocessor/arithmetic/inc.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control.hpp>
#include <boost/preprocessor/comparison/less.hpp>
#include <boost/preprocessor/logical/and.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/selection/max.hpp>
#include <boost/preprocessor/stringize.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  #define VMD_TEST_THE_DATA 147,12,the,*,we99,33,++,jjgg,+=,0,1
  
  int mSize(BOOST_VMD_DATA_SIZE(VMD_TEST_THE_DATA));

  BOOST_TEST_EQ(mSize,11);
  
  mSize BOOST_VMD_DATA_ELEM(8,VMD_TEST_THE_DATA) 5;
  
  BOOST_TEST_EQ(mSize,16);
  
  int aSize(BOOST_VMD_DATA_SIZE(23,ll,678,456));
  
  BOOST_TEST_EQ(aSize,4);
  
  aSize += mSize BOOST_VMD_DATA_ELEM(3,VMD_TEST_THE_DATA) BOOST_VMD_DATA_SIZE(VMD_TEST_THE_DATA);
  
  BOOST_TEST_EQ(aSize,4 + (16 * 11));
  
  BOOST_TEST_EQ(BOOST_PP_INC(BOOST_VMD_DATA_ELEM(5,VMD_TEST_THE_DATA)),34);
  
  aSize BOOST_PP_CAT(BOOST_VMD_DATA_ELEM(3,VMD_TEST_THE_DATA),=) BOOST_VMD_DATA_ELEM(1,VMD_TEST_THE_DATA);
  
  BOOST_TEST_EQ(aSize,(4 + (16 * 11)) * 12);
  
  int anElement(BOOST_VMD_DATA_ELEM(2,23,ll,678,456));
  
  BOOST_TEST_EQ(anElement,678);
  
  BOOST_TEST_EQ(BOOST_PP_LESS(BOOST_VMD_DATA_SIZE(VMD_TEST_THE_DATA),12),1);
  
  typedef BOOST_PP_EXPR_IF(BOOST_VMD_DATA_ELEM(9,VMD_TEST_THE_DATA),const) int AnIntType;
  
  BOOST_TEST(!(boost::is_const<AnIntType>::value));
  
  typedef BOOST_PP_EXPR_IIF(BOOST_VMD_DATA_ELEM(10,VMD_TEST_THE_DATA),const) int AnotherIntType;
  
  BOOST_TEST(boost::is_const<AnotherIntType>::value);
  
  BOOST_TEST_EQ(BOOST_PP_IF(BOOST_VMD_DATA_ELEM(5,VMD_TEST_THE_DATA),10,20),10);

  BOOST_TEST_EQ(BOOST_PP_IIF(BOOST_VMD_DATA_ELEM(9,VMD_TEST_THE_DATA),10,20),20);
  
  bool tb(BOOST_PP_AND(BOOST_VMD_DATA_ELEM(9,VMD_TEST_THE_DATA),BOOST_VMD_DATA_ELEM(1,VMD_TEST_THE_DATA)));
  
  BOOST_TEST_EQ(tb,false);
  
  tb = BOOST_PP_BITOR(BOOST_VMD_DATA_ELEM(10,VMD_TEST_THE_DATA),BOOST_VMD_DATA_ELEM(10,VMD_TEST_THE_DATA));
  
  BOOST_TEST_EQ(tb,true);
  
  BOOST_TEST_EQ(BOOST_PP_MAX(BOOST_VMD_DATA_ELEM(1,VMD_TEST_THE_DATA),BOOST_VMD_DATA_SIZE(VMD_TEST_THE_DATA)),12);
  
  std::string ss(BOOST_PP_STRINGIZE(BOOST_VMD_DATA_ELEM(4,VMD_TEST_THE_DATA)));
  std::string ss2("we99");
  
  BOOST_TEST(ss == ss2);
  
  #define VMD_TEST_EXPAND(...) int,__VA_ARGS__
  
  int numberOfTypes(BOOST_VMD_DATA_SIZE(VMD_TEST_EXPAND(unsigned,long,short,unsigned long)));
  
  BOOST_TEST_EQ(numberOfTypes,5);
  
  typedef std::vector<BOOST_VMD_DATA_ELEM(0,VMD_TEST_EXPAND(unsigned,long,short,unsigned long))>::value_type vtype;
  
  BOOST_TEST((boost::is_same<vtype,int>::value));
  
#endif

  return boost::report_errors();
  
  }
