
/* ==== FUN_00449bc8 @ 00449bc8 ==== 
 * signature: undefined __register FUN_00449bc8(int * param_1)
 * body: 00449bc8-00449c46;00449c69-00449c6f
 */

void FUN_00449bc8(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  char local_9;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  pcStack_20 = thunk_FUN_00403408;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_9 = '\0';
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0xd0))();
  if ((cVar1 != '\0') && (local_9 = '\x01', *(short *)((int)local_8 + 0x27a) != 0)) {
    (*(code *)local_8[0x9e])(local_8[0x9f],local_8,&local_9);
  }
  if (local_9 == '\0') {
    local_8[0x8d] = 0;
  }
  else if (local_9 == '\x02') {
    FUN_00449d0c(local_8);
  }
  *in_FS_OFFSET = uStack_24;
  return;
}


