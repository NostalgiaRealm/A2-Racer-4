
/* ==== FUN_00436244 @ 00436244 ==== 
 * signature: bool __register FUN_00436244(int param_1, HWND param_2, int param_3, int param_4)
 * body: 00436244-004362a4
 */

bool FUN_00436244(int param_1,HWND param_2,int param_3,int param_4)

{
  bool bVar1;
  BOOL BVar2;
  bool bVar3;
  int local_10;
  int local_c;
  int local_8;
  
  bVar3 = false;
  local_8 = param_3;
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (param_2 != *(HWND *)(param_1 + 100))) {
    FUN_004362a8(param_1);
    *(HWND *)(param_1 + 100) = param_2;
    FUN_00436034(param_2,local_8,param_4,&local_10);
    BVar2 = ImageList_DragEnter(*(HWND *)(param_1 + 100),local_10,local_c);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}


