
/* ==== FUN_00454738 @ 00454738 ==== 
 * signature: undefined __register FUN_00454738(int param_1, byte * param_2, byte * param_3, uint param_4)
 * body: 00454738-004547aa
 */

void FUN_00454738(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < local_8) {
    do {
      uVar1 = param_4 & 0xff;
      param_3[2] = param_3[2] + (char)(((uint)param_2[2] - (uint)param_3[2]) * uVar1 >> 8);
      param_3[1] = param_3[1] + (char)(((uint)param_2[1] - (uint)param_3[1]) * uVar1 >> 8);
      *param_3 = *param_3 + (char)(((uint)*param_2 - (uint)*param_3) * uVar1 >> 8);
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != -1);
  }
  return;
}


