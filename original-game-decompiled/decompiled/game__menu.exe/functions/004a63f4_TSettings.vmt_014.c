
/* ==== TSettings.vmt_014 @ 004a63f4 ==== 
 * signature: undefined TSettings.vmt_014(void)
 * body: 004a63f4-004a653d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSettings_vmt_014(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  byte abStack_114 [256];
  int iStack_14;
  undefined4 *puStack_10;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  puStack_120 = &stack0xfffffffc;
  puStack_10 = (undefined4 *)0x0;
  iStack_14 = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_00402ee4(*param_1,abStack_114);
  FUN_00403e80(&iStack_14,abStack_114);
  FUN_00403f9c((int *)&puStack_10,3);
  puVar1 = puStack_10;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  FUN_0045e350(param_2,auStack_8);
  *(undefined1 *)(param_1 + 2) = auStack_8[0];
  FUN_0045e350(param_2,param_1 + 0xb);
  FUN_0045e350(param_2,param_1 + 4);
  FUN_0045e350(param_2,param_1 + 6);
  FUN_0045e350(param_2,param_1 + 5);
  FUN_0045e370(param_2,param_1 + 7);
  FUN_0045e370(param_2,(int)param_1 + 0x1d);
  FUN_0045e370(param_2,(int)param_1 + 0x1e);
  FUN_0045e370(param_2,(int)param_1 + 0x1f);
  FUN_0045e370(param_2,(int)param_1 + 0x35);
  FUN_0045e370(param_2,param_1 + 0xd);
  FUN_0045e370(param_2,(int)param_1 + 0x3d);
  FUN_0045e370(param_2,(int)param_1 + 0x36);
  FUN_0045e350(param_2,param_1 + 0xc);
  FUN_0045e350(param_2,auStack_c);
  *(undefined1 *)(param_1 + 0xf) = auStack_c[0];
  FUN_0045e350(param_2,param_1 + 8);
  FUN_0045e350(param_2,param_1 + 0xe);
  (**(code **)(*(int *)param_1[3] + 0x14))((int *)param_1[3],param_2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&iStack_14,2);
  return;
}


