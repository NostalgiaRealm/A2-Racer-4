
/* ==== FUN_004d6580 @ 004d6580 ==== 
 * signature: int __cdecl FUN_004d6580(int param_1)
 * body: 004d6580-004d65a7
 */

int __cdecl FUN_004d6580(int param_1)

{
  DAT_0074b8a8 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x4d6670);
  return param_1;
}


