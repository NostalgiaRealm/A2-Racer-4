
/* ==== FUN_005349b0 @ 005349b0 ==== 
 * signature: undefined __cdecl FUN_005349b0(int param_1)
 * body: 005349b0-00534a2f
 */

void __cdecl FUN_005349b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x38);
  if (iVar1 != 0) {
    piVar2 = (int *)(iVar1 + 4);
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 != 0) {
      while( true ) {
        piVar2 = piVar2 + 1;
        iVar3 = *(int *)(iVar1 + 4);
        if (iVar3 == *(int *)(param_1 + 4)) {
          iVar3 = *(int *)(iVar1 + 8);
        }
        if ((*(int *)(param_1 + 8) == iVar3) && (iVar1 != param_1)) break;
        iVar1 = *piVar2;
        if (iVar1 == 0) {
          return;
        }
      }
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x4000000;
      if (3 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_copynonconvex__moved_nonconve_005c57b4);
      }
    }
  }
  return;
}


