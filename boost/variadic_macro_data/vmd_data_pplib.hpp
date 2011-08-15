#if !defined(VMD_DATA_PPLIB_HPP)
#define VMD_DATA_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/preprocessor/variadic/to_array.hpp>
#include <boost/preprocessor/variadic/to_list.hpp>
#include <boost/preprocessor/variadic/to_seq.hpp>
#include <boost/preprocessor/variadic/to_tuple.hpp>

#define BOOST_VMD_DATA_SIZE BOOST_PP_VARIADIC_SIZE
#define BOOST_VMD_DATA_ELEM BOOST_PP_VARIADIC_ELEM
#define BOOST_VMD_DATA_TO_PP_TUPLE BOOST_PP_VARIADIC_TO_TUPLE
#define BOOST_VMD_DATA_TO_PP_ARRAY BOOST_PP_VARIADIC_TO_ARRAY
#define BOOST_VMD_DATA_TO_PP_LIST BOOST_PP_VARIADIC_TO_LIST
#define BOOST_VMD_DATA_TO_PP_SEQ BOOST_PP_VARIADIC_TO_SEQ

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_DATA_PPLIB_HPP */
