
/* ==== FUN_004a7020 @ 004a7020 ==== 
 * signature: undefined __cdecl FUN_004a7020(int param_1)
 * body: 004a7020-004a7076;004a707f-004a7098
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004a7077-004a707e
 */

void __cdecl FUN_004a7020(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50);
  if ((-1 < iVar1) && (iVar1 <= DAT_00715ebc)) {
    FUN_004ab140((void *)(*(int *)(param_1 * 0xf0 + 0x3c + DAT_00715e50) * 0x50 + DAT_00715eb8),
                 param_1);
    return;
  }
  FUN_004c3fa0((byte *)s_Object_chunk____d__type____d_005af9dc);
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s___s___d_Illegal_waypoint___d__fo_005af9ac);
}


