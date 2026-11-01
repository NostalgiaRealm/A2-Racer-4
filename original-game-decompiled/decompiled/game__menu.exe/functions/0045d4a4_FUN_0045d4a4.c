
/* ==== FUN_0045d4a4 @ 0045d4a4 ==== 
 * signature: undefined __register FUN_0045d4a4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0045d4a4-0045d4c5
 */

void FUN_0045d4a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 8) = param_4;
  *(undefined4 *)(iVar1 + 0xc) = param_5;
  return;
}


