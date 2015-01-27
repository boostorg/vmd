#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert_is_identifier.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  	{
  
#if BOOST_PP_VARIADICS && BOOST_VMD_ASSERT_DATA

    #define BOOST_VMD_REGISTER_zzz (zzz)
    #define BOOST_VMD_DETECT_zzz_zzz
    #define BOOST_VMD_REGISTER_somevalue (somevalue)
    #define BOOST_VMD_DETECT_somevalue_somevalue
    
    BOOST_VMD_ASSERT_IS_IDENTIFIER(zzz,somevalue)
	
#else
	
    typedef char BOOST_VMD_IS_IDENTIFIER_ERROR[-1];
  
#endif

  	return boost::report_errors();
  
  	}
