
/* ==== FUN_00454194 @ 00454194 ==== 
 * signature: undefined __register FUN_00454194(uint param_1, int * param_2)
 * body: 00454194-004542b5;004542cd-004542d3
 */

void FUN_00454194(uint param_1,int *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  int local_c;
  uint local_8;
  
  puStack_1c = (undefined1 *)0x4541a9;
  local_8 = param_1;
  uVar1 = FUN_00412664(param_2);
  puStack_1c = (undefined1 *)0x4541bb;
  FUN_004027ac((int *)(local_8 + 0x28),0x2c);
  uVar6 = 1;
  pcStack_20 = thunk_FUN_00403408;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004126b8(param_2,*(undefined4 *)(local_8 + 0x28),0x2c);
  local_c = **(int **)(local_8 + 0x28);
  FUN_00402bc0(&local_c,(int *)&DAT_004aac4c,4);
  if (!(bool)uVar6) {
    FUN_00403c40("Geen geldig wave bestand.");
  }
  puVar2 = (uint *)(*(uint *)(local_8 + 0x28) + 0x28);
  if (0xffffffd7 < *(uint *)(local_8 + 0x28)) {
    puVar2 = (uint *)thunk_FUN_00402808((uint)puVar2);
  }
  uVar3 = *puVar2;
  *(uint *)(local_8 + 0x34) = uVar3;
  iVar5 = uVar3 + 0x2c;
  if (0xffffffd3 < uVar3) {
    thunk_FUN_00402808(uVar3);
    iVar5 = extraout_EDX;
  }
  *(int *)(local_8 + 0x2c) = iVar5;
  FUN_004027ac((int *)(local_8 + 0x28),iVar5);
  FUN_00412674(param_2,uVar1);
  iVar5 = *(int *)(local_8 + 0x2c);
  if (iVar5 < 0) {
    thunk_FUN_00402808(local_8);
    iVar5 = extraout_ECX;
  }
  FUN_004126b8(param_2,*(undefined4 *)(local_8 + 0x28),iVar5);
  uVar3 = *(uint *)(local_8 + 0x28) + 0x14;
  if (0xffffffeb < *(uint *)(local_8 + 0x28)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  *(uint *)(local_8 + 0x30) = uVar3;
  puVar4 = (undefined4 *)(*(uint *)(local_8 + 0x28) + 0x28);
  if (0xffffffd7 < *(uint *)(local_8 + 0x28)) {
    puVar4 = (undefined4 *)thunk_FUN_00402808((uint)puVar4);
  }
  *(undefined4 *)(local_8 + 0x34) = *puVar4;
  uVar3 = *(uint *)(local_8 + 0x28) + 0x2c;
  if (0xffffffd3 < *(uint *)(local_8 + 0x28)) {
    uVar3 = thunk_FUN_00402808(uVar3);
  }
  *(uint *)(local_8 + 0x38) = uVar3;
  *in_FS_OFFSET = uStack_24;
  return;
}


