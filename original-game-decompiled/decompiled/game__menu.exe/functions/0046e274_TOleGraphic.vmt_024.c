
/* ==== TOleGraphic.vmt_024 @ 0046e274 ==== 
 * signature: undefined TOleGraphic.vmt_024(void)
 * body: 0046e274-0046e28d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int * TOleGraphic_vmt_024(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1;
}


