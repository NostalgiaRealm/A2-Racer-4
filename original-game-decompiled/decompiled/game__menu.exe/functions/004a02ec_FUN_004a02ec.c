
/* ==== FUN_004a02ec @ 004a02ec ==== 
 * signature: undefined FUN_004a02ec(void)
 * body: 004a02ec-004a0302
 */

void FUN_004a02ec(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int unaff_EBP;
  int *piVar2;
  
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  uVar1 = in(param_2);
  piVar2 = (int *)CONCAT31((int3)((uint)param_1 >> 8),uVar1);
  (**(code **)(*piVar2 + 0xe8))(piVar2,&PTR_TWinControl_vmt_000_0049f7c4);
  return;
}


