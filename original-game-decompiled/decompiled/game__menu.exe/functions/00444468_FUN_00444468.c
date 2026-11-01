
/* ==== FUN_00444468 @ 00444468 ==== 
 * signature: bool __register FUN_00444468(HWND param_1, uint param_2)
 * body: 00444468-00444487
 */

bool FUN_00444468(HWND param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_004aa938;
  SendMessageA(param_1,param_2 & 0xffff,0,0);
  return iVar1 == DAT_004aa938;
}


