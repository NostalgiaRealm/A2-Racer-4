
/* ==== TCustomGDIGraphic.vmt_07c @ 00463f2c ==== 
 * signature: undefined TCustomGDIGraphic.vmt_07c(void)
 * body: 00463f2c-00463f9a
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_07c(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0xa8))();
  cVar1 = (**(code **)(*piVar2 + 0x1c))();
  if (cVar1 == '\0') {
    iVar3 = (**(code **)(*piVar2 + 0x2c))();
    iVar4 = (**(code **)(*piVar2 + 0x20))();
  }
  else {
    iVar3 = 100;
    iVar4 = 0x32;
  }
  FUN_00457194((int *)param_1[0x4c],iVar3,iVar4,0x20);
  TControl_vmt_07c(param_1,param_2,param_3,iVar4,iVar3);
  return;
}


