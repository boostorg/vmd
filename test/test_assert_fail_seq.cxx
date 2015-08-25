
//  (C) Copyright Edward Diener 2011-2015
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).

#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/elem.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_SEQ_PLUS (mmf)(34)(^^)(!) 456
  
  BOOST_VMD_ASSERT(BOOST_PP_EQUAL(BOOST_PP_SEQ_ELEM(1,BOOST_PP_TUPLE_ELEM(0,BOOST_VMD_ELEM(0,A_SEQ_PLUS,BOOST_VMD_RETURN_AFTER,BOOST_VMD_TYPE_SEQ))),456),BOOST_VMD_TEST_FAIL_SEQ)
  
#endif

  return boost::report_errors();
  
  }
