
/* ==== FUN_004b4030 @ 004b4030 ==== 
 * signature: undefined __cdecl FUN_004b4030(undefined4 * param_1, int param_2)
 * body: 004b4030-004b4069
 */

void __cdecl FUN_004b4030(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


