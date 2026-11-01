
/* ==== FUN_00484c78 @ 00484c78 ==== 
 * signature: undefined __register FUN_00484c78(int param_1, char param_2)
 * body: 00484c78-00484cf4
 */

void FUN_00484c78(int param_1,char param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *local_c;
  undefined1 local_5;
  
  pcStack_18 = (code *)&stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_5 = param_2 != *(char *)(param_1 + 0x200);
  if ((bool)local_5) {
    if ((param_2 == '\0') &&
       ((*(char *)(param_1 + 0x20e) == '\x02' || (*(char *)(param_1 + 0x20e) == '\x03')))) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab940,(int *)&local_c);
      FUN_00484278(local_c);
    }
    *(char *)(param_1 + 0x200) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x20c) = 0;
    }
  }
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00484cfc;
  pcStack_1c = (code *)0x484cf4;
  FUN_00403c5c((int *)&local_c);
  return;
}


