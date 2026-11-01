
/* ==== FUN_0043a0e0 @ 0043a0e0 ==== 
 * signature: undefined __register FUN_0043a0e0(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 0043a0e0-0043a13c
 */

void FUN_0043a0e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x47) != '\0') {
    if (*(byte *)(param_1 + 0x4b) < 2) {
      if ((*(char *)(param_1 + 0x4b) == '\x01') || ((*(byte *)(param_1 + 0x51) & 10) == 2)) {
        iVar1 = FUN_0041dda4(*(int *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x34) +
                             *(int *)(param_1 + 0x3c));
        *(int *)(param_4 + -4) = iVar1;
      }
    }
    else if (*(byte *)(param_1 + 0x4b) == 2) {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x3c);
    }
  }
  return;
}


