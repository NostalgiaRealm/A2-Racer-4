
/* ==== FUN_00440268 @ 00440268 ==== 
 * signature: undefined __register FUN_00440268(int param_1, int * param_2)
 * body: 00440268-0044029f
 */

void FUN_00440268(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_0040eec8(*(int **)(param_1 + 0x44),(int)param_2);
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_vmt_000_00438838);
  if ((char)uVar1 != '\0') {
    FUN_0040eec8(*(int **)(param_1 + 0x40),(int)param_2);
    FUN_00442a4c(DAT_004477c4);
  }
  return;
}


