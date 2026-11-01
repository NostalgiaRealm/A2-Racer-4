
/* ==== FUN_0046ab50 @ 0046ab50 ==== 
 * signature: uint __register FUN_0046ab50(int * param_1, int param_2)
 * body: 0046ab50-0046abfa
 */

uint FUN_0046ab50(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint uVar6;
  
  uVar6 = 0;
  iVar1 = TForm_get_ClientWidth(param_1);
  uVar2 = iVar1 - *(int *)(param_1[0x84] + 0x38);
  if (SBORROW4(iVar1,*(int *)(param_1[0x84] + 0x38))) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  iVar1 = param_1[0x86];
  uVar5 = (uint)((longlong)iVar1 * 2);
  if ((longlong)(int)uVar5 != (longlong)iVar1 * 2) {
    uVar2 = thunk_FUN_00402808(uVar2);
    uVar5 = extraout_EDX;
  }
  if (uVar2 != uVar5) {
    iVar3 = TForm_get_ClientWidth(param_1);
    uVar2 = iVar3 - *(int *)(param_1[0x84] + 0x38);
    if (SBORROW4(iVar3,*(int *)(param_1[0x84] + 0x38))) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar3 = (int)((longlong)param_1[0x86] * 2);
    if ((longlong)iVar3 != (longlong)param_1[0x86] * 2) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar3 = extraout_EDX_00;
    }
    uVar5 = uVar2 - iVar3;
    if (SBORROW4(uVar2,iVar3)) {
      uVar5 = thunk_FUN_00402808(uVar5);
    }
    uVar2 = param_2 - iVar1;
    if (SBORROW4(param_2,iVar1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar1 = param_1[0x7f];
    iVar3 = param_1[0x80] - iVar1;
    if (SBORROW4(param_1[0x80],iVar1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar3 = extraout_EDX_01;
    }
    uVar4 = (uint)((longlong)(int)uVar2 * (longlong)iVar3);
    if ((longlong)(int)uVar4 != (longlong)(int)uVar2 * (longlong)iVar3) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    uVar6 = (int)uVar4 / (int)uVar5 + iVar1;
    if (SCARRY4((int)uVar4 / (int)uVar5,iVar1)) {
      uVar6 = thunk_FUN_00402808(uVar6);
    }
  }
  return uVar6;
}


