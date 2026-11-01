
/* ==== FUN_00560a6a @ 00560a6a ==== 
 * signature: uint __cdecl FUN_00560a6a(int * param_1, undefined4 * param_2)
 * body: 00560a6a-00560a8d
 */

uint __cdecl FUN_00560a6a(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  void *this;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_00560a39(param_2);
    uVar2 = FUN_0055ac61(this,uVar1);
  } while (uVar2 != 0);
  return uVar1;
}


