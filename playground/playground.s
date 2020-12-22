	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 4
	.globl	_do_math                ## -- Begin function do_math
	.p2align	4, 0x90
_do_math:                               ## @do_math
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movss	%xmm0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movl	-8(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2               ## -- Begin function call_a_func
LCPI1_0:
	.long	1085276160              ## float 5.5
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_call_a_func
	.p2align	4, 0x90
_call_a_func:                           ## @call_a_func
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movss	LCPI1_0(%rip), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	movq	%rdi, -8(%rbp)
	movl	$7, %edi
	callq	*-8(%rbp)
	movl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	leaq	_do_math(%rip), %rdi
	callq	_call_a_func
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %esi
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"final_result: %d"


.subsections_via_symbols
