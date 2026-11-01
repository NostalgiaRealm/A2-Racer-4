
/* ==== FUN_0047fdc8 @ 0047fdc8 ==== 
 * signature: undefined FUN_0047fdc8(void)
 * body: 0047fdc8-0047ff11
 */

void FUN_0047fdc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *in_FS_OFFSET;
  char *pcVar5;
  int iStack_138;
  undefined *puStack_134;
  undefined1 *puStack_130;
  undefined4 *puStack_124;
  int iStack_120;
  undefined4 *puStack_11c;
  byte abStack_118 [256];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  undefined4 *puStack_8;
  
  puStack_130 = &stack0xfffffffc;
  puStack_124 = (undefined4 *)0x0;
  iStack_120 = 0;
  puStack_11c = (undefined4 *)0x0;
  iStack_14 = 0;
  iStack_18 = 0;
  puStack_8 = (undefined4 *)0x0;
  puStack_134 = &UNK_0047ff12;
  iStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_138;
  uStack_c = 0;
  uStack_10 = param_2;
  FUN_00402ee4(*param_1,abStack_118);
  FUN_00403e80(&iStack_18,abStack_118);
  pcVar5 = "DeletePlayer";
  FUN_00403f9c(&iStack_14,3);
  iVar1 = iStack_14;
  uVar3 = FUN_0045f46c();
  FUN_0045fa3c(uVar3,iVar1,0,(int)pcVar5);
  FUN_00481178(param_2,(int *)&puStack_11c);
  FUN_00403f28((int *)&puStack_8,(undefined4 *)param_1[0x2e],puStack_11c);
  bVar2 = FUN_004088e4((undefined *)puStack_8);
  if (!bVar2) {
    FUN_00403f28(&iStack_120,(undefined4 *)"failed to delete ",puStack_8);
    iVar1 = iStack_120;
    uVar3 = FUN_0045f46c();
    FUN_0045fe88(uVar3,iVar1);
    FUN_00403f28((int *)&puStack_124,(undefined4 *)"failed to delete ",puStack_8);
    piVar4 = FUN_0040b5d8((int *)&DAT_00407624,'\x01',puStack_124);
    FUN_004036f4(piVar4);
  }
  uVar3 = FUN_0045f46c();
  FUN_0045fc70(uVar3);
  *in_FS_OFFSET = (int)pcVar5;
  FUN_00403c80((int *)&puStack_124,3);
  FUN_00403c80(&iStack_18,2);
  FUN_00403c5c((int *)&puStack_8);
  return;
}


