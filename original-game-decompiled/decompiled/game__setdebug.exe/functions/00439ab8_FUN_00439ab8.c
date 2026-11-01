
/* ==== FUN_00439ab8 @ 00439ab8 ==== 
 * signature: bool __register FUN_00439ab8(HWND param_1, uint param_2)
 * body: 00439ab8-00439ad7
 */

bool FUN_00439ab8(HWND param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_00446864;
  SendMessageA(param_1,param_2 & 0xffff,0,0);
  return iVar1 == DAT_00446864;
}


