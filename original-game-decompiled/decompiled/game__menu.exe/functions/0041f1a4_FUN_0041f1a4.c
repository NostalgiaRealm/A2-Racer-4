
/* ==== FUN_0041f1a4 @ 0041f1a4 ==== 
 * signature: undefined FUN_0041f1a4(void)
 * body: 0041f1a4-0041f1d6
 */

int FUN_0041f1a4(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0041e0d4(param_1);
  FUN_0041dc04(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 == *(int *)(iVar1 + 0x14)) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar2;
}


