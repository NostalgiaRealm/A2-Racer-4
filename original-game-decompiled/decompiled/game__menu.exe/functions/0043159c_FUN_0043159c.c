
/* ==== FUN_0043159c @ 0043159c ==== 
 * signature: undefined __register FUN_0043159c(int param_1, int * param_2)
 * body: 0043159c-004315e5
 */

void FUN_0043159c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
    if ((char)uVar1 == '\0') {
      FUN_0042d1e0((int *)(param_1 + 0x134),(int)param_2,extraout_ECX);
    }
    else {
      FUN_0042d1e0((int *)(param_1 + 0x180),(int)param_2,extraout_ECX);
      FUN_0042d1e0((int *)(param_1 + 0x16c),(int)param_2,extraout_ECX_00);
    }
    param_2[9] = param_1;
  }
  return;
}


