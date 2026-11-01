
/* ==== FUN_00554aa8 @ 00554aa8 ==== 
 * signature: int __cdecl FUN_00554aa8(int param_1)
 * body: 00554aa8-00554acd
 */

int __cdecl FUN_00554aa8(int param_1)

{
  DAT_0074dbd4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554e67);
  return param_1;
}


