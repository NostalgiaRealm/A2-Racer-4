
/* ==== FUN_0050d670 @ 0050d670 ==== 
 * signature: undefined __fastcall FUN_0050d670(int * param_1)
 * body: 0050d670-0050d6ba
 */

void __fastcall FUN_0050d670(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&PTR_FUN_0057896c;
  piVar1 = (int *)param_1[0x25];
  if (piVar1 != param_1 + 0x26) {
    if (piVar1 != (int *)0x0) {
      FUN_00559d4e(piVar1);
      param_1[0x25] = 0;
    }
    *(undefined2 *)(param_1 + 0x24) = 0;
  }
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  FUN_004fb600(param_1);
  return;
}


