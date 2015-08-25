
//  (C) Copyright Edward Diener 2011-2015
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).

#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert.hpp>
#include <boost/vmd/is_empty.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/facilities/empty.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define DATA x
  
  BOOST_VMD_ASSERT(BOOST_VMD_IS_EMPTY(DATA BOOST_PP_EMPTY()),BOOST_VMD_TEST_FAIL_IS_EMPTY)
  
#endif

  return boost::report_errors();
  
  }
