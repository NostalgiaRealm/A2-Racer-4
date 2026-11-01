
/* ==== FUN_0055f875 @ 0055f875 ==== 
 * signature: float10 __cdecl FUN_0055f875(int param_1, int param_2)
 * body: 0055f875-0055f8fc
 */

float10 __cdecl FUN_0055f875(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  iVar1 = FUN_0055f923(param_2);
  if (iVar1 != 0) {
    FUN_0055fae8();
    iVar1 = FUN_00564aa0();
    if (iVar1 == 0) {
      FUN_0055f8fd(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  FUN_0055fae8();
  FUN_0055f8fd(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


