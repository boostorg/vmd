#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/generic/equal.hpp>
#include <boost/vmd/generic/not_equal.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_ggh (ggh)
  #define BOOST_VMD_DETECT_ggh_ggh
  #define BOOST_VMD_REGISTER_dvd (dvd)
  #define BOOST_VMD_DETECT_dvd_dvd
  
  #define ANIDENTIFIER ggh
  #define ANIDENTIFIER2 dvd
  #define ANUMBER 249
  #define ANUMBER2 17
  #define ASEQ (25)(26)(27)
  #define ASEQ2 (1)(2)(3)
  #define ATUPLE (0,(ggh,45,(2,(89,(dvd)(57)(99)))),170)
  #define ATUPLE2 (0,(ggh,45,(2,(89,(dvd)(57)(99)))),170)
  #define ALIST (0,(1,(2,(3,BOOST_PP_NIL))))
  #define ALIST2 (0,(1,(2,(4,BOOST_PP_NIL))))
  #define ANARRAY (3,(ggh,dvd,38))
  #define ANARRAY2 (3,(dvd,ggh,38))
  #define ASEQUENCE4
  
#endif

  return boost::report_errors();
  
  }
