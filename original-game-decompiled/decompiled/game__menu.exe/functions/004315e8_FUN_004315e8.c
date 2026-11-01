
/* ==== FUN_004315e8 @ 004315e8 ==== 
 * signature: undefined __register FUN_004315e8(int param_1, int * param_2)
 * body: 004315e8-0043162f
 */

void FUN_004315e8(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403114(param_2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
  if ((char)uVar1 == '\0') {
    FUN_0042d208((int *)(param_1 + 0x134),(int)param_2);
  }
  else {
    FUN_0042d208((int *)(param_1 + 0x16c),(int)param_2);
    FUN_0042d208((int *)(param_1 + 0x180),(int)param_2);
  }
  param_2[9] = 0;
  return;
}


