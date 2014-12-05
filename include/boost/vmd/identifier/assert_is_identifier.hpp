#if !defined(BOOST_VMD_ASSERT_IS_IDENTIFIER_HPP)
#define BOOST_VMD_ASSERT_IS_IDENTIFIER_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_IDENTIFIER(...)
#define BOOST_VMD_ASSERT_IS_IDENTIFIER_D(d,...)

#else

#include <boost/vmd/assert.hpp>
#include <boost/vmd/identifier/is_identifier.hpp>

#define BOOST_VMD_ASSERT_IS_IDENTIFIER(...) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_IDENTIFIER(__VA_ARGS__), \
      	BOOST_VMD_IDENTIFIER_ASSERT_ERROR \
      	) \
/**/

#define BOOST_VMD_ASSERT_IS_IDENTIFIER_D(d,...) \
    BOOST_VMD_ASSERT \
      	( \
      	BOOST_VMD_IS_IDENTIFIER_D(d,__VA_ARGS__), \
      	BOOST_VMD_IDENTIFIER_ASSERT_ERROR \
      	) \
/**/

#endif // !BOOST_VMD_ASSERT_DATA
#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VMD_ASSERT_IS_IDENTIFIER_HPP */
