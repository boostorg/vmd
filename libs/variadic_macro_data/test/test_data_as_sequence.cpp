#include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/repetition/repeat.hpp>
#include <vector>
#include <boost/type_traits/is_same.hpp>

int main()
  {
  
#if !defined(BOOST_NO_VARIADIC_MACROS)

  #define VMD_TEST_SEQ_NUMBERS \
    BOOST_VMD_DATA_TO_PP_SEQ(4578,24,789436,78345,902,345,860,667433,56,727,47891) \
  /**/
  
  #define VMD_TEST_SEQ_TYPES(...) \
    BOOST_VMD_DATA_TO_PP_SEQ(bool,__VA_ARGS__) \
  /**/
  
  int addedNumber(0);
  
  #define VMD_TEST_ADD_TO_INT(z,n,data) \
    if (BOOST_PP_SEQ_SIZE(data) > n) \
      { \
      addedNumber += BOOST_PP_SEQ_ELEM(n,data); \
      } \
  /**/
  
#if defined(BOOST_MSVC)
  
#pragma warning( push )
#pragma warning( disable : 4127 )
  
#endif

  BOOST_PP_REPEAT(BOOST_PP_SEQ_SIZE(VMD_TEST_SEQ_NUMBERS),VMD_TEST_ADD_TO_INT,VMD_TEST_SEQ_NUMBERS)
  
#if defined(BOOST_MSVC)
  
#pragma warning( pop )  
  
#endif

  addedNumber += BOOST_VMD_DATA_ELEM(2,BOOST_VMD_PP_SEQ_TO_DATA(VMD_TEST_SEQ_NUMBERS));
  
  BOOST_TEST_EQ(addedNumber,4578+24+789436+78345+902+345+860+667433+56+727+47891+789436);
  
  int numberOfTypes(BOOST_PP_SEQ_SIZE(VMD_TEST_SEQ_TYPES(long,short,unsigned long,double,float)));
  
  BOOST_TEST_EQ(numberOfTypes,6);
  
  typedef std::vector<BOOST_PP_SEQ_ELEM(5,VMD_TEST_SEQ_TYPES(long,short,unsigned long,double,float))>::value_type vtype;
  
  BOOST_TEST((boost::is_same<vtype,float>::value));
  
#endif
  
  return boost::report_errors();
  
  }
