
/* ==== FUN_0042c030 @ 0042c030 ==== 
 * signature: bool __register FUN_0042c030(int * param_1, HWND param_2, int param_3, int param_4)
 * body: 0042c030-0042c08f
 */

bool FUN_0042c030(int *param_1,HWND param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    if (*(char *)((int)param_1 + 0x62) == '\0') {
      FUN_0042bfd0(param_1,param_1[0x1c],param_1[0x1a],param_1[0x1b]);
    }
    FUN_0042bf04((int)param_1);
    bVar2 = FUN_0042c090((int)param_1,param_2,param_3,param_4);
    if (bVar2) {
      ShowCursor(0);
    }
  }
  return bVar2;
}


