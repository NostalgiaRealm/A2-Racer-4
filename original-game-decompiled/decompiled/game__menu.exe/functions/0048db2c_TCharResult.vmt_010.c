
/* ==== TCharResult.vmt_010 @ 0048db2c ==== 
 * signature: undefined TCharResult.vmt_010(void)
 * body: 0048db2c-0048dc01
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCharResult_vmt_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  code *pcStack_120;
  undefined1 *puStack_11c;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_120 = thunk_FUN_004036bc;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,0);
  TDataObject_vmt_010();
  FUN_0045e380(param_2,param_1[3]);
  FUN_0045e380(param_2,param_1[2]);
  FUN_0045e380(param_2,param_1[4]);
  uVar2 = 0;
  do {
    FUN_0048d8c0((int)param_1,uVar2);
    FUN_0045e3a8(param_2);
    uVar2 = uVar2 + 1;
  } while ((char)uVar2 != '\x05');
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403c80(&iStack_c,2);
  return;
}


