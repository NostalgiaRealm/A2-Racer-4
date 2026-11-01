
/* ==== FUN_0046abfc @ 0046abfc ==== 
 * signature: uint __register FUN_0046abfc(int * param_1, int param_2)
 * body: 0046abfc-0046ac6f
 */

uint FUN_0046abfc(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  
  uVar2 = 0;
  iVar5 = param_1[0x7f];
  if (iVar5 != param_1[0x80]) {
    uVar2 = TForm_get_ClientWidth(param_1);
    iVar4 = (int)((longlong)param_1[0x86] * 2);
    if ((longlong)iVar4 != (longlong)param_1[0x86] * 2) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar4 = extraout_EDX;
    }
    uVar3 = uVar2 - iVar4;
    if (SBORROW4(uVar2,iVar4)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    if (SBORROW4(param_2,iVar5)) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    lVar1 = (longlong)(int)uVar3 * (longlong)(param_2 - iVar5);
    uVar3 = (uint)lVar1;
    if ((int)uVar3 != lVar1) {
      uVar3 = thunk_FUN_00402808(uVar3);
    }
    iVar5 = param_1[0x80] - param_1[0x7f];
    if (SBORROW4(param_1[0x80],param_1[0x7f])) {
      uVar3 = thunk_FUN_00402808(uVar3);
      iVar5 = extraout_EDX_00;
    }
    uVar2 = (int)uVar3 / iVar5 + param_1[0x86];
    if (SCARRY4((int)uVar3 / iVar5,param_1[0x86])) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
  }
  return uVar2;
}


