
/* ==== xvga_rc_filepos_impl @ 10001c90 ==== 
 * signature: undefined4 __cdecl xvga_rc_filepos_impl(int param_1)
 * body: 10001c90-10001cbe
 * note: ANALYST: Offset of member N. [confidence: confirmed] [evidence: export thunk jumps here; code read]
 */

/* ANALYST: Offset of member N. [confidence: confirmed] [evidence: export thunk jumps here; code
   read] */

undefined4 __cdecl xvga_rc_filepos_impl(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x14 + param_1 * 0x1c);
}


