
/* ==== FUN_00554ace @ 00554ace ==== 
 * signature: int __cdecl FUN_00554ace(int param_1)
 * body: 00554ace-00554af3
 */

int __cdecl FUN_00554ace(int param_1)

{
  DAT_0074dbd8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554eb2);
  return param_1;
}


