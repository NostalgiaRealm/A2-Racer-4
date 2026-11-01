
/* ==== FUN_004d9280 @ 004d9280 ==== 
 * signature: undefined4 __fastcall FUN_004d9280(int param_1)
 * body: 004d9280-004d928f
 */

undefined4 __fastcall FUN_004d9280(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -4;
  *(int *)(param_1 + 8) = iVar1;
  return *(undefined4 *)(*(int *)(param_1 + 4) + iVar1);
}


