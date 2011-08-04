#if !defined(VMD_DETAIL_NATIVE_HPP)
#define VMD_DETAIL_NATIVE_HPP

#include "vmd_detail_setup.hpp"

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>

#define VMD_DETAIL_PP_TUPLE_TO_LIST(size,tuple) \
  BOOST_PP_TUPLE_TO_LIST(size,tuple) \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_SEQ(size,tuple) \
  BOOST_PP_TUPLE_TO_SEQ(size,tuple) \
/**/

#endif // BOOST_VMD_VARIADICS
#endif // VMD_DETAIL_NATIVE_HPP
