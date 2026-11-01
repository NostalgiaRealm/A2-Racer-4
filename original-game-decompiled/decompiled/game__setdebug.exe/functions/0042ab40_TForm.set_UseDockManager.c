
/* ==== TForm.set_UseDockManager @ 0042ab40 ==== 
 * signature: undefined TForm.set_UseDockManager(void)
 * body: 0042ab40-0042aba3
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_UseDockManager(int *param_1,byte param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  int *piStack_8;
  
  puStack_14 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  puStack_18 = &UNK_0042aba4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != *(byte *)(param_1 + 0x5f)) &&
     (*(byte *)(param_1 + 0x5f) = param_2, ((*(byte *)(param_1 + 8) & 0x10) == 0 & param_2) != 0)) {
    FUN_00402ef0(param_1,&piStack_8,param_3);
    FUN_00405308(param_1 + 0x52,piStack_8);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_0042abab;
  puStack_18 = (undefined *)0x42aba3;
  FUN_004052f0((int *)&piStack_8);
  return;
}


