
/* ==== FUN_00518040 @ 00518040 ==== 
 * signature: undefined __cdecl FUN_00518040(int param_1)
 * body: 00518040-005180bf
 */

void __cdecl FUN_00518040(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0074c600;
  if (DAT_0074c65c != param_1) {
    for (; (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0)); iVar1 = *(int *)(iVar1 + 0x30)) {
      iVar2 = DAT_0074c5f4;
      if (DAT_0074c65c == 1) {
        iVar2 = DAT_0074c5f8;
      }
      if (*(undefined4 **)(iVar1 + 0x28) != (undefined4 *)0x0) {
        FUN_0051e2b0(*(undefined4 **)(iVar1 + 0x28),iVar2);
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
    }
    DAT_0074c65c = param_1;
  }
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_clearcenters__switched_to_cen_005bbab4);
  }
  return;
}


