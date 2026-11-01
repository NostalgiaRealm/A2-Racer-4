
/* ==== FUN_004349a0 @ 004349a0 ==== 
 * signature: undefined FUN_004349a0(void)
 * body: 004349a0-004349b7
 */

int FUN_004349a0(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = FUN_00434c54(*(int *)(param_1 + 0x58),param_1);
  }
  return iVar1;
}


