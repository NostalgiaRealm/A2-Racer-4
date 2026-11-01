
/* ==== TButtonActionLink.vmt_044 @ 004287c8 ==== 
 * signature: undefined TButtonActionLink.vmt_044(void)
 * body: 004287c8-0042881d;00428825-00428828
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TButtonActionLink_vmt_044(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x4287da;
  cVar2 = (**(code **)(*param_1 + 0x24))();
  if (cVar2 != '\0') {
    piVar1 = (int *)param_1[10];
    *(undefined1 *)(piVar1 + 0x7c) = 1;
    pcStack_14 = thunk_FUN_004036bc;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
    *in_FS_OFFSET = uStack_18;
    *(undefined1 *)(param_1[10] + 0x1f0) = 0;
    return;
  }
  return;
}


