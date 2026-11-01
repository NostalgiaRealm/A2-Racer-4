
/* ==== FUN_004b4070 @ 004b4070 ==== 
 * signature: undefined __cdecl FUN_004b4070(undefined4 * param_1, int param_2)
 * body: 004b4070-004b40a9
 */

void __cdecl FUN_004b4070(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *param_1 = *(undefined4 *)(param_2 + 0x20);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


