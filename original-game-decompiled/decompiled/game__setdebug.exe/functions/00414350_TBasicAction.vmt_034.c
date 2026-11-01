
/* ==== TBasicAction.vmt_034 @ 00414350 ==== 
 * signature: undefined TBasicAction.vmt_034(void)
 * body: 00414350-004143a0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TBasicAction_vmt_034
               (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 != param_1[0xc]) {
    iVar2 = *(int *)(param_1[0x10] + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_0040f024((undefined4 *)param_1[0x10],iVar3);
        (**(code **)(*piVar1 + 0x10))();
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_1[0xc] = param_4;
    param_1[0xd] = param_5;
    (**(code **)(*param_1 + 0x30))();
  }
  return;
}


