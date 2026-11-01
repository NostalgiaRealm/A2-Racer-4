
/* ==== TForm.set_UseDockManager @ 00434c6c ==== 
 * signature: undefined __register TForm.set_UseDockManager(int * param_1, byte param_2, undefined4 param_3)
 * body: 00434c6c-00434ccf
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TForm_set_UseDockManager(int *param_1,byte param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (int *)0x0;
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if ((param_2 != *(byte *)(param_1 + 0x5f)) &&
     (*(byte *)(param_1 + 0x5f) = param_2, ((*(byte *)(param_1 + 8) & 0x10) == 0 & param_2) != 0)) {
    FUN_00403178(param_1,&local_8,param_3);
    FUN_00405878(param_1 + 0x52,local_8);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00434cd7;
  pcStack_18 = (code *)0x434ccf;
  FUN_00405860((int *)&local_8);
  return;
}


