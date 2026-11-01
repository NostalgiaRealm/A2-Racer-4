
/* ==== TPageControl.vmt_0c0 @ 00486084 ==== 
 * signature: undefined TPageControl.vmt_0c0(void)
 * body: 00486084-004860bb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TPageControl_vmt_0c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_00484b6c(param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_00484b6c(param_1);
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x84] + 0x18))((int *)param_1[0x84],uVar2);
    TPageControl_set_ActivePage(param_1,piVar3);
    return;
  }
  TPageControl_set_ActivePage(param_1,(int *)0x0);
  return;
}


