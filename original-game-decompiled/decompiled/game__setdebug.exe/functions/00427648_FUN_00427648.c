
/* ==== FUN_00427648 @ 00427648 ==== 
 * signature: undefined __register FUN_00427648(int param_1, int * param_2)
 * body: 00427648-0042768f
 */

void FUN_00427648(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_vmt_000_00420fa8);
  if ((char)uVar1 == '\0') {
    FUN_004232c8((int *)(param_1 + 0x134),(int)param_2);
  }
  else {
    FUN_004232c8((int *)(param_1 + 0x16c),(int)param_2);
    FUN_004232c8((int *)(param_1 + 0x180),(int)param_2);
  }
  param_2[9] = 0;
  return;
}


