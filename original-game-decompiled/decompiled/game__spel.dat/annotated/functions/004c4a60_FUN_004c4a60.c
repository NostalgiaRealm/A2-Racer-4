
/* ==== FUN_004c4a60 @ 004c4a60 ==== 
 * signature: undefined __cdecl FUN_004c4a60(int * param_1)
 * body: 004c4a60-004c4a76
 */

void __cdecl FUN_004c4a60(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x6c))(param_1);
  }
  return;
}


