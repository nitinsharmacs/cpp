	.build_version macos,  26, 0
	.text
	.cstring
lC0:
	.ascii "\12\0"
	.text
	.p2align 4
	.globl __Z5printd
__Z5printd:
LFB2440:
	subq	$8, %rsp
LCFI0:
	movq	__ZSt4cout@GOTPCREL(%rip), %rdi
	call	__ZNSo9_M_insertIdEERSoT_
	movl	$1, %edx
	addq	$8, %rsp
LCFI1:
	leaq	lC0(%rip), %rsi
	movq	%rax, %rdi
	jmp	__ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
LFE2440:
	.p2align 4
	.globl __Z5printi
__Z5printi:
LFB2441:
	subq	$8, %rsp
LCFI2:
	movl	%edi, %esi
	movq	__ZSt4cout@GOTPCREL(%rip), %rdi
	call	__ZNSolsEi
	movl	$1, %edx
	addq	$8, %rsp
LCFI3:
	leaq	lC0(%rip), %rsi
	movq	%rax, %rdi
	jmp	__ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
LFE2441:
	.p2align 4
	.globl __Z5printSt17basic_string_viewIcSt11char_traitsIcEE
__Z5printSt17basic_string_viewIcSt11char_traitsIcEE:
LFB2442:
	subq	$8, %rsp
LCFI4:
	movq	%rdi, %rdx
	movq	__ZSt4cout@GOTPCREL(%rip), %rdi
	call	__ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movl	$1, %edx
	addq	$8, %rsp
LCFI5:
	leaq	lC0(%rip), %rsi
	movq	%rax, %rdi
	jmp	__ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
LFE2442:
	.section	__TEXT,__StaticInit,regular,pure_instructions
	.p2align 4
__GLOBAL__sub_I_stdout.cpp:
LFB3043:
	leaq	__ZStL8__ioinit(%rip), %rdi
	subq	$8, %rsp
LCFI6:
	call	__ZNSt8ios_base4InitC1Ev
	movq	__ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	addq	$8, %rsp
LCFI7:
	leaq	___dso_handle(%rip), %rdx
	leaq	__ZStL8__ioinit(%rip), %rsi
	jmp	___cxa_atexit
LFE3043:
	.zerofill __DATA,__bss,__ZStL8__ioinit,1,0
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x3
	.ascii "zR\0"
	.uleb128 0x1
	.sleb128 -8
	.uleb128 0x10
	.uleb128 0x1
	.byte	0x10
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x1
	.align 3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB2440-.
	.set L$set$2,LFE2440-LFB2440
	.quad L$set$2
	.uleb128 0
	.byte	0x4
	.set L$set$3,LCFI0-LFB2440
	.long L$set$3
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0xe
	.uleb128 0x8
	.align 3
LEFDE1:
LSFDE3:
	.set L$set$5,LEFDE3-LASFDE3
	.long L$set$5
LASFDE3:
	.long	LASFDE3-EH_frame1
	.quad	LFB2441-.
	.set L$set$6,LFE2441-LFB2441
	.quad L$set$6
	.uleb128 0
	.byte	0x4
	.set L$set$7,LCFI2-LFB2441
	.long L$set$7
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.set L$set$8,LCFI3-LCFI2
	.long L$set$8
	.byte	0xe
	.uleb128 0x8
	.align 3
LEFDE3:
LSFDE5:
	.set L$set$9,LEFDE5-LASFDE5
	.long L$set$9
LASFDE5:
	.long	LASFDE5-EH_frame1
	.quad	LFB2442-.
	.set L$set$10,LFE2442-LFB2442
	.quad L$set$10
	.uleb128 0
	.byte	0x4
	.set L$set$11,LCFI4-LFB2442
	.long L$set$11
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.set L$set$12,LCFI5-LCFI4
	.long L$set$12
	.byte	0xe
	.uleb128 0x8
	.align 3
LEFDE5:
LSFDE7:
	.set L$set$13,LEFDE7-LASFDE7
	.long L$set$13
LASFDE7:
	.long	LASFDE7-EH_frame1
	.quad	LFB3043-.
	.set L$set$14,LFE3043-LFB3043
	.quad L$set$14
	.uleb128 0
	.byte	0x4
	.set L$set$15,LCFI6-LFB3043
	.long L$set$15
	.byte	0xe
	.uleb128 0x10
	.byte	0x4
	.set L$set$16,LCFI7-LCFI6
	.long L$set$16
	.byte	0xe
	.uleb128 0x8
	.align 3
LEFDE7:
	.ident	"GCC: (Homebrew GCC 15.2.0) 15.2.0"
	.mod_init_func
_Mod.init:
	.align 3
	.quad	__GLOBAL__sub_I_stdout.cpp
	.subsections_via_symbols
