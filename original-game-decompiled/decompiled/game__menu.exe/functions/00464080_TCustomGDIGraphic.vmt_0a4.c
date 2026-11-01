
/* ==== TCustomGDIGraphic.vmt_0a4 @ 00464080 ==== 
 * signature: undefined TCustomGDIGraphic.vmt_0a4(void)
 * body: 00464080-004640ba
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomGDIGraphic_vmt_0a4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0xa8))();
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  uVar3 = (**(code **)(*piVar1 + 0x20))();
  (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],uVar3,uVar2);
  (**(code **)(*param_1 + 0x74))();
  return;
}


