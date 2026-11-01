
/* ==== FUN_0049b904 @ 0049b904 ==== 
 * signature: undefined FUN_0049b904(void)
 * body: 0049b904-0049b946
 */

undefined4 FUN_0049b904(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0045f46c();
  FUN_0045fb90(uVar1,(undefined4 *)"ShowUnlockDlg",2);
  piVar2 = (int *)TfrmCoolDialog_vmt_02c((int *)&PTR_TWinControl_vmt_000_0049b7d4,'\x01',0);
  uVar3 = (**(code **)(*piVar2 + 0xd8))();
  FUN_00402f9c(piVar2);
  return uVar3;
}


