
/* ==== FUN_00464b50 @ 00464b50 ==== 
 * signature: int __cdecl FUN_00464b50(undefined4 * param_1)
 * body: 00464b50-00464be4;00464be8-00464c06
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00464be5-00464be7
 */

int __cdecl FUN_00464b50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  iVar1 = FUN_00464b30();
  if (iVar1 == -1) {
    return -1;
  }
  iVar3 = iVar1 * 0x28;
  puVar4 = (undefined4 *)(&DAT_00709b1c + iVar3);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar2 = *(int *)(&DAT_00709b34 + iVar3);
  FUN_004a6800(0x7128b0);
  lVar5 = __ftol();
  *(int *)(&DAT_00709b20 + iVar3) = (int)lVar5;
  iVar2 = *(int *)(&DAT_00709f18 + iVar2 * 0x340);
  *(undefined4 *)(&DAT_00709b24 + iVar3) = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Time_not_set_for_path__d_005a6a00);
  }
  (&DAT_00709b18)[iVar1 * 10] = 1;
  FUN_004644e0((int)(&DAT_00709b1c + iVar3));
  return iVar1;
}


