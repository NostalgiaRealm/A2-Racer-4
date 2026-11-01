
/* ==== FUN_0042c118 @ 0042c118 ==== 
 * signature: bool __register FUN_0042c118(int param_1, int param_2, int param_3)
 * body: 0042c118-0042c15a
 */

bool FUN_0042c118(int param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int local_14;
  int local_10;
  
  bVar1 = FUN_00430128(param_1);
  if (bVar1) {
    FUN_0042bec4(*(HWND *)(param_1 + 100),param_2,param_3,&local_14);
    BVar2 = ImageList_DragMove(local_14,local_10);
    bVar1 = BVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


