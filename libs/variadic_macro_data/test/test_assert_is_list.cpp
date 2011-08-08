#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/variadic_macro_data/vmd.hpp>
#else
#include <boost/variadic_macro_data/vmd_assert_is_list.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS

  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  
  BOOST_VMD_ASSERT_IS_LIST((4,(x,BOOST_PP_NIL)))
  BOOST_VMD_ASSERT_IS_LIST(((3,6m,irj),(x,BOOST_PP_NIL)))
  BOOST_VMD_ASSERT_IS_LIST(A_LIST)

#endif

  return boost::report_errors();
  
  }
