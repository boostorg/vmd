#include <boost/variadic_macro_data/vmd_assert_is_tuple.hpp>
// #include <boost/variadic_macro_data/vmd.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS

  #define A_TUPLE (*,#,zz)
  #define A_TUPLE2 (*,#,(zz,44,(e7)))
  #define AN_ARRAY (4,(5,7,f,x))
  #define A_LIST (e,(g,(&,BOOST_PP_NIL)))
  
  BOOST_VMD_ASSERT_IS_TUPLE((t,3,e,2))
  BOOST_VMD_ASSERT_IS_TUPLE(((y,s,w),3,e,2))
  BOOST_VMD_ASSERT_IS_TUPLE(A_TUPLE)
  BOOST_VMD_ASSERT_IS_TUPLE(A_TUPLE2)
  BOOST_VMD_ASSERT_IS_TUPLE(AN_ARRAY)
  BOOST_VMD_ASSERT_IS_TUPLE(A_LIST)
  
#endif

  return boost::report_errors();
  
  }
