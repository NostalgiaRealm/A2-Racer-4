
/* ==== FUN_0044be88 @ 0044be88 ==== 
 * signature: undefined __register FUN_0044be88(HWND param_1, int param_2)
 * body: 0044be88-0044beb6
 */

void FUN_0044be88(HWND param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_0044be30();
  if (bVar1) {
    FUN_0044be60('\0');
  }
  ShowWindow(param_1,param_2);
  if (bVar1) {
    FUN_0044be60('\x01');
  }
  return;
}


