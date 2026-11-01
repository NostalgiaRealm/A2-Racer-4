
/* ==== TComponentList.vmt_004 @ 004200dc ==== 
 * signature: undefined TComponentList.vmt_004(void)
 * body: 004200dc-00420142
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TComponentList_vmt_004(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  
  uVar3 = param_3;
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar2 = TComponent_vmt_02c((int *)&PTR_TPersistent_vmt_000_0041ffdc,'\x01',(int *)0x0);
    *(int **)(param_1 + 0x14) = piVar2;
    piVar2[0xb] = param_1;
    piVar2[10] = (int)FUN_004200cc;
    uVar3 = extraout_ECX;
  }
  cVar1 = (char)param_3;
  if (cVar1 == '\0') {
    if (param_2 != (int *)0x0) {
      FUN_0041564c((int)param_2,*(int *)(param_1 + 0x14),uVar3);
    }
  }
  else if (((byte)(cVar1 - 1U) < 2) && (param_2 != (int *)0x0)) {
    FUN_0041587c((int)param_2,*(int *)(param_1 + 0x14));
  }
  TObjectList_vmt_004(param_1,param_2,cVar1);
  return;
}


