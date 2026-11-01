
/* ==== TDaviGraphicHintWindow.vmt_0bc @ 00469004 ==== 
 * signature: undefined TDaviGraphicHintWindow.vmt_0bc(void)
 * body: 00469004-00469093
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDaviGraphicHintWindow_vmt_0bc
               (int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_18 [4];
  undefined4 uStack_8;
  
  puVar4 = auStack_18;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  uStack_8 = param_3;
  if (param_4 == (int *)0x0) {
    FUN_00403c40("Assertion failure");
  }
  uVar1 = FUN_00403114(param_4,(int)&PTR_TPersistent_vmt_000_0045d61c);
  if ((char)uVar1 == '\0') {
    FUN_00403c40("Assertion failure");
  }
  piVar2 = FUN_0045dd74((int)param_4,6);
  param_1[0x80] = (int)piVar2;
  param_1[0x81] = param_4[0x14];
  THintWindow_vmt_0bc(param_1,auStack_18,uStack_8);
  return;
}


