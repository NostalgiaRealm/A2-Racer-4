
/* ==== TDataModule.vmt_014 @ 0044add8 ==== 
 * signature: undefined TDataModule.vmt_014(void)
 * body: 0044add8-0044ade9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataModule_vmt_014(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)param_3 >> 8),DAT_004ac4d1) ^ 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  TComponent_vmt_014(param_1,param_2,uVar1);
  return;
}


