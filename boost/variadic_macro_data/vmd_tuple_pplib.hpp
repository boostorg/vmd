#if !defined(VMD_TUPLE_PPLIB_HPP)
#define VMD_TUPLE_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/rem.hpp>
#include <boost/preprocessor/tuple/reverse.hpp>
#include <boost/preprocessor/tuple/size.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>

#define BOOST_VMD_PP_TUPLE_SIZE(tuple) \
  BOOST_PP_TUPLE_SIZE(tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_ELEM(n,tuple) \
  BOOST_PP_TUPLE_ELEM(n,tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_REM_CTOR(tuple) \
  BOOST_PP_TUPLE_REM_CTOR(tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_REVERSE(tuple) \
  BOOST_PP_TUPLE_REVERSE(tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_TO_LIST(tuple) \
  BOOST_PP_TUPLE_TO_LIST(tuple) \
/**/

#define BOOST_VMD_PP_TUPLE_TO_SEQ(tuple) \
  BOOST_PP_TUPLE_TO_SEQ(tuple) \
/**/

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TUPLE_PPLIB_HPP */
