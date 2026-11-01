
/* ==== FUN_0046ac70 @ 0046ac70 ==== 
 * signature: uint __register FUN_0046ac70(int * param_1)
 * body: 0046ac70-0046acf9
 */

uint FUN_0046ac70(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;
  int extraout_EDX_01;
  
  uVar2 = param_1[0x86];
  iVar5 = param_1[0x7f];
  if (iVar5 != param_1[0x80]) {
    iVar1 = TForm_get_ClientWidth(param_1);
    uVar2 = iVar1 - *(int *)(param_1[0x84] + 0x38);
    if (SBORROW4(iVar1,*(int *)(param_1[0x84] + 0x38))) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar1 = (int)((longlong)param_1[0x86] * 2);
    if ((longlong)iVar1 != (longlong)param_1[0x86] * 2) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar1 = extraout_EDX;
    }
    uVar3 = uVar2 - iVar1;
    if (SBORROW4(uVar2,iVar1)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    iVar1 = param_1[0x81] - iVar5;
    if (SBORROW4(param_1[0x81],iVar5)) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar1 = extraout_EDX_00;
    }
    uVar4 = (uint)((longlong)(int)uVar3 * (longlong)iVar1);
    if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * (longlong)iVar1) {
      uVar4 = thunk_FUN_00402808(uVar4);
    }
    iVar5 = param_1[0x80] - param_1[0x7f];
    if (SBORROW4(param_1[0x80],param_1[0x7f])) {
      uVar4 = thunk_FUN_00402808(uVar4);
      iVar5 = extraout_EDX_01;
    }
    uVar2 = (int)uVar4 / iVar5 + param_1[0x86];
    if (SCARRY4((int)uVar4 / iVar5,param_1[0x86])) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
  }
  return uVar2;
}


