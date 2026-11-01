
/* ==== xvga_rc_num_files_impl @ 10001c00 ==== 
 * signature: undefined4 __stdcall xvga_rc_num_files_impl(void)
 * body: 10001c00-10001c23
 * note: ANALYST: Member count. [confidence: confirmed] [evidence: export thunk jumps here; code read]
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ANALYST: Member count. [confidence: confirmed] [evidence: export thunk jumps here; code read] */

undefined4 xvga_rc_num_files_impl(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return _DAT_100313fc;
}


