	.file	"pattern.c"
# GNU C17 (Debian 12.2.0-14) version 12.2.0 (x86_64-linux-gnu)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.1.1-p1, MPC version 1.3.1, isl version isl-0.25-GMP

# warning: MPFR header version 4.1.1-p1 differs from library version 4.2.0.
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -mtune=generic -march=x86-64 -ggdb -O0 -std=c17 -fasynchronous-unwind-tables
	.text
.Ltext0:
	.file 0 "/home/habali1/hw05-habali1" "pattern.c"
	.section	.rodata
.LC0:
	.string	"Enter a character from A-Z: "
.LC1:
	.string	"%c"
.LC2:
	.string	"%c "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.file 1 "pattern.c"
	.loc 1 12 1
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
# pattern.c:15:     printf("Enter a character from A-Z: ");
	.loc 1 15 5
	leaq	.LC0(%rip), %rax	#, tmp86
	movq	%rax, %rdi	# tmp86,
	movl	$0, %eax	#,
	call	printf@PLT	#
# pattern.c:16:     scanf("%c",&ch);
	.loc 1 16 5
	leaq	-9(%rbp), %rax	#, tmp87
	movq	%rax, %rsi	# tmp87,
	leaq	.LC1(%rip), %rax	#, tmp88
	movq	%rax, %rdi	# tmp88,
	movl	$0, %eax	#,
	call	__isoc99_scanf@PLT	#
# pattern.c:17:         for(i=65;i<=ch;i++)
	.loc 1 17 14
	movl	$65, -4(%rbp)	#, i
# pattern.c:17:         for(i=65;i<=ch;i++)
	.loc 1 17 9
	jmp	.L2	#
.L5:
# pattern.c:19:             for(j=65;j<=i;j++)
	.loc 1 19 18
	movl	$65, -8(%rbp)	#, j
# pattern.c:19:             for(j=65;j<=i;j++)
	.loc 1 19 13
	jmp	.L3	#
.L4:
# pattern.c:20:                 printf("%c ",j);
	.loc 1 20 17 discriminator 3
	movl	-8(%rbp), %eax	# j, tmp89
	movl	%eax, %esi	# tmp89,
	leaq	.LC2(%rip), %rax	#, tmp90
	movq	%rax, %rdi	# tmp90,
	movl	$0, %eax	#,
	call	printf@PLT	#
# pattern.c:19:             for(j=65;j<=i;j++)
	.loc 1 19 28 discriminator 3
	addl	$1, -8(%rbp)	#, j
.L3:
# pattern.c:19:             for(j=65;j<=i;j++)
	.loc 1 19 23 discriminator 1
	movl	-8(%rbp), %eax	# j, tmp91
	cmpl	-4(%rbp), %eax	# i, tmp91
	jle	.L4	#,
# pattern.c:21:             printf("\n");
	.loc 1 21 13 discriminator 2
	movl	$10, %edi	#,
	call	putchar@PLT	#
# pattern.c:17:         for(i=65;i<=ch;i++)
	.loc 1 17 25 discriminator 2
	addl	$1, -4(%rbp)	#, i
.L2:
# pattern.c:17:         for(i=65;i<=ch;i++)
	.loc 1 17 19 discriminator 1
	movzbl	-9(%rbp), %eax	# ch, ch.0_1
	movsbl	%al, %eax	# ch.0_1, _2
	cmpl	%eax, -4(%rbp)	# _2, i
	jle	.L5	#,
# pattern.c:23:     return 0;
	.loc 1 23 12
	movl	$0, %eax	#, _11
# pattern.c:24: }
	.loc 1 24 1
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE0:
	.size	main, .-main
.Letext0:
	.file 2 "/usr/include/stdio.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0xed
	.value	0x5
	.byte	0x1
	.byte	0x8
	.long	.Ldebug_abbrev0
	.uleb128 0x5
	.long	.LASF12
	.byte	0x1d
	.long	.LASF0
	.long	.LASF1
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x1
	.byte	0x8
	.byte	0x7
	.long	.LASF2
	.uleb128 0x1
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x1
	.byte	0x1
	.byte	0x8
	.long	.LASF4
	.uleb128 0x1
	.byte	0x2
	.byte	0x7
	.long	.LASF5
	.uleb128 0x1
	.byte	0x1
	.byte	0x6
	.long	.LASF6
	.uleb128 0x1
	.byte	0x2
	.byte	0x5
	.long	.LASF7
	.uleb128 0x6
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x1
	.byte	0x8
	.byte	0x5
	.long	.LASF8
	.uleb128 0x1
	.byte	0x1
	.byte	0x6
	.long	.LASF9
	.uleb128 0x7
	.long	0x66
	.uleb128 0x8
	.long	.LASF10
	.byte	0x2
	.value	0x1b5
	.byte	0xc
	.long	.LASF13
	.long	0x58
	.long	0x8e
	.uleb128 0x3
	.long	0x8e
	.uleb128 0x4
	.byte	0
	.uleb128 0x9
	.byte	0x8
	.long	0x6d
	.uleb128 0xa
	.long	.LASF14
	.byte	0x2
	.value	0x164
	.byte	0xc
	.long	0x58
	.long	0xac
	.uleb128 0x3
	.long	0x8e
	.uleb128 0x4
	.byte	0
	.uleb128 0xb
	.long	.LASF11
	.byte	0x1
	.byte	0xb
	.byte	0x5
	.long	0x58
	.quad	.LFB0
	.quad	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0x2
	.string	"i"
	.byte	0xd
	.byte	0x9
	.long	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x2
	.string	"j"
	.byte	0xd
	.byte	0xb
	.long	0x58
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.uleb128 0x2
	.string	"ch"
	.byte	0xe
	.byte	0xa
	.long	0x66
	.uleb128 0x2
	.byte	0x91
	.sleb128 -25
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0x21
	.sleb128 1
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f
	.uleb128 0x1b
	.uleb128 0x1f
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x7c
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF10:
	.string	"scanf"
.LASF12:
	.string	"GNU C17 12.2.0 -mtune=generic -march=x86-64 -ggdb -O0 -std=c17 -fasynchronous-unwind-tables"
.LASF3:
	.string	"unsigned int"
.LASF2:
	.string	"long unsigned int"
.LASF9:
	.string	"char"
.LASF13:
	.string	"__isoc99_scanf"
.LASF4:
	.string	"unsigned char"
.LASF11:
	.string	"main"
.LASF8:
	.string	"long int"
.LASF5:
	.string	"short unsigned int"
.LASF14:
	.string	"printf"
.LASF7:
	.string	"short int"
.LASF6:
	.string	"signed char"
	.section	.debug_line_str,"MS",@progbits,1
.LASF0:
	.string	"pattern.c"
.LASF1:
	.string	"/home/habali1/hw05-habali1"
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
