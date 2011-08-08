#if !defined(VMD_ASSERT_IS_SEQ_COMMON_HPP)
#define VMD_ASSERT_IS_SEQ_COMMON_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

/*

  The succeeding comments in this file are in doxygen format.

*/

/** \file
*/

#if !BOOST_VMD_ASSERT_DATA

#define BOOST_VMD_ASSERT_IS_SEQ(x)

#else

#include <boost/preprocessor/control/while.hpp>
#include <boost/variadic_macro_data/detail/vmd_detail_assert_is_seq.hpp>

#define BOOST_VMD_ASSERT_IS_SEQ(x) \
    VMD_DETAIL_ASSERT_IS_SEQ_CHECK_RETURN_FAILURE \
      ( \
      BOOST_PP_WHILE \
        ( \
        VMD_DETAIL_ASSERT_IS_SEQ_PRED, \
        VMD_DETAIL_ASSERT_IS_SEQ_OP, \
        x \
        ) \
      ) \
/**/

#endif /* BOOST_VMD_ASSERT_DATA */
#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_ASSERT_IS_SEQ_COMMON_HPP */
