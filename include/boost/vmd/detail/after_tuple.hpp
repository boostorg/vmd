#if !defined(BOOST_VMD_DETAIL_AFTER_TUPLE_HPP)
#define BOOST_VMD_DETAIL_AFTER_TUPLE_HPP

#include <boost/vmd/gen_empty.hpp>
#include <boost/vmd/detail/begin_tuple.hpp>

#define BOOST_VMD_DETAIL_AFTER_TUPLE_DATA(tuple) BOOST_VMD_GEN_EMPTY tuple
#define BOOST_VMD_DETAIL_AFTER_TUPLE_NOT_FOUND(tuple) (,)
#define BOOST_VMD_DETAIL_AFTER_TUPLE(tuple) (BOOST_VMD_DETAIL_BEGIN_TUPLE(tuple),BOOST_VMD_DETAIL_AFTER_TUPLE_DATA(tuple))

#endif /* BOOST_VMD_DETAIL_AFTER_TUPLE_HPP */
