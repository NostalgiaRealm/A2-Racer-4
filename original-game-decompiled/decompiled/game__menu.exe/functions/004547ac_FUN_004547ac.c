
/* ==== FUN_004547ac @ 004547ac ==== 
 * signature: undefined __register FUN_004547ac(int param_1, byte * param_2, byte * param_3, byte param_4)
 * body: 004547ac-0045484f
 */

void FUN_004547ac(int param_1,byte *param_2,byte *param_3,byte param_4)

{
  byte bVar1;
  byte extraout_AH;
  byte extraout_var;
  uint uVar2;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < local_c) {
    do {
      FUN_00456a14(param_1);
      if (((extraout_var != param_2[2]) || (FUN_00456a14(param_1), extraout_AH != param_2[1])) ||
         (bVar1 = FUN_00456a14(param_1), bVar1 != *param_2)) {
        uVar2 = (uint)param_4;
        param_3[2] = param_3[2] + (char)(((uint)param_2[2] - (uint)param_3[2]) * uVar2 >> 8);
        param_3[1] = param_3[1] + (char)(((uint)param_2[1] - (uint)param_3[1]) * uVar2 >> 8);
        *param_3 = *param_3 + (char)(((uint)*param_2 - (uint)*param_3) * uVar2 >> 8);
      }
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      local_c = local_c + -1;
    } while (local_c != -1);
  }
  return;
}


