
/* ==== FUN_00436208 @ 00436208 ==== 
 * signature: undefined __register FUN_00436208(int * param_1)
 * body: 00436208-00436277;0043627f-00436282
 */

void FUN_00436208(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  undefined1 local_a;
  char local_9;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  if (PTR_DAT_00446da0[9] != '\0') {
    local_9 = (char)param_1[9];
    local_a = *(undefined1 *)((int)param_1 + 0x35);
    pcStack_14 = thunk_FUN_00403434;
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
    puStack_10 = (undefined1 *)0x43627f;
    pcStack_14 = (code *)0x43626e;
    TMainMenu_set_BiDiMode(local_8,local_9);
    *(undefined1 *)((int)local_8 + 0x35) = local_a;
    return;
  }
  return;
}


