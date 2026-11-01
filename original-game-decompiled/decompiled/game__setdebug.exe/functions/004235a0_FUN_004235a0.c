
/* ==== FUN_004235a0 @ 004235a0 ==== 
 * signature: undefined __register FUN_004235a0(int param_1)
 * body: 004235a0-004235c8
 */

void FUN_004235a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_00424dbc(*(int *)(param_1 + 0x58));
    if ((char)uVar1 == '\0') {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
    }
  }
  return;
}


