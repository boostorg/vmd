#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/tuple/begin_tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define KDATA (a,b) name
  
  BOOST_VMD_ASSERT(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_BEGIN_TUPLE(KDATA,BOOST_VMD_RETURN_AFTER))),BOOST_VMD_TEST_FAIL_TUPLE)
  
#else
  
  typedef char BOOST_VMD_TEST_FAIL_TUPLE[-1];
  
#endif

  return boost::report_errors();
  
  }
