#if !defined(BOOST_VARIADIC_MACRO_DATA_HPP)
#define BOOST_VARIADIC_MACRO_DATA_HPP

#include <boost/vmd/detail/setup.hpp>

#if BOOST_PP_VARIADICS

#include <boost/vmd/is_identifier.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/is_begin_parens.hpp>
#include <boost/vmd/is_number.hpp>
#include <boost/vmd/remove_parens.hpp>
#include <boost/vmd/assert_is_array.hpp>
#include <boost/vmd/assert_is_list.hpp>
#include <boost/vmd/assert_is_seq.hpp>
#include <boost/vmd/assert_is_tuple.hpp>

#endif /* BOOST_PP_VARIADICS */
#endif /* BOOST_VARIADIC_MACRO_DATA_HPP */
