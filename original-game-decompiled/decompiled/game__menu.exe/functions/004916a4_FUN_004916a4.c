
/* ==== FUN_004916a4 @ 004916a4 ==== 
 * signature: undefined __register FUN_004916a4(int param_1, int param_2, undefined4 param_3, int param_4)
 * body: 004916a4-0049170e
 */

void FUN_004916a4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(uint *)(param_1 + 4) + 8);
  if (SBORROW4(iVar5,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 4));
  }
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_00491684(param_1,iVar4);
      iVar2 = (int)((longlong)iVar4 * (longlong)param_4);
      if ((longlong)iVar2 != (longlong)iVar4 * (longlong)param_4) {
        piVar1 = (int *)thunk_FUN_00402808((uint)piVar1);
        iVar2 = extraout_EDX;
      }
      iVar3 = iVar2 + param_2;
      if (SCARRY4(iVar2,param_2)) {
        piVar1 = (int *)thunk_FUN_00402808((uint)piVar1);
        iVar3 = extraout_EDX_00;
      }
      TControl_set_Left(piVar1,iVar3);
      piVar1 = (int *)FUN_00491684(param_1,iVar4);
      TControl_set_Top(piVar1,param_3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


