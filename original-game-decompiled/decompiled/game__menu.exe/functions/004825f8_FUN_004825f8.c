
/* ==== FUN_004825f8 @ 004825f8 ==== 
 * signature: undefined FUN_004825f8(void)
 * body: 004825f8-004826e8
 */

void FUN_004825f8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined1 *puStack_11c;
  int iStack_114;
  byte abStack_110 [256];
  int iStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_11c = &stack0xfffffffc;
  iStack_114 = 0;
  puStack_c = (undefined4 *)0x0;
  iStack_10 = 0;
  puStack_8 = (undefined4 *)0x0;
  puStack_120 = &UNK_004826e9;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  FUN_00402ee4(*param_1,abStack_110);
  FUN_00403e80(&iStack_10,abStack_110);
  FUN_00403f9c((int *)&puStack_c,3);
  puVar2 = puStack_c;
  uVar3 = FUN_0045f46c();
  FUN_0045fb90(uVar3,puVar2,2);
  FUN_00403f28((int *)&puStack_8,(undefined4 *)param_1[3],(undefined4 *)"menumsc.wav");
  uVar4 = FUN_004087a4((undefined *)puStack_8);
  if ((char)uVar4 == '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_00403f28(&iStack_114,(undefined4 *)"unable to load music : ",puStack_8);
    iVar1 = iStack_114;
    uVar3 = FUN_0045f46c();
    FUN_0045fe38(uVar3,iVar1);
  }
  else {
    FUN_00454340(param_1[4],(undefined *)puStack_8);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  *in_FS_OFFSET = "LoadMusic";
  FUN_00403c5c(&iStack_114);
  FUN_00403c80(&iStack_10,3);
  return;
}


