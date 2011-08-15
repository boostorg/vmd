#if !defined(VMD_TO_DATA_PPLIB_HPP)
#define VMD_TO_DATA_PPLIB_HPP

#include <boost/variadic_macro_data/detail/vmd_detail_setup.hpp>

#if BOOST_VMD_VARIADICS

#include <boost/preprocessor/array/enum.hpp>
#include <boost/preprocessor/list/enum.hpp>
#include <boost/preprocessor/seq/enum.hpp>
#include <boost/preprocessor/tuple/enum.hpp>

#define BOOST_VMD_PP_ARRAY_TO_DATA BOOST_PP_ARRAY_ENUM
#define BOOST_VMD_PP_LIST_TO_DATA BOOST_PP_LIST_ENUM
#define BOOST_VMD_PP_SEQ_TO_DATA BOOST_PP_SEQ_ENUM
#define BOOST_VMD_PP_TUPLE_TO_DATA BOOST_PP_TUPLE_ENUM

#endif /* BOOST_VMD_VARIADICS */
#endif /* VMD_TO_DATA_PPLIB_HPP */
