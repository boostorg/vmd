
//  (C) Copyright Edward Diener 2011-2015
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).

#if defined(BOOST_VMD_TEST_GENERAL_HEADER)
#include <boost/vmd/vmd.hpp>
#else
#include <boost/vmd/assert_is_tuple.hpp>
#endif
#include <boost/detail/lightweight_test.hpp>


int main()
  {
  
#if BOOST_PP_VARIADICS

#if BOOST_VMD_ASSERT_DATA

  BOOST_VMD_ASSERT_IS_TUPLE((x,3,e,2)ty)
  
#else

  typedef char BOOST_VMD_ASSERT_IS_TUPLE_ERROR[-1];
   
#endif

#endif

  return boost::report_errors();
  
  }
