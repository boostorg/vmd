#if !defined(BOOST_VMD_DETAIL_SEQUENCE_ELEM_HPP)
#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_HPP

#include <boost/preprocessor/comparison/greater.hpp>
#include <boost/preprocessor/control/expr_iif.hpp>
#include <boost/preprocessor/control/iif.hpp>
#include <boost/preprocessor/logical/compl.hpp>
#include <boost/preprocessor/seq/elem.hpp>
#include <boost/preprocessor/seq/size.hpp>
#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/variadic/elem.hpp>
#include <boost/vmd/empty.hpp>
#include <boost/vmd/identity.hpp>
#include <boost/vmd/is_empty.hpp>
#include <boost/vmd/types.hpp>
#include <boost/vmd/detail/empty_result.hpp>
#include <boost/vmd/detail/mods.hpp>
#include <boost/vmd/detail/sequence_common.hpp>

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY_CHELM(seq,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_GREATER(BOOST_PP_SEQ_SIZE(seq),elem), \
		BOOST_PP_SEQ_ELEM, \
		BOOST_VMD_EMPTY \
		) \
	(elem,seq) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY_CHELM_D(d,seq,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_GREATER_D(d,BOOST_PP_SEQ_SIZE(seq),elem), \
		BOOST_PP_SEQ_ELEM, \
		BOOST_VMD_EMPTY \
		) \
	(elem,seq) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM_RES(data,elem) \
	( \
	BOOST_PP_SEQ_ELEM(elem,BOOST_PP_TUPLE_ELEM(0,data)), \
	BOOST_PP_TUPLE_ELEM(1,data) \
	) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM(data,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_GREATER(BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(0,data)),elem), \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM_RES, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(data,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM_D(d,data,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_PP_GREATER_D(d,BOOST_PP_SEQ_SIZE(BOOST_PP_TUPLE_ELEM(0,data)),elem), \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM_RES, \
		BOOST_VMD_DETAIL_EMPTY_RESULT \
		) \
	(data,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY(seq,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(seq), \
		BOOST_VMD_EMPTY, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY_CHELM \
		) \
	(seq,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY_D(d,seq,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(seq), \
		BOOST_VMD_EMPTY, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY_CHELM_D \
		) \
	(d,seq,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER(data,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,data)), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM \
		) \
	(data,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_D(d,data,elem) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_IS_EMPTY(BOOST_PP_TUPLE_ELEM(0,data)), \
		BOOST_VMD_DETAIL_EMPTY_RESULT, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_CHELM_D \
		) \
	(d,data,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ(seq,elem,nm) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_STATE_IS_AFTER(nm), \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY \
		) \
	(seq,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_D(d,seq,elem,nm) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_STATE_IS_AFTER_D(d,nm), \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_AFTER_D, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_ONLY_D \
		) \
	(d,seq,elem) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_GET_VSEQ(...) \
	BOOST_PP_VARIADIC_ELEM(0,__VA_ARGS__) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_NOT_EMPTY(vseq) \
	BOOST_PP_COMPL(BOOST_VMD_IS_EMPTY(vseq)) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_PROCESS(elem,vseq,nm) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_PROCESS_TUPLE \
			( \
			vseq, \
			elem, \
			BOOST_VMD_TYPE_SEQ, \
			nm \
			), \
		elem, \
		nm \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_PROCESS_D(d,elem,vseq,nm) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_FSEQ_D \
		( \
		d, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_PROCESS_TUPLE_D \
			( \
			d, \
			vseq, \
			elem, \
			BOOST_VMD_TYPE_SEQ, \
			nm \
			), \
		elem, \
		nm \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY_RES(nm) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_STATE_IS_AFTER(nm), \
		(,) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY_RES_D(d,nm) \
	BOOST_PP_EXPR_IIF \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_STATE_IS_AFTER_D(d,nm), \
		(,) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY(elem,vseq,nm) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY_RES(nm) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY_D(d,elem,vseq,nm) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY_RES_D(d,nm) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_CE(elem,vseq,nm) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_NOT_EMPTY(vseq), \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_PROCESS, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY \
		) \
	(elem,vseq,nm) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_CE_D(d,elem,vseq,nm) \
	BOOST_PP_IIF \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_NOT_EMPTY(vseq), \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_PROCESS_D, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_EMPTY_D \
		) \
	(d,elem,vseq,nm) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_COA(res,nm) \
	BOOST_VMD_IDENTITY_RESULT \
		( \
		BOOST_PP_IIF \
			( \
			BOOST_VMD_DETAIL_MODS_IS_RESULT_ONLY_AFTER(nm), \
			BOOST_PP_TUPLE_ELEM, \
			BOOST_VMD_IDENTITY(res) \
			) \
		(1,res) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM(elem,vseq,nm) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_COA \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_CE(elem,vseq,nm), \
		nm \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_D(d,elem,vseq,nm) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_COA \
		( \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_CE_D(d,elem,vseq,nm), \
		nm \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM(allow,elem,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM \
		( \
		elem, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_GET_VSEQ(__VA_ARGS__), \
		BOOST_VMD_DETAIL_NEW_MODS \
			( \
			allow, \
			__VA_ARGS__ \
			) \
		) \
/**/

#define BOOST_VMD_DETAIL_SEQUENCE_ELEM_D(d,allow,elem,...) \
	BOOST_VMD_DETAIL_SEQUENCE_ELEM_NM_D \
		( \
		d, \
		elem, \
		BOOST_VMD_DETAIL_SEQUENCE_ELEM_GET_VSEQ(__VA_ARGS__), \
		BOOST_VMD_DETAIL_NEW_MODS_D \
			( \
			d, \
			allow, \
			__VA_ARGS__ \
			) \
		) \
/**/

#endif /* BOOST_VMD_DETAIL_SEQUENCE_ELEM_HPP */
