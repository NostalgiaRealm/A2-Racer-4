
/* ==== TDataObject.vmt_008 @ 0045edc0 ==== 
 * signature: undefined TDataObject.vmt_008(void)
 * body: 0045edc0-0045ee43
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDataObject_vmt_008(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  code *pcStack_118;
  code *pcStack_114;
  byte abStack_10c [256];
  undefined4 *puStack_c;
  int iStack_8;
  
  pcStack_114 = (code *)&stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  pcStack_118 = thunk_FUN_004036bc;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  (**(code **)(*(int *)param_1[1] + 0x40))();
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80((int *)&puStack_c,abStack_10c);
  FUN_00403f28(&iStack_8,(undefined4 *)"---Class: ",puStack_c);
  (**(code **)(*(int *)param_1[1] + 0x34))((int *)param_1[1],iStack_8);
  (**(code **)*param_1)();
  *in_FS_OFFSET = uStack_11c;
  pcStack_114 = FUN_0045ee4b;
  pcStack_118 = (code *)0x45ee43;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


