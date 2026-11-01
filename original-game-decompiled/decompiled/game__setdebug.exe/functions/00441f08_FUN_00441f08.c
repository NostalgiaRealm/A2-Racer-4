
/* ==== FUN_00441f08 @ 00441f08 ==== 
 * signature: bool __register FUN_00441f08(int param_1, LPMSG param_2)
 * body: 00441f08-00441f2b
 */

bool FUN_00441f08(int param_1,LPMSG param_2)

{
  BOOL BVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(HWND *)(param_1 + 0xa0) != (HWND)0x0) {
    BVar1 = IsDialogMessageA(*(HWND *)(param_1 + 0xa0),param_2);
    bVar2 = BVar1 != 0;
  }
  return bVar2;
}


