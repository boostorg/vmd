#if !defined(VMD_DETAIL_HPP)
#define VMD_DETAIL_HPP

#include <boost/config.hpp>

#if !defined(BOOST_NO_VARIADIC_MACROS)

#include <boost/preprocessor/tuple/elem.hpp>
#include <boost/preprocessor/tuple/reverse.hpp>
#include <boost/preprocessor/tuple/to_list.hpp>
#include <boost/preprocessor/tuple/to_seq.hpp>
#include <boost/preprocessor/tuple/rem.hpp>
#if defined(BOOST_MSVC)
#include <boost/preprocessor/arithmetic/add.hpp>
#include <boost/preprocessor/cat.hpp>
#include <boost/preprocessor/facilities/empty.hpp>
#endif

#define VMD_DETAIL_DATA_ELEM_0(p0, ...) p0
#define VMD_DETAIL_DATA_ELEM_1(p0, p1, ...) p1
#define VMD_DETAIL_DATA_ELEM_2(p0, p1, p2, ...) p2
#define VMD_DETAIL_DATA_ELEM_3(p0, p1, p2, p3, ...) p3
#define VMD_DETAIL_DATA_ELEM_4(p0, p1, p2, p3, p4, ...) p4
#define VMD_DETAIL_DATA_ELEM_5(p0, p1, p2, p3, p4, p5, ...) p5
#define VMD_DETAIL_DATA_ELEM_6(p0, p1, p2, p3, p4, p5, p6, ...) p6
#define VMD_DETAIL_DATA_ELEM_7(p0, p1, p2, p3, p4, p5, p6, p7, ...) p7
#define VMD_DETAIL_DATA_ELEM_8(p0, p1, p2, p3, p4, p5, p6, p7, p8, ...) p8
#define VMD_DETAIL_DATA_ELEM_9(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, ...) p9
#define VMD_DETAIL_DATA_ELEM_10(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, ...) p10
#define VMD_DETAIL_DATA_ELEM_11(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, ...) p11
#define VMD_DETAIL_DATA_ELEM_12(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, ...) p12
#define VMD_DETAIL_DATA_ELEM_13(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, ...) p13
#define VMD_DETAIL_DATA_ELEM_14(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, ...) p14
#define VMD_DETAIL_DATA_ELEM_15(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, ...) p15
#define VMD_DETAIL_DATA_ELEM_16(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, ...) p16
#define VMD_DETAIL_DATA_ELEM_17(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, ...) p17
#define VMD_DETAIL_DATA_ELEM_18(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, ...) p18
#define VMD_DETAIL_DATA_ELEM_19(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, ...) p19
#define VMD_DETAIL_DATA_ELEM_20(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, ...) p20
#define VMD_DETAIL_DATA_ELEM_21(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, ...) p21
#define VMD_DETAIL_DATA_ELEM_22(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, ...) p22
#define VMD_DETAIL_DATA_ELEM_23(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, ...) p23
#define VMD_DETAIL_DATA_ELEM_24(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, ...) p24
#define VMD_DETAIL_DATA_ELEM_25(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, ...) p25
#define VMD_DETAIL_DATA_ELEM_26(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, ...) p26
#define VMD_DETAIL_DATA_ELEM_27(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, ...) p27
#define VMD_DETAIL_DATA_ELEM_28(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, ...) p28
#define VMD_DETAIL_DATA_ELEM_29(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, ...) p29
#define VMD_DETAIL_DATA_ELEM_30(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, ...) p30
#define VMD_DETAIL_DATA_ELEM_31(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, ...) p31
#define VMD_DETAIL_DATA_ELEM_32(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, ...) p32
#define VMD_DETAIL_DATA_ELEM_33(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, ...) p33
#define VMD_DETAIL_DATA_ELEM_34(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, ...) p34
#define VMD_DETAIL_DATA_ELEM_35(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, ...) p35
#define VMD_DETAIL_DATA_ELEM_36(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, ...) p36
#define VMD_DETAIL_DATA_ELEM_37(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, ...) p37
#define VMD_DETAIL_DATA_ELEM_38(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, ...) p38
#define VMD_DETAIL_DATA_ELEM_39(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, ...) p39
#define VMD_DETAIL_DATA_ELEM_40(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, ...) p40
#define VMD_DETAIL_DATA_ELEM_41(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, ...) p41
#define VMD_DETAIL_DATA_ELEM_42(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, ...) p42
#define VMD_DETAIL_DATA_ELEM_43(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, ...) p43
#define VMD_DETAIL_DATA_ELEM_44(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, ...) p44
#define VMD_DETAIL_DATA_ELEM_45(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, ...) p45
#define VMD_DETAIL_DATA_ELEM_46(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, ...) p46
#define VMD_DETAIL_DATA_ELEM_47(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, ...) p47
#define VMD_DETAIL_DATA_ELEM_48(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, ...) p48
#define VMD_DETAIL_DATA_ELEM_49(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, ...) p49
#define VMD_DETAIL_DATA_ELEM_50(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, ...) p50
#define VMD_DETAIL_DATA_ELEM_51(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, ...) p51
#define VMD_DETAIL_DATA_ELEM_52(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, ...) p52
#define VMD_DETAIL_DATA_ELEM_53(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, ...) p53
#define VMD_DETAIL_DATA_ELEM_54(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, ...) p54
#define VMD_DETAIL_DATA_ELEM_55(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, ...) p55
#define VMD_DETAIL_DATA_ELEM_56(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, ...) p56
#define VMD_DETAIL_DATA_ELEM_57(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, ...) p57
#define VMD_DETAIL_DATA_ELEM_58(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, ...) p58
#define VMD_DETAIL_DATA_ELEM_59(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, ...) p59
#define VMD_DETAIL_DATA_ELEM_60(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60, ...) p60
#define VMD_DETAIL_DATA_ELEM_61(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60, p61, ...) p61
#define VMD_DETAIL_DATA_ELEM_62(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60, p61, p62, ...) p62
#define VMD_DETAIL_DATA_ELEM_63(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40, p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60, p61, p62, p63, ...) p63

