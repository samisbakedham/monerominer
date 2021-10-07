

;#Copyright Walker Industries 2021


.intel_syntax noprefix
#if defined(__APPLE__)
.text
#define DECL(x) _##x
#else
.section .text
#define DECL(x) x
#endif

#define ALIGN .balign
#define dq .quad

.global DECL(SHA3_256_AVX2_ASM)

ALIGN 64
DECL(SHA3_256_AVX2_ASM):

#include "sha3_256_avx2.inc"

KeccakF1600_AVX2_ASM:
	lea r8,[rip+rot_left+96]
	lea r9,[rip+rot_right+96]
	lea r10,[rip+rndc]

#include "sha3_256_keccakf1600_avx2.inc"

#if defined(__linux__) && defined(__ELF__)
.section .note.GNU-stack,"",%progbits
#endif
