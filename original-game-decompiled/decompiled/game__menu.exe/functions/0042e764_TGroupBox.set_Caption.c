
/* ==== TGroupBox.set_Caption @ 0042e764 ==== 
 * signature: undefined __register TGroupBox.set_Caption(int param_1, uint * param_2)
 * body: 0042e764-0042e7b8
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TGroupBox_set_Caption(int param_1,uint *param_2)

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
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  TGroupBox_get_Caption(param_1,(int *)&local_8);
  FUN_00403fec(local_8,param_2);
  if (!(bool)uVar2) {
    puVar1 = FUN_004040a0((undefined *)param_2);
    FUN_0042e710(param_1,puVar1);
  }
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_0042e7c0;
  pcStack_18 = (code *)0x42e7b8;
  FUN_00403c5c((int *)&local_8);
  return;
}


