
/* ==== FUN_00554978 @ 00554978 ==== 
 * signature: int __cdecl FUN_00554978(int param_1)
 * body: 00554978-0055499d
 */

int __cdecl FUN_00554978(int param_1)

{
  DAT_0074dbb4 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554c0f);
  return param_1;
}


