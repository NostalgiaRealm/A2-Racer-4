
/* ==== FUN_004362cc @ 004362cc ==== 
 * signature: bool __register FUN_004362cc(int param_1, int param_2, int param_3)
 * body: 004362cc-0043630e
 */

bool FUN_004362cc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int local_14;
  int local_10;
  
  bVar1 = FUN_0043a3e4(param_1);
  if (bVar1) {
    FUN_00436034(*(HWND *)(param_1 + 100),param_2,param_3,&local_14);
    BVar2 = ImageList_DragMove(local_14,local_10);
    bVar1 = BVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


