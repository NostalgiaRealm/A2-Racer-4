
/* ==== FUN_00440ee8 @ 00440ee8 ==== 
 * signature: undefined __register FUN_00440ee8(HWND param_1, int param_2)
 * body: 00440ee8-00440f16
 */

void FUN_00440ee8(HWND param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00440e90();
  if (bVar1) {
    FUN_00440ec0('\0');
  }
  ShowWindow(param_1,param_2);
  if (bVar1) {
    FUN_00440ec0('\x01');
  }
  return;
}


