#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/seq/after_seq_elem.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define BOOST_VMD_REGISTER_ggh (ggh)
  
  #define ANIDENTIFIER ggh
  #define ANUMBER 249
  #define ASEQ (25)(26)(27)
  #define ASEQ2 (75)(76)(77)
  #define ASEQ3 (147)(148)(149)
  #define ASEQ5 (221)(222)(223)
  #define ATUPLE (0,1,2,3,((a,b))((c,d))((e))((f,g,h)))
  #define ALIST (0,(1,(2,(3,BOOST_PP_NIL))))
  #define ANARRAY (3,(a,b,38))
  #define ANARRAY2 (5,(c,d,133,22,15))
  #define ASEQUENCE ANUMBER ALIST ATUPLE ANIDENTIFIER ANARRAY ASEQ
  #define ASEQUENCE2 ANIDENTIFIER ANARRAY2 ALIST ASEQ2 ATUPLE
  #define ASEQUENCE3 ASEQ3 ANIDENTIFIER ATUPLE ALIST
  #define ASEQUENCE4
  #define ASEQUENCE5 ALIST ASEQ5 ATUPLE ANIDENTIFIER

  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ_ELEM(5,ASEQUENCE)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ_ELEM(3,ASEQUENCE2)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ_ELEM(0,ASEQUENCE3)));
  BOOST_TEST(BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ_ELEM(0,ASEQUENCE4)));
  BOOST_TEST(!BOOST_VMD_IS_EMPTY(BOOST_VMD_AFTER_SEQ_ELEM(1,ASEQUENCE5)));
  
#endif

  return boost::report_errors();
  
  }
