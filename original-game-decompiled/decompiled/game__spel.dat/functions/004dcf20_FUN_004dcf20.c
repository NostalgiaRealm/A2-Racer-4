
/* ==== FUN_004dcf20 @ 004dcf20 ==== 
 * signature: undefined __fastcall FUN_004dcf20(int * param_1)
 * body: 004dcf20-004dcf45
 */

void __fastcall FUN_004dcf20(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_004da440((int)(param_1 + 10));
    FUN_004da440((int)(param_1 + 0x10));
    FUN_004da440((int)(param_1 + 0x15));
  }
  return;
}


