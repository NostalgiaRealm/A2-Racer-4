
/* ==== FUN_00462154 @ 00462154 ==== 
 * signature: undefined __register FUN_00462154(int param_1, undefined4 * param_2)
 * body: 00462154-0046231c
 */

void FUN_00462154(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  int *in_FS_OFFSET;
  undefined4 *local_13c;
  undefined4 *local_138;
  byte *local_134;
  byte *local_130;
  byte *local_12c;
  byte *local_128;
  byte *local_124;
  undefined4 *local_120;
  byte local_11c [220];
  undefined4 uStackY_40;
  undefined4 **ppuStackY_3c;
  code *pcStackY_38;
  int iStack_2c;
  code *pcStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  undefined3 uStack_c;
  byte local_9;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = 0x26;
  do {
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  uStack_c = 0;
  local_9 = 0;
  pcStack_28 = thunk_FUN_004036bc;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  local_8 = param_2;
  piVar1 = (int *)FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',0);
  FUN_00403cf4((int *)&stack0xffffffe8,0x462334);
  FUN_004085ac((uint)local_9,(int *)&stack0xffffffe4);
  FUN_00403f28(&local_14,(undefined4 *)"specs",unaff_ESI);
  pcStackY_38 = (code *)0x4621cc;
  FUN_004603e0(local_8,unaff_EBX,local_14,&local_10,piVar1);
  pcStackY_38 = (code *)0x4621db;
  (**(code **)(*piVar1 + 0xc))(piVar1,0,&local_120);
  pcStackY_38 = (code *)0x4621f1;
  FUN_00403eb8(local_11c,local_120,0xff);
  pcStackY_38 = (code *)0x462201;
  FUN_00402b0c((byte *)(param_1 + 8),local_11c,0x20);
  pcStackY_38 = (code *)0x462213;
  (**(code **)(*piVar1 + 0xc))(piVar1,1,&local_124);
  pcStackY_38 = (code *)0x46221e;
  uVar2 = FUN_00408618(local_124);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  pcStackY_38 = (code *)0x462233;
  (**(code **)(*piVar1 + 0xc))(piVar1,2,&local_128);
  pcStackY_38 = (code *)0x46223e;
  uVar2 = FUN_00408618(local_128);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  pcStackY_38 = (code *)0x462253;
  (**(code **)(*piVar1 + 0xc))(piVar1,3,&local_12c);
  pcStackY_38 = (code *)0x46225e;
  uVar2 = FUN_00408618(local_12c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  pcStackY_38 = (code *)0x462273;
  (**(code **)(*piVar1 + 0xc))(piVar1,4,&local_130);
  pcStackY_38 = (code *)0x46227e;
  uVar2 = FUN_00408618(local_130);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  pcStackY_38 = (code *)0x462293;
  (**(code **)(*piVar1 + 0xc))(piVar1,5,&local_134);
  pcStackY_38 = (code *)0x46229e;
  uVar2 = FUN_00408618(local_134);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  pcStackY_38 = (code *)0x4622b1;
  FUN_004085ac((uint)local_9,(int *)&local_138);
  pcStackY_38 = (code *)0x4622c4;
  FUN_00403f28(&local_14,(undefined4 *)&DAT_00462354,local_138);
  pcStackY_38 = FUN_00462364;
  ppuStackY_3c = &local_13c;
  uStackY_40 = 0x4622dd;
  (**(code **)*local_8)(local_8,unaff_EBX,local_14);
  uStackY_40 = 0x4622eb;
  FUN_00403cb0((int *)(param_1 + 0x2c),local_13c);
  uStackY_40 = 0x4622f2;
  FUN_00402f9c(piVar1);
  *in_FS_OFFSET = (int)ppuStackY_3c;
  pcStackY_38 = (code *)0x46230f;
  FUN_00403c80((int *)&local_13c,8);
  pcStackY_38 = (code *)0x46231c;
  FUN_00403c80((int *)&stack0xffffffe4,4);
  return;
}


