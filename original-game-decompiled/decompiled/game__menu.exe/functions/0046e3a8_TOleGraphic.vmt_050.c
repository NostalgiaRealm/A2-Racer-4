
/* ==== TOleGraphic.vmt_050 @ 0046e3a8 ==== 
 * signature: undefined TOleGraphic.vmt_050(void)
 * body: 0046e3a8-0046e3e4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleGraphic_vmt_050(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_00405860((int *)(param_1 + 0x20));
  piVar1 = FUN_00415fb8((int *)&PTR_TStreamAdapter_vmt_000_0040f384,'\x01',param_2,0);
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + 5;
  }
  uVar2 = FUN_0046e648(piVar1);
  FUN_0046c2c0(uVar2);
  return;
}