#define VMD_DETAIL_ARG_N( \
  A1,A2,A3,A4,A5,A6,A7,A8,A9,A10, \
  A11,A12,A13,A14,A15,A16,A17,A18,A19,A20, \
  A21,A22,A23,A24,A25,A26,A27,A28,A29,A30, \
  A31,A32,A33,A34,A35,A36,A37,A38,A39,A40, \
  A41,A42,A43,A44,A45,A46,A47,A48,A49,A50, \
  A51,A52,A53,A54,A55,A56,A57,A58,A59,A60, \
  A61,A62,A63,N,...) N \
/**/
#define VMD_DETAIL_RSEQ_N() \
  63,62,61,60, \
  59,58,57,56,55,54,53,52,51,50, \
  49,48,47,46,45,44,43,42,41,40, \
  39,38,37,36,35,34,33,32,31,30, \
  29,28,27,26,25,24,23,22,21,20, \
  19,18,17,16,15,14,13,12,11,10, \
  9,8,7,6,5,4,3,2,1,0 \
/**/
#define VMD_DETAIL_APPLY_I(macro, args) \
  macro args \
/**/
#define VMD_DETAIL_APPLY(macro, args) \
  VMD_DETAIL_APPLY_I(macro, args) \
/**/
#define VMD_DETAIL_DATA_TO_PP_TUPLE(...) \
  ( __VA_ARGS__ ) \
/**/
#define VMD_DETAIL_REMOVE_TUPLE_PARENS(...) \
  __VA_ARGS__ \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_DATA(tuple) \
  VMD_DETAIL_REMOVE_TUPLE_PARENS tuple \
/**/
#if defined(BOOST_MSVC)
#define VMD_DETAIL_DATA_SIZE(...) \
  BOOST_PP_ADD(VMD_DETAIL_APPLY(VMD_DETAIL_ARG_N, (__VA_ARGS__, VMD_DETAIL_RSEQ_N())),0) \
/**/
#else
#define VMD_DETAIL_DATA_SIZE(...) \
  VMD_DETAIL_APPLY(VMD_DETAIL_ARG_N, (__VA_ARGS__, VMD_DETAIL_RSEQ_N())) \
/**/
#endif
#define VMD_DETAIL_PP_TUPLE_ELEM(size,i,tuple) \
  BOOST_PP_TUPLE_ELEM(size,i,tuple) \
/**/
#define VMD_DETAIL_CAT(a, ...) VMD_DETAIL_PRIMITIVE_CAT(a, __VA_ARGS__)
#define VMD_DETAIL_PRIMITIVE_CAT(a, ...) a ## __VA_ARGS__
#if defined(BOOST_MSVC)
#define VMD_DETAIL_DATA_ELEM(n,...) \
  BOOST_PP_CAT(VMD_DETAIL_CAT(VMD_DETAIL_DATA_ELEM_, n)(__VA_ARGS__,),BOOST_PP_EMPTY()) \
/**/
#else
#define VMD_DETAIL_DATA_ELEM(n,...) \
  VMD_DETAIL_CAT(VMD_DETAIL_DATA_ELEM_, n)(__VA_ARGS__,) \
/**/
#endif
#define VMD_DETAIL_DATA_TO_PP_ARRAY(...) \
  ( VMD_DETAIL_DATA_SIZE(__VA_ARGS__) , VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_LIST(size,tuple) \
  BOOST_PP_TUPLE_TO_LIST(size,tuple) \
/**/
#define VMD_DETAIL_DATA_TO_PP_LIST(...) \
  VMD_DETAIL_PP_TUPLE_TO_LIST(VMD_DETAIL_DATA_SIZE(__VA_ARGS__),VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_PP_TUPLE_TO_SEQ(size,tuple) \
  BOOST_PP_TUPLE_TO_SEQ(size,tuple) \
/**/
#define VMD_DETAIL_DATA_TO_PP_SEQ(...) \
  VMD_DETAIL_PP_TUPLE_TO_SEQ(VMD_DETAIL_DATA_SIZE(__VA_ARGS__),VMD_DETAIL_DATA_TO_PP_TUPLE(__VA_ARGS__)) \
/**/
#define VMD_DETAIL_PP_TUPLE_SIZE(tuple) \
  VMD_DETAIL_DATA_SIZE(VMD_DETAIL_PP_TUPLE_TO_DATA(tuple)) \
/**/
#define VMD_DETAIL_PP_TUPLE_REM_CTOR(size,tuple) \
  BOOST_PP_TUPLE_REM_CTOR(size,tuple) \
/**/
#define VMD_DETAIL_PP_TUPLE_REVERSE(size,tuple) \
  BOOST_PP_TUPLE_REVERSE(size,tuple) \
/**/

#endif // BOOST_NO_VARIADIC_MACROS
#endif // VMD_DETAIL_HPP
