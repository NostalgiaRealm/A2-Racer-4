
/* ==== TSaveGameHeader.vmt_010 @ 0048ca44 ==== 
 * signature: undefined TSaveGameHeader.vmt_010(void)
 * body: 0048ca44-0048cb61
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TSaveGameHeader_vmt_010(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_128;
  code *pcStack_124;
  undefined1 *puStack_120;
  int iStack_114;
  int iStack_110;
  byte abStack_10c [256];
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_120 = &stack0xfffffffc;
  iStack_110 = 0;
  iStack_114 = 0;
  puStack_8 = (undefined4 *)0x0;
  iStack_c = 0;
  pcStack_124 = thunk_FUN_004036bc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  FUN_00402ee4(*param_1,abStack_10c);
  FUN_00403e80(&iStack_c,abStack_10c);
  FUN_00403f9c((int *)&puStack_8,3);
  puVar1 = puStack_8;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,puVar1,2);
  if (param_1[0xe] == 0) {
    FUN_00402ee4(*param_1,abStack_10c);
    FUN_00403e80(&iStack_114,abStack_10c);
    pcStack_144 = ": Owner of header (Player) = nil";
    FUN_00403f9c(&iStack_110,4);
    FUN_00403c40(iStack_110);
  }
  FUN_0045e398(param_2,param_1 + 2);
  uVar3 = FUN_0048c830((int)param_1);
  FUN_0045e380(param_2,uVar3);
  *in_FS_OFFSET = pcStack_144;
  FUN_00403c80(&iStack_114,2);
  FUN_00403c80(&iStack_c,2);
  return;
}


