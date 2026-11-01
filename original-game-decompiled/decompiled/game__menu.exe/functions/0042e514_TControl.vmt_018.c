
/* ==== TControl.vmt_018 @ 0042e514 ==== 
 * signature: undefined __register TControl.vmt_018(int * param_1, uint * param_2)
 * body: 0042e514-0042e5a9
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_018(int *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  uint *local_c;
  uint *local_8;
  
  pcStack_1c = (code *)&stack0xfffffffc;
  local_c = (uint *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pcVar3 = (code *)&stack0xfffffffc;
  local_8 = param_2;
  if (((*(byte *)(param_1 + 0x10) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 8) & 1) == 0, pcVar3 = (code *)&stack0xfffffffc, (bool)uVar5)) {
    TGroupBox_get_Caption((int)param_1,(int *)&local_c);
    FUN_00403fec((uint *)param_1[2],local_c);
    pcVar3 = pcStack_1c;
    if ((bool)uVar5) {
      piVar1 = (int *)param_1[1];
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_00403114(piVar1,(int)&PTR_TControl_vmt_000_0042a694);
        if (((char)uVar4 != '\0') && (pcVar3 = pcStack_1c, (*(byte *)(piVar1 + 8) & 1) != 0))
        goto LAB_0042e576;
      }
      bVar2 = true;
      goto LAB_0042e57c;
    }
  }
LAB_0042e576:
  pcStack_1c = pcVar3;
  bVar2 = false;
LAB_0042e57c:
  TComponent_vmt_018(param_1,local_8);
  if (bVar2) {
    TGroupBox_set_Caption((int)param_1,local_8);
  }
  *in_FS_OFFSET = uStack_24;
  pcStack_1c = FUN_0042e5b1;
  pcStack_20 = (code *)0x42e5a9;
  FUN_00403c5c((int *)&local_c);
  return;
}


