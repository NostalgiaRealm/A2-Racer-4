
/* ==== TWinControlWrapper.vmt_060 @ 00465780 ==== 
 * signature: undefined TWinControlWrapper.vmt_060(void)
 * body: 00465780-004657c2
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TWinControlWrapper_vmt_060(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  TControl_vmt_060(param_1,param_2,param_3);
  iVar1 = FUN_004656b4((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004656b4((int)param_1);
    (**(code **)(*piVar2 + 0x60))(piVar2,param_2);
    uVar4 = 0;
    uVar3 = 0;
    piVar2 = (int *)FUN_004656b4((int)param_1);
    (**(code **)(*piVar2 + 0x7c))(piVar2,0,0,uVar3,uVar4);
  }
  return;
}


