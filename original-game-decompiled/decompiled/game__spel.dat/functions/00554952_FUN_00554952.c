
/* ==== FUN_00554952 @ 00554952 ==== 
 * signature: int __cdecl FUN_00554952(int param_1)
 * body: 00554952-00554977
 */

int __cdecl FUN_00554952(int param_1)

{
  DAT_0074dbb0 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x554bc4);
  return param_1;
}


