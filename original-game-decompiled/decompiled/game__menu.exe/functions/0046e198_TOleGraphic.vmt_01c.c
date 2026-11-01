
/* ==== TOleGraphic.vmt_01c @ 0046e198 ==== 
 * signature: undefined TOleGraphic.vmt_01c(void)
 * body: 0046e198-0046e1c0
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TOleGraphic_vmt_01c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uStack_10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar1 = *(int **)(param_1 + 0x20);
    iVar2 = (**(code **)(*piVar1 + 0x14))();
    if ((iVar2 == 0) && (uStack_10 = (short)piVar1, 0 < uStack_10)) {
      return 0;
    }
  }
  return 1;
}


