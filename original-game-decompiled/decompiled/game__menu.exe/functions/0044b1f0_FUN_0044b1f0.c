
/* ==== FUN_0044b1f0 @ 0044b1f0 ==== 
 * signature: undefined __register FUN_0044b1f0(int param_1, int * param_2)
 * body: 0044b1f0-0044b227
 */

void FUN_0044b1f0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_00410104(*(int **)(param_1 + 0x44),(int)param_2);
  uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_00442fd4);
  if ((char)uVar1 != '\0') {
    FUN_00410104(*(int **)(param_1 + 0x40),(int)param_2);
    FUN_0044dbd8(DAT_004ac7d4);
  }
  return;
}


