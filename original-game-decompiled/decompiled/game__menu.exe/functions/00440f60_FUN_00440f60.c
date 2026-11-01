
/* ==== FUN_00440f60 @ 00440f60 ==== 
 * signature: undefined __register FUN_00440f60(int * param_1)
 * body: 00440f60-00440f89
 */

void FUN_00440f60(int *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1,0,0,0);
  if ((HWND)param_1[0xb] != (HWND)0x0) {
    SendMessageA((HWND)param_1[0xb],0xb015,0,0);
  }
  return;
}


