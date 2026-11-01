
/* ==== FUN_004545f8 @ 004545f8 ==== 
 * signature: undefined __register FUN_004545f8(int param_1, byte * param_2, byte * param_3, byte param_4)
 * body: 004545f8-00454682
 */

void FUN_004545f8(int param_1,byte *param_2,byte *param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < local_8) {
    do {
      uVar1 = (uint)param_4 * (uint)param_2[3] >> 8;
      iVar2 = 0x100 - uVar1;
      param_3[2] = (byte)(param_2[2] * uVar1 + (uint)param_3[2] * iVar2 >> 8);
      param_3[1] = (byte)(param_2[1] * uVar1 + (uint)param_3[1] * iVar2 >> 8);
      *param_3 = (byte)(*param_2 * uVar1 + (uint)*param_3 * iVar2 >> 8);
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != -1);
  }
  return;
}


