
/* ==== FUN_0044ddc4 @ 0044ddc4 ==== 
 * signature: undefined __register FUN_0044ddc4(int param_1)
 * body: 0044ddc4-0044ddf5
 */

void FUN_0044ddc4(int param_1)

{
  tagPOINT tStack_c;
  
  FUN_0044dc98(param_1);
  if (*(char *)(param_1 + 0x79) == '\0') {
    GetCursorPos(&tStack_c);
    FUN_0044e014(param_1,&tStack_c.x);
  }
  else if (*(char *)(param_1 + 0x79) == '\x01') {
    FUN_0044ddf8(param_1);
  }
  return;
}


