
/* ==== FUN_0049f6f8 @ 0049f6f8 ==== 
 * signature: undefined FUN_0049f6f8(void)
 * body: 0049f6f8-0049f72e
 */

void FUN_0049f6f8(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  *(char *)(unaff_EBP + -0x75) = *(char *)(unaff_EBP + -0x75) + (char)param_2;
  uVar1 = in(param_2);
  TTimer_set_Enabled(*(int *)(CONCAT31((int3)((uint)param_1 >> 8),uVar1) + 0x308),'\0');
  FUN_0048063c(*(int **)PTR_DAT_004ab694,(undefined4 *)"CDL07_",
               *(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x14));
  return;
}


