#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_EMPTY(x BOOST_PP_EMPTY())
  
#else

  typedef char BOOST_VMD_IS_EMPTY_ERROR[-1];
   
#endif /* BOOST_PP_VARIADICS */

  return boost::report_errors();
  
  }
