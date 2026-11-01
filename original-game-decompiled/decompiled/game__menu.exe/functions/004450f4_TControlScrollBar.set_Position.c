
/* ==== TControlScrollBar.set_Position @ 004450f4 ==== 
 * signature: undefined __register TControlScrollBar.set_Position(int param_1, int param_2)
 * body: 004450f4-004451b4
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_Position(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x20) & 2) == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if ((param_2 <= iVar3) && (iVar3 = param_2, param_2 < 0)) {
      iVar3 = 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar3 != iVar1) {
      *(int *)(param_1 + 0xc) = iVar3;
      if (*(char *)(param_1 + 0x18) == '\0') {
        FUN_004345a0(*(int **)(param_1 + 4),iVar1 - iVar3,0);
      }
      else {
        FUN_004345a0(*(int **)(param_1 + 4),0,iVar1 - iVar3);
      }
      if ((((*(byte *)(*(int **)(param_1 + 4) + 8) & 0x10) != 0) &&
          (piVar2 = FUN_00444864(*(int **)(param_1 + 4)), piVar2 != (int *)0x0)) &&
         (piVar2[0x8e] != 0)) {
        (**(code **)(*(int *)piVar2[0x8e] + 0xc))();
      }
    }
    FUN_004349e0(*(int **)(param_1 + 4));
    iVar3 = (**(code **)PTR_DAT_004ab7c8)();
    if (iVar3 != *(int *)(param_1 + 0xc)) {
      FUN_004349e0(*(int **)(param_1 + 4));
      (**(code **)PTR_DAT_004ab9e4)();
    }
  }
  else {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}


