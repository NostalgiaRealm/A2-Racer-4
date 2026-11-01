
/* ==== FUN_004275fc @ 004275fc ==== 
 * signature: undefined __register FUN_004275fc(int param_1, int * param_2)
 * body: 004275fc-00427645
 */

void FUN_004275fc(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00402e8c(param_2,(int)&PTR_TWinControl_vmt_000_00420fa8);
    if ((char)uVar1 == '\0') {
      FUN_004232a0((int *)(param_1 + 0x134),(int)param_2,extraout_ECX);
    }
    else {
      FUN_004232a0((int *)(param_1 + 0x180),(int)param_2,extraout_ECX);
      FUN_004232a0((int *)(param_1 + 0x16c),(int)param_2,extraout_ECX_00);
    }
    param_2[9] = param_1;
  }
  return;
}


