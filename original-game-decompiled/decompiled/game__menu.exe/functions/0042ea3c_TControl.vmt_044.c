
/* ==== TControl.vmt_044 @ 0042ea3c ==== 
 * signature: undefined __register TControl.vmt_044(int param_1)
 * body: 0042ea3c-0042ead1
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TControl_vmt_044(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 *puVar3;
  code *pcStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x24) == 0) {
    local_c = *(undefined4 *)(param_1 + 8);
    local_8 = 0xb;
    puVar3 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405808((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_10);
    uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_10,in_stack_ffffffd4,puVar3);
    FUN_004036f4(uVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  hdc = (HDC)(**(code **)(**(int **)(param_1 + 0x24) + 0x44))();
  SetViewportOrgEx(hdc,*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34),(LPPOINT)0x0);
  IntersectClipRect(hdc,0,0,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c));
  *in_FS_OFFSET = in_stack_ffffffd4;
  pcStack_24 = FUN_0042ead9;
  FUN_00403c5c((int *)&local_10);
  return;
}


