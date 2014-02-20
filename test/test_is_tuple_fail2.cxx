#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/is_tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  BOOST_TEST(BOOST_VMD_IS_TUPLE(op(x,3,e,2)));
  
#else

  BOOST_ERROR("No variadic macro support");
   
#endif

  return boost::report_errors();
  
  }
