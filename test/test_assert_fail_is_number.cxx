#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/number/is_number.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/list/at.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_LIST (eeb,(grist,(152,BOOST_PP_NIL)))
  
  BOOST_VMD_ASSERT(BOOST_VMD_IS_NUMBER(BOOST_PP_LIST_AT(A_LIST,1)),BOOST_VMD_TEST_FAIL_IS_NUMBER)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_IS_NUMBER[-1];
  
#endif

  return boost::report_errors();
  
  }
