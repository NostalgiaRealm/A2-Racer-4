
/* ==== FUN_004ef1d0 @ 004ef1d0 ==== 
 * signature: undefined __fastcall FUN_004ef1d0(int param_1)
 * body: 004ef1d0-004ef1f0
 */

void __fastcall FUN_004ef1d0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    piVar1 = (int *)FUN_004f1d30(param_1);
    (**(code **)(*piVar1 + 0x20))(piVar1);
  }
  FUN_004f1c80(param_1);
  return;
}


