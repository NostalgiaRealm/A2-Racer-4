
/* ==== TSaveGameHeader.vmt_014 @ 0048c970 ==== 
 * signature: undefined TSaveGameHeader.vmt_014(void)
 * body: 0048c970-0048ca0d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSaveGameHeader_vmt_014(int *param_1,int *param_2)

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
  FUN_0045e360(param_2,param_1 + 2);
  FUN_0045e350(param_2,param_1 + 0xf);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403c80(&iStack_c,2);
  return;
}


