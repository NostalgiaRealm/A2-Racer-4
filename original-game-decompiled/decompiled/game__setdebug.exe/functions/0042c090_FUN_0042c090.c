
/* ==== FUN_0042c090 @ 0042c090 ==== 
 * signature: bool __register FUN_0042c090(int param_1, HWND param_2, int param_3, int param_4)
 * body: 0042c090-0042c0f0
 */

bool FUN_0042c090(int param_1,HWND param_2,int param_3,int param_4)

{
  bool bVar1;
  BOOL BVar2;
  bool bVar3;
  int local_10;
  int local_c;
  int local_8;
  
  bVar3 = false;
  local_8 = param_3;
  bVar1 = FUN_00430128(param_1);
  if ((bVar1) && (param_2 != *(HWND *)(param_1 + 100))) {
    FUN_0042c0f4(param_1);
    *(HWND *)(param_1 + 100) = param_2;
    FUN_0042bec4(param_2,local_8,param_4,&local_10);
    BVar2 = ImageList_DragEnter(*(HWND *)(param_1 + 100),local_10,local_c);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}


