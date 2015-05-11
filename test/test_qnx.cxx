#include <boost/vmd/vmd.hpp>
#include <boost/predef.h>
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#    if BOOST_OS_QNX
#      if BOOST_COMP_GNUC >= 4.3
#        if !defined __cplusplus && __STDC_VERSION__ < 199901L
BOOST_ERROR("Gcc >= 4.3: __STDC_VERSION__ is less than 199901L.");
#        elif defined __cplusplus && __cplusplus < 201103L
BOOST_ERROR("Gcc >= 4.3: __cplusplus is less than 201103L.");
#        else
BOOST_ERROR("QNX operating system and Gcc >= 4.3.");
#        endif
#      else
#        if !defined __cplusplus && __STDC_VERSION__ < 199901L
BOOST_ERROR("__STDC_VERSION__ is less than 199901L.");
#        elif defined __cplusplus && __cplusplus < 201103L
BOOST_ERROR("__cplusplus is less than 201103L.");
#        else
BOOST_ERROR("QNX operating system.");
#        endif
#      endif
#    endif

  return boost::report_errors();
  
  }
