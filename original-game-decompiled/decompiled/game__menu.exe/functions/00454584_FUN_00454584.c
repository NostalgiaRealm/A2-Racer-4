
/* ==== FUN_00454584 @ 00454584 ==== 
 * signature: undefined FUN_00454584(void)
 * body: 00454584-004545f5
 */

void FUN_00454584(int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c) + -1;
  if (-1 < iVar1) {
    do {
      param_3[2] = param_3[2] +
                   (char)(((uint)param_2[2] - (uint)param_3[2]) * (uint)param_2[3] >> 8);
      param_3[1] = param_3[1] +
                   (char)(((uint)param_2[1] - (uint)param_3[1]) * (uint)param_2[3] >> 8);
      *param_3 = *param_3 + (char)(((uint)*param_2 - (uint)*param_3) * (uint)param_2[3] >> 8);
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}


