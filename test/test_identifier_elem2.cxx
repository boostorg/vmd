#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/identifier/identifier_elem.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_aname (aname)
  #define BOOST_VMD_DETECT_aname_aname
  
  #define ANIDENTIFIER5 aname
  #define ANUMBER 249
  #define ASEQ (25)(26)(27)
  #define ATUPLE (0,1,2,3,((a,b))((c,d))((e))((f,g,h)))
  #define ASEQUENCE5 ASEQ ANUMBER ATUPLE ANIDENTIFIER5

  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_IDENTIFIER_ELEM(4,ASEQUENCE5,BOOST_VMD_RETURN_AFTER))));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_IDENTIFIER_ELEM(4,ASEQUENCE5)));
  
#endif

  return boost::report_errors();
  
  }
