#if !defined(BOOST_VMD_DETAIL_NUMBER_HPP)
#define BOOST_VMD_DETAIL_NUMBER_HPP

#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/tuple/enum.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/tuple.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/is_number_concatenate.hpp>
#include <boost/vmd/detail/paren_or_empty.hpp>

#define BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_INO_, \
		parameter \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER_CONC(parameter) \
	BOOST_VMD_IS_TUPLE \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(parameter) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER_IRESULT(parameter) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_PAREN_OR_EMPTY(parameter), \
		BOOST_VMD_IDENTITY(0), \
		BOOST_VMD_DETAIL_IS_NUMBER_CONC \
		) \
	(parameter) \
/**/

#define BOOST_VMD_DETAIL_IS_NUMBER(parameter) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IS_NUMBER_IRESULT(parameter)) \
/**/

#define BOOST_VMD_DETAIL_NUMBER_GET_NUMBER(vseq) \
	BOOST_PP_TUPLE_ENUM \
		( \
		BOOST_VMD_BEGIN_TUPLE \
			( \
			BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(vseq) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_NUMBER_GET_REST(vseq) \
	BOOST_VMD_AFTER_TUPLE \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(vseq) \
		) \
/**/

#define BOOST_VMD_DETAIL_NUMBER_GET(vseq) \
	( \
	BOOST_VMD_DETAIL_NUMBER_GET_NUMBER(vseq), \
	BOOST_VMD_DETAIL_NUMBER_GET_REST(vseq) \
	) \
/**/

#define BOOST_VMD_DETAIL_NUMBER_NEXT_PEN(vseq) \
	BOOST_VMD_IS_BEGIN_TUPLE \
		( \
		BOOST_VMD_DETAIL_IS_NUMBER_CONCATENATE(vseq) \
		) \
/**/

#define BOOST_VMD_DETAIL_NUMBER_PROCESS(vseq) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_NUMBER_NEXT_PEN(vseq), \
		BOOST_VMD_DETAIL_NUMBER_GET, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(vseq) \
/**/

#define BOOST_VMD_DETAIL_NUMBER(vseq) \
    BOOST_PP_IIF \
      ( \
      BOOST_VMD_DETAIL_PAREN_OR_EMPTY(vseq), \
      BOOST_VMD_DETAIL_EMPTY_RESULT, \
      BOOST_VMD_DETAIL_NUMBER_PROCESS \
      ) \
    (vseq) \
/**/

#endif /* BOOST_VMD_DETAIL_NUMBER_HPP */
