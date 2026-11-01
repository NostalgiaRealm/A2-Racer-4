
/* ==== FUN_00493d60 @ 00493d60 ==== 
 * signature: undefined __fastcall FUN_00493d60(int param_1)
 * body: 00493d60-00493d80;00493d84-00493ec0
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00493d81-00493d83
 */

void __fastcall FUN_00493d60(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  uint local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s___d__Outline_element_not_init_005ad4c0);
  }
  puVar1 = (uint *)FUN_0047bde0(*(int *)(param_1 + 0x2c));
  local_1c = *puVar1;
  local_14 = local_1c >> 8 & 0xff;
  uVar2 = local_1c >> 0x10;
  local_10 = local_1c >> 0x18;
  uVar4 = local_1c & 0xff;
  fVar5 = FUN_004a6800(0x7128b0);
  local_18 = (float)((float10)0.6 / fVar5);
  fVar5 = FUN_004a6800(0x7128b0);
  *(float *)(param_1 + 0x3c) = (float)(fVar5 + (float10)*(float *)(param_1 + 0x3c));
  uVar2 = FUN_00493d00(uVar2 & 0xff,0x80,0xff);
  local_14 = FUN_00493d00(local_14,0x80,0xff);
  uVar4 = FUN_00493d00(uVar4,0x80,0xff);
  iVar3 = FUN_00493d00(local_10,0xff,0xff);
  local_1c = ((iVar3 << 8 | uVar2) << 8 | local_14) << 8 | uVar4;
  if (0.6 <= *(float *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if (*(char *)(param_1 + 0x38) == '\0') {
      local_1c = 0xff808080;
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
    else {
      local_1c = 0xffffffff;
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  local_c = *(undefined4 *)(iVar3 + 0x18);
  local_8 = *(undefined4 *)(iVar3 + 0x1c);
  local_4 = *(undefined4 *)(iVar3 + 0x20);
  FUN_0047bc50(*(void **)(param_1 + 0x2c),&local_c);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))(&local_1c);
  return;
}


