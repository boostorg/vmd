#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/seq/assert_is_seq.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS && BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_SEQ((y)2(x))
  
#else

  typedef char BOOST_VMD_ASSERT_IS_SEQ_ERROR[-1];
   
#endif

  return boost::report_errors();
  
  }
