#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert_is_tuple.hpp>
#endif
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/greater.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS
 
#if BOOST_VMD_MSVC

 #define AMACRO(atuple) \
     BOOST_PP_CAT \
        ( \
        BOOST_VMD_ASSERT_IS_TUPLE(atuple), \
        BOOST_PP_IIF(BOOST_PP_GREATER(BOOST_PP_TUPLE_SIZE(atuple), 2),1,0) \
        )
        
#else

 #define AMACRO(atuple) \
     BOOST_VMD_ASSERT_IS_TUPLE(atuple) \
     BOOST_PP_IIF(BOOST_PP_GREATER(BOOST_PP_TUPLE_SIZE(atuple), 2),1,0)
     
#endif

 BOOST_TEST(AMACRO((1,2,3)));
 BOOST_TEST(!AMACRO((1,2)));
 
#else

BOOST_ERROR("No variadic macro support");
  
#endif

  return boost::report_errors();
  
  }
