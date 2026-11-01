
/* ==== TGDIHintWindow.vmt_0bc @ 004661bc ==== 
 * signature: undefined TGDIHintWindow.vmt_0bc(void)
 * body: 004661bc-00466203
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TGDIHintWindow_vmt_0bc(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_14 [4];
  
  puVar2 = auStack_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_00465fd0(param_1);
  FUN_0046678c(iVar1,auStack_14,param_3,param_4);
  (**(code **)(*param_1 + 0xb8))(param_1,auStack_14,param_3);
  return;
}


