
/* ==== FUN_00436158 @ 00436158 ==== 
 * signature: bool __register FUN_00436158(int * param_1, int param_2, int param_3, int param_4)
 * body: 00436158-0043619d
 */

bool FUN_00436158(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  HIMAGELIST himlTrack;
  
  bVar1 = FUN_0043a3e4((int)param_1);
  if (bVar1) {
    param_1[0x1c] = param_2;
    param_1[0x1a] = param_3;
    param_1[0x1b] = param_4;
    himlTrack = (HIMAGELIST)FUN_0043a5b8(param_1);
    ImageList_BeginDrag(himlTrack,param_2,param_3,param_4);
    *(undefined1 *)((int)param_1 + 0x62) = 1;
  }
  return bVar1;
}


