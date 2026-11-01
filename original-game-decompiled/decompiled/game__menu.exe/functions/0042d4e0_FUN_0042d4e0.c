
/* ==== FUN_0042d4e0 @ 0042d4e0 ==== 
 * signature: undefined __register FUN_0042d4e0(int param_1)
 * body: 0042d4e0-0042d508
 */

void FUN_0042d4e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = FUN_0042ed5c(*(int *)(param_1 + 0x58));
    if ((char)uVar1 == '\0') {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xffffff7f;
    }
    else {
      *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x80;
    }
  }
  return;
}


