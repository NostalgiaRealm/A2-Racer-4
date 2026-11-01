
/* ==== FUN_00558efd @ 00558efd ==== 
 * signature: undefined __cdecl FUN_00558efd(undefined1 * param_1, undefined1 * param_2, int param_3)
 * body: 00558efd-00558f28
 */

void __cdecl FUN_00558efd(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


