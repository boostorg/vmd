#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/seq.hpp>
#endif
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define ATUPLE (0,1,2,3,((VMD_TEST_88_,VMD_TEST_1_))((VMD_TEST_99_,VMD_TEST_3_))((VMD_TEST_2_))((VMD_TEST_99_,VMD_TEST_100_,VMD_TEST_101_)))
  
#if !BOOST_VMD_MSVC_V8  

  #define AN_EMPTY_SEQ ()

#endif

  BOOST_VMD_ASSERT_IS_SEQ((x))
  BOOST_VMD_ASSERT_IS_SEQ((x)(y))
  BOOST_VMD_ASSERT_IS_SEQ((x)(y)(z)(2)(3)(4))
  BOOST_VMD_ASSERT_IS_SEQ((x)(y)(z)((1,2))(3)(4))
  BOOST_VMD_ASSERT_IS_SEQ((x)(y)(z)((1,2))(3)((4,(x,BOOST_PP_NIL))))
  BOOST_VMD_ASSERT_IS_SEQ((x)(y)((x)(y)(z)(2)(3)(4))((1,2))(3)((4,(x,BOOST_PP_NIL))))
  BOOST_VMD_ASSERT_IS_SEQ(BOOST_PP_TUPLE_ELEM(4,ATUPLE))
  
#if !BOOST_VMD_MSVC_V8  

  BOOST_VMD_ASSERT_IS_SEQ(())
  BOOST_VMD_ASSERT_IS_SEQ(AN_EMPTY_SEQ)

#endif

#endif

  return boost::report_errors();
  
  }
