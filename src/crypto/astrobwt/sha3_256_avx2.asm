
;# Copyright Walker Industries 2021

_SHA3_256_AVX2_ASM SEGMENT PAGE READ EXECUTE
PUBLIC SHA3_256_AVX2_ASM

ALIGN 64
SHA3_256_AVX2_ASM:

include sha3_256_avx2.inc

KeccakF1600_AVX2_ASM:
	lea r8,[rot_left+96]
	lea r9,[rot_right+96]
	lea r10,[rndc]

include sha3_256_keccakf1600_avx2.inc

_SHA3_256_AVX2_ASM ENDS
END
