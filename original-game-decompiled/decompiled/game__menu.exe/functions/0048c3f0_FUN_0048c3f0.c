
/* ==== FUN_0048c3f0 @ 0048c3f0 ==== 
 * signature: undefined FUN_0048c3f0(void)
 * body: 0048c3f0-0048c505
 */

void FUN_0048c3f0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_140;
  undefined *puStack_13c;
  undefined4 *puStack_138;
  char *pcStack_134;
  undefined *puStack_130;
  int iStack_12c;
  undefined4 uStack_128;
  undefined *puStack_124;
  undefined1 *puStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  byte abStack_114 [256];
  int iStack_14;
  undefined4 *puStack_10;
  int *piStack_c;
  int *piStack_8;
  
  puStack_120 = &stack0xfffffffc;
  uStack_11c = 0;
  puStack_118 = (undefined4 *)0x0;
  puStack_10 = (undefined4 *)0x0;
  iStack_14 = 0;
  puStack_124 = &UNK_0048c5aa;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  iStack_12c = 0x48c42e;
  piStack_8 = param_1;
  FUN_00402ee4(*param_1,abStack_114);
  iStack_12c = 0x48c43c;
  FUN_00403e80(&iStack_14,abStack_114);
  iStack_12c = iStack_14;
  puStack_130 = &UNK_0048c5c0;
  pcStack_134 = "WriteToInis";
  puStack_138 = (undefined4 *)0x48c456;
  FUN_00403f9c((int *)&puStack_10,3);
  puStack_138 = puStack_10;
  puStack_13c = (undefined *)0x48c45f;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_138;
  puStack_138 = (undefined4 *)0x48c46b;
  FUN_0045fb90(uVar2,puVar1,0);
  puStack_138 = (undefined4 *)0x48c488;
  FUN_00403f28((int *)&puStack_118,*(undefined4 **)(*(int *)PTR_DAT_004ab694 + 0xb8),
               (undefined4 *)"game.ini");
  puStack_138 = (undefined4 *)0x48c49a;
  piStack_c = FUN_00457d38((int *)&PTR_TIniFile_vmt_000_00457cdc,'\x01',puStack_118);
  puStack_13c = &UNK_0048c506;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = (undefined4 *)&stack0xfffffffc;
  FUN_0048b350(piStack_8,piStack_c);
  FUN_0048bcf0(piStack_8,piStack_c);
  if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x01') {
    FUN_0048b5bc(piStack_8,piStack_c);
  }
  else if (*(char *)(*(int *)PTR_DAT_004ab694 + 0xa8) == '\x02') {
    FUN_0048b7c8(piStack_8,piStack_c);
  }
  *in_FS_OFFSET = uStack_140;
  puStack_138 = (undefined4 *)&UNK_0048c50d;
  puStack_13c = (undefined *)0x48c505;
  FUN_00402f9c(piStack_c);
  return;
}


