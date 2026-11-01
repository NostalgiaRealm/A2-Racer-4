
/* ==== TLabel.set_Caption @ 00424814 ==== 
 * signature: undefined __register TLabel.set_Caption(int param_1, uint * param_2)
 * body: 00424814-00424868
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TLabel_set_Caption(int param_1,uint *param_2)

{
  undefined *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  uint *local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = (uint *)0x0;
  uVar2 = 1;
  pcStack_18 = thunk_FUN_00403434;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TLabel_get_Caption(param_1,(int *)&local_8);
  FUN_00403d48(local_8,param_2);
  if (!(bool)uVar2) {
    puVar1 = FUN_00403dfc((undefined *)param_2);
    FUN_004247c0(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00424870;
  pcStack_18 = (code *)0x424868;
  FUN_004039b8((int *)&local_8);
  return;
}


