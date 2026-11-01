
/* ==== FUN_00480448 @ 00480448 ==== 
 * signature: undefined __register FUN_00480448(int * param_1, undefined4 * param_2)
 * body: 00480448-004804fc;00480516-0048053d
 */

void FUN_00480448(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_140;
  code *pcStack_13c;
  undefined1 *puStack_138;
  int iVar4;
  undefined4 uStack_12c;
  code *pcStack_128;
  undefined1 *puStack_124;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  local_14 = 0;
  puStack_124 = (undefined1 *)0x480466;
  local_8 = param_2;
  FUN_00404090((int)param_2);
  pcStack_128 = thunk_FUN_004036bc;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_10 = local_8;
  local_c = 0xb;
  iVar4 = 0;
  puStack_138 = (undefined1 *)0x480491;
  puStack_124 = &stack0xfffffffc;
  FUN_00402ee4(*param_1,local_114);
  puStack_138 = (undefined1 *)0x48049f;
  FUN_00403e80(&local_14,local_114);
  puStack_138 = (undefined1 *)0x4804ac;
  FUN_00403ee4(&local_14,(undefined4 *)".PlayVoice");
  puStack_138 = (undefined1 *)local_14;
  pcStack_13c = (code *)0x4804b5;
  uVar2 = FUN_0045f46c();
  puVar1 = puStack_138;
  puStack_138 = (undefined1 *)0x4804c1;
  FUN_0045fa3c(uVar2,(int)puVar1,0,iVar4);
  pcStack_13c = thunk_FUN_00403408;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puStack_138 = &stack0xfffffffc;
  FUN_00482950((int *)param_1[0x2c]);
  uVar3 = 1;
  iVar4 = FUN_004807a8((int)param_1);
  FUN_004823ac((int *)param_1[0x2c],local_8,iVar4,(char)uVar3);
  *in_FS_OFFSET = uVar3;
  pcStack_13c = (code *)0x48051b;
  uVar2 = FUN_0045f46c();
  pcStack_13c = (code *)0x480520;
  FUN_0045fc70(uVar2);
  *in_FS_OFFSET = puStack_138;
  FUN_00403c5c(&local_14);
  FUN_00403c5c((int *)&local_8);
  return;
}


