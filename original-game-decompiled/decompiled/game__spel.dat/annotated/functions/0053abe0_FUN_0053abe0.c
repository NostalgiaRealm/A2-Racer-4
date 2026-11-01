
/* ==== FUN_0053abe0 @ 0053abe0 ==== 
 * signature: undefined __fastcall FUN_0053abe0(void * param_1)
 * body: 0053abe0-0053abfe
 */

void __fastcall FUN_0053abe0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)param_1 + 8);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[0x1f];
    FUN_0053ba40(param_1,piVar2);
    piVar2 = piVar1;
  }
  return;
}


