
/* ==== TCustomActionList.vmt_010 @ 0042f738 ==== 
 * signature: undefined __register TCustomActionList.vmt_010(int param_1, int * param_2, char param_3)
 * body: 0042f738-0042f77e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomActionList_vmt_010(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  TComponent_vmt_010(param_1,(int)param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == *(int **)(param_1 + 0x2c)) {
      FUN_0042f6f8(param_1,0);
    }
    else {
      uVar1 = FUN_00402e8c(param_2,(int)&PTR_TPersistent_vmt_000_0042f050);
      if ((char)uVar1 != '\0') {
        FUN_0042f7a0(param_1,(int)param_2);
      }
    }
  }
  return;
}


