#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/variadic_macro_data/vmd.hpp>
#else
#include <boost/variadic_macro_data/vmd_is_empty.hpp>
#endif
#include <boost/preprocessor/facilities/empty.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_VMD_VARIADICS

  #define DATA
  #define OBJECT OBJECT2
  #define OBJECT2
  #define FUNC(x) FUNC2(x)
  #define FUNC2(x)
  #define FUNC_GEN() ()
  
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_EMPTY()));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(DATA BOOST_PP_EMPTY()));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY((x BOOST_PP_EMPTY())));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(OBJECT BOOST_PP_EMPTY()));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(FUNC(z) BOOST_PP_EMPTY()));
  
#if BOOST_VMD_MSVC

  /* This shows that VC++ does not work correctly in this case. */

  BOOST_TEST(BOOST_VMD_IS_EMPTY(FUNC_GEN));

#else

  BOOST_TEST(!BOOST_VMD_IS_EMPTY(FUNC_GEN));
  
#endif /* BOOST_VMD_MSVC */

#endif /* BOOST_VMD_VARIADICS */

  return boost::report_errors();
  
  }
