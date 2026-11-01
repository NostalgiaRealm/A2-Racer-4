
/* ==== TOleGraphic.vmt_028 @ 0046e290 ==== 
 * signature: undefined TOleGraphic.vmt_028(void)
 * body: 0046e290-0046e2ad
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

bool TOleGraphic_vmt_028(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    (**(code **)(*piVar1 + 0x40))();
    bVar2 = ((uint)piVar1 & 2) != 0;
  }
  return bVar2;
}


