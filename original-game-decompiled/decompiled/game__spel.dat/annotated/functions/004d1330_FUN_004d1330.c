
/* ==== FUN_004d1330 @ 004d1330 ==== 
 * signature: int __cdecl FUN_004d1330(int param_1)
 * body: 004d1330-004d1357
 */

int __cdecl FUN_004d1330(int param_1)

{
  DAT_0074b890 = param_1;
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_005584e0(0x4d1360);
  return param_1;
}


