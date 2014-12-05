#if !defined(BOOST_VMD_ASSERT_IS_NUMBER_HPP)
#define BOOST_VMD_ASSERT_IS_NUMBER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_NUMBER(ppident)

#else

#include <boost/vmd/assert.hpp>
#include <boost/vmd/number/is_number.hpp>

#define BOOST_VMD_ASSERT_IS_NUMBER(ppident) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_NUMBER(ppident), \
      	BOOST_VMD_IS_NUMBER_ASSERT_ERROR \
      	) \
/**/

#endif // !BOOST_VMD_ASSERT_DATA

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_NUMBER_HPP */
