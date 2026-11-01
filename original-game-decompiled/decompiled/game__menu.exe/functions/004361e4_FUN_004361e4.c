
/* ==== FUN_004361e4 @ 004361e4 ==== 
 * signature: bool __register FUN_004361e4(int * param_1, HWND param_2, int param_3, int param_4)
 * body: 004361e4-00436243
 */

bool FUN_004361e4(int *param_1,HWND param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    if (*(char *)((int)param_1 + 0x62) == '\0') {
      FUN_00436158(param_1,param_1[0x1c],param_1[0x1a],param_1[0x1b]);
    }
    FUN_0043608c((int)param_1);
    bVar2 = FUN_00436244((int)param_1,param_2,param_3,param_4);
    if (bVar2) {
      ShowCursor(0);
    }
  }
  return bVar2;
}


