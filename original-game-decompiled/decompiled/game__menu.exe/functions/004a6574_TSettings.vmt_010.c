
/* ==== TSettings.vmt_010 @ 004a6574 ==== 
 * signature: undefined TSettings.vmt_010(void)
 * body: 004a6574-004a66b5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSettings_vmt_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  code *pcStack_11c;
  undefined1 *puStack_118;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_118 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_11c = thunk_FUN_004036bc;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 2));
  FUN_0045e380(param_2,param_1[0xb]);
  FUN_0045e380(param_2,param_1[4]);
  FUN_0045e380(param_2,param_1[6]);
  FUN_0045e380(param_2,param_1[5]);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e3a8(param_2);
  FUN_0045e380(param_2,param_1[0xc]);
  FUN_0045e380(param_2,(uint)*(byte *)(param_1 + 0xf));
  FUN_0045e380(param_2,param_1[8]);
  FUN_0045e380(param_2,param_1[0xe]);
  (**(code **)(*(int *)param_1[3] + 0x10))((int *)param_1[3],param_2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&iStack_c,2);
  return;
}


