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

#define BOOST_VMD_PP_TUPLE_SIZE BOOST_PP_TUPLE_SIZE
#define BOOST_VMD_PP_TUPLE_ELEM BOOST_PP_TUPLE_ELEM
#define BOOST_VMD_PP_TUPLE_REM_CTOR BOOST_PP_TUPLE_REM_CTOR
#define BOOST_VMD_PP_TUPLE_REVERSE BOOST_PP_TUPLE_REVERSE
#define BOOST_VMD_PP_TUPLE_TO_LIST BOOST_PP_TUPLE_TO_LIST
#define BOOST_VMD_PP_TUPLE_TO_SEQ BOOST_PP_TUPLE_TO_SEQ

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TUPLE_PPLIB_HPP */
