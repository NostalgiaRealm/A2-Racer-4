
/* ==== FUN_004408e8 @ 004408e8 ==== 
 * signature: undefined __register FUN_004408e8(int * param_1)
 * body: 004408e8-00440957;0044095f-00440962
 */

void FUN_004408e8(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_004aba14[9] != '\0') {
    local_9 = (char)param_1[9];
    local_a = *(undefined1 *)((int)param_1 + 0x35);
    pcStack_14 = thunk_FUN_004036bc;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    local_8 = param_1;
    if (local_9 == '\0') {
      puStack_10 = &stack0xfffffffc;
      TMainMenu_set_BiDiMode(param_1,'\x01');
    }
    else {
      TMainMenu_set_BiDiMode(param_1,'\0');
    }
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x44095f;
    pcStack_14 = (code *)0x44094e;
    TMainMenu_set_BiDiMode(local_8,local_9);
    *(undefined1 *)((int)local_8 + 0x35) = local_a;
    return;
  }
  return;
}


