
/* ==== TCustomForm.vmt_0c0 @ 0043b858 ==== 
 * signature: undefined __register TCustomForm.vmt_0c0(int * param_1, undefined4 param_2, undefined1 * param_3)
 * body: 0043b858-0043b898;0043b8b0-0043b8cb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_0c0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = &stack0xfffffffc;
  if (*(short *)((int)param_1 + 0x2ba) != 0) {
    pcStack_1c = thunk_FUN_00403180;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    (*(code *)param_1[0xae])(param_1[0xaf],param_1);
    *in_FS_OFFSET = uStack_20;
    param_3 = puStack_18;
    param_2 = uStack_20;
  }
  if ((*(byte *)(param_1 + 0xb3) & 2) != 0) {
    puStack_18 = (undefined1 *)0x43b8c6;
    TForm_set_Visible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}


