
/* ==== FUN_00442c38 @ 00442c38 ==== 
 * signature: undefined __register FUN_00442c38(int param_1)
 * body: 00442c38-00442c69
 */

void FUN_00442c38(int param_1)

{
  tagPOINT tStack_c;
  
  FUN_00442b0c(param_1);
  if (*(char *)(param_1 + 0x79) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_00442e88(param_1,&tStack_c.x);
  }
  else if (*(char *)(param_1 + 0x79) == '\x01') {
    FUN_00442c6c(param_1);
  }
  return;
}


