#if !defined(BOOST_VMD_DETAIL_IDENTIFIER_HPP)
#define BOOST_VMD_DETAIL_IDENTIFIER_HPP

#include <boost/preprocessor/arithmetic/dec.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/bitand.hpp>
#include <boost/preprocessor/logical/bitor.hpp>
#include <boost/preprocessor/logical/not.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/enum.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/preprocessor/variadic/size.hpp>
#include <boost/preprocessor/variadic/to_tuple.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_begin_tuple.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/tuple.hpp>
#include <boost/vmd/detail/idprefix.hpp>
#include <boost/vmd/detail/match_identifier.hpp>

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_ID(state) \
	BOOST_PP_TUPLE_ELEM \
		( \
		0, \
		BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_RETURN(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_REST(state) \
	BOOST_PP_TUPLE_ELEM \
		( \
		1, \
		BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_RETURN(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_FOUND(state) \
	BOOST_PP_TUPLE_ELEM \
		( \
		2, \
		BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_RETURN(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY(state) \
	BOOST_PP_TUPLE_ELEM \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_NUMBER(state), \
		BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_TUPLE(state) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_RETURN(state) \
	BOOST_PP_TUPLE_ELEM(0,state) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_TUPLE(state) \
	BOOST_PP_TUPLE_ELEM(1,state) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_NO_KEYS(state) \
	BOOST_PP_TUPLE_ELEM(2,state) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_STATE_EX_KEY_NUMBER(state) \
	BOOST_PP_TUPLE_ELEM(3,state) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_SUCCESS(tuple) \
	( \
	BOOST_PP_TUPLE_ELEM(0,tuple), \
	BOOST_PP_TUPLE_ELEM(1,tuple), \
	BOOST_PP_DEC(BOOST_PP_TUPLE_ELEM(2,tuple)) \
	) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE_RESULT(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_TUPLE_ELEM(2,tuple), \
			0 \
			), \
		BOOST_VMD_DETAIL_IDENTIFIER_FAILURE, \
		BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_SUCCESS \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE(id,rest,keytuple) \
	BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE_RESULT \
		( \
			( \
			id, \
			rest, \
			BOOST_VMD_DETAIL_MATCH_IDENTIFIER(id,keytuple) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE_D(d,id,rest,keytuple) \
	BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE_RESULT \
		( \
			( \
			id, \
			rest, \
			BOOST_VMD_DETAIL_MATCH_IDENTIFIER_D(d,id,keytuple) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_MAKE_SPLIT(tuple) \
	( \
	BOOST_PP_TUPLE_ENUM \
		( \
		BOOST_PP_TUPLE_ELEM(0,tuple) \
		), \
	BOOST_PP_TUPLE_ELEM(1,tuple) \
	) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_ISPLIT_SEQUENCE_CONCAT_DATA(tuple) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple) \
			), \
		BOOST_VMD_IDENTITY(tuple), \
		BOOST_VMD_DETAIL_IDENTIFIER_MAKE_SPLIT \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE_CONCAT_DATA(tuple) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IDENTIFIER_ISPLIT_SEQUENCE_CONCAT_DATA(tuple)) \
/**/ \

#define BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE_CONCAT(vcseq) \
	BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE_CONCAT_DATA \
		( \
		BOOST_VMD_BEGIN_TUPLE(vcseq,BOOST_VMD_RETURN_AFTER) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_CONCATENATE(vseq) \
	BOOST_PP_CAT \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_REGISTRATION_PREFIX, \
		vseq \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE(vseq) \
 	BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE_CONCAT \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_CONCATENATE(vseq) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_IMAKE_TUPLE(keys) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_TUPLE(keys), \
		BOOST_VMD_IDENTITY(keys), \
		BOOST_PP_VARIADIC_TO_TUPLE \
		) \
	(keys) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_MAKE_TUPLE(keys) \
	BOOST_VMD_IDENTITY_RESULT(BOOST_VMD_DETAIL_IDENTIFIER_IMAKE_TUPLE(keys)) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS(id,rest,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE \
		( \
		id, \
		rest, \
		BOOST_VMD_DETAIL_IDENTIFIER_MAKE_TUPLE \
			( \
			BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_D(d,id,rest,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_TUPLE_D \
		( \
		d, \
		id, \
		rest, \
		BOOST_VMD_DETAIL_IDENTIFIER_MAKE_TUPLE \
			( \
			BOOST_PP_VARIADIC_ELEM(1,__VA_ARGS__) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_JUST(id,rest,...) \
	(id,rest,) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_JUST_D(d,id,rest,...) \
	(id,rest,) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_CHECK_KEYS(id,rest,...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			1 \
			), \
		BOOST_VMD_DETAIL_IDENTIFIER_JUST, \
		BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS \
		) \
	(id,rest,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_CHECK_KEYS_D(d,id,rest,...) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL \
			( \
			BOOST_PP_VARIADIC_SIZE(__VA_ARGS__), \
			1 \
			), \
		BOOST_VMD_DETAIL_IDENTIFIER_JUST_D, \
		BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_KEYS_D \
		) \
	(d,id,rest,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_FAILURE(...) \
	(,,) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_ID_REST(id,rest,...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(id), \
		BOOST_VMD_DETAIL_IDENTIFIER_FAILURE, \
		BOOST_VMD_DETAIL_IDENTIFIER_CHECK_KEYS \
		) \
	(id,rest,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_ID_REST_D(d,id,rest,...) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(id), \
		BOOST_VMD_DETAIL_IDENTIFIER_FAILURE, \
		BOOST_VMD_DETAIL_IDENTIFIER_CHECK_KEYS_D \
		) \
	(d,id,rest,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_DATA(tuple,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_ID_REST \
		( \
		BOOST_PP_TUPLE_ELEM(0,tuple), \
		BOOST_PP_TUPLE_ELEM(1,tuple), \
		__VA_ARGS__ \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_DATA_D(d,tuple,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_ID_REST_D \
		( \
		d, \
		BOOST_PP_TUPLE_ELEM(0,tuple), \
		BOOST_PP_TUPLE_ELEM(1,tuple), \
		__VA_ARGS__ \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_SEQUENCE(vseq,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_DATA \
		( \
		BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE(vseq), \
		__VA_ARGS__ \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_SEQUENCE_D(d,vseq,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_PROCESS_DATA_D \
		( \
		d, \
		BOOST_VMD_DETAIL_IDENTIFIER_SPLIT_SEQUENCE(vseq), \
		__VA_ARGS__ \
		) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_EX(vseq,...) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_BITOR \
      	( \
      	BOOST_VMD_IS_EMPTY(vseq), \
      	BOOST_VMD_IS_BEGIN_TUPLE(vseq) \
      	), \
      BOOST_VMD_DETAIL_IDENTIFIER_FAILURE, \
      BOOST_VMD_DETAIL_IDENTIFIER_SEQUENCE \
      ) \
    (vseq,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_EX_D(d,vseq,...) \
    BOOST_PP_IIF \
      ( \
      BOOST_PP_BITOR \
      	( \
      	BOOST_VMD_IS_EMPTY(vseq), \
      	BOOST_VMD_IS_BEGIN_TUPLE(vseq) \
      	), \
      BOOST_VMD_DETAIL_IDENTIFIER_FAILURE, \
      BOOST_VMD_DETAIL_IDENTIFIER_SEQUENCE_D \
      ) \
    (d,vseq,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER(...) \
	BOOST_VMD_DETAIL_IDENTIFIER_EX(BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__),__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_IDENTIFIER_D(d,...) \
	BOOST_VMD_DETAIL_IDENTIFIER_EX_D(d,BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__),__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_BEGIN_IDENTIFIER_JI(tuple) \
	BOOST_PP_TUPLE_ELEM(0,tuple) \
/**/

#define BOOST_VMD_DETAIL_BEGIN_IDENTIFIER_BOTH(tuple) \
	( \
	BOOST_PP_TUPLE_ELEM(0,tuple), \
	BOOST_PP_TUPLE_ELEM(2,tuple) \
	) \
/**/

#define BOOST_VMD_DETAIL_BEGIN_IDENTIFIER(tuple,size) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_EQUAL(size,1), \
		BOOST_VMD_DETAIL_BEGIN_IDENTIFIER_JI, \
		BOOST_VMD_DETAIL_BEGIN_IDENTIFIER_BOTH \
		) \
	(tuple) \
/**/

#define BOOST_VMD_DETAIL_AFTER_IDENTIFIER(tuple) \
	BOOST_PP_TUPLE_ELEM(1,tuple) \
/**/

# define BOOST_VMD_DETAIL_IS_BEGIN_IDENTIFIER(tuple) \
	BOOST_PP_NOT \
		( \
		BOOST_VMD_IS_EMPTY \
			( \
			BOOST_PP_TUPLE_ELEM(0,tuple) \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_IS_IDENTIFIER(tuple) \
	BOOST_PP_BITAND \
		( \
		BOOST_PP_NOT \
			( \
			BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,tuple)) \
			), \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(1,tuple)) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_IDENTIFIER_HPP */
