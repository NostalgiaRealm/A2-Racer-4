
/* ==== FUN_0042bfd0 @ 0042bfd0 ==== 
 * signature: bool __register FUN_0042bfd0(int * param_1, int param_2, int param_3, int param_4)
 * body: 0042bfd0-0042c015
 */

bool FUN_0042bfd0(int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  HIMAGELIST himlTrack;
  
  bVar1 = FUN_00430128((int)param_1);
  if (bVar1) {
    param_1[0x1c] = param_2;
    param_1[0x1a] = param_3;
    param_1[0x1b] = param_4;
    himlTrack = (HIMAGELIST)FUN_00430264(param_1);
    ImageList_BeginDrag(himlTrack,param_2,param_3,param_4);
    *(undefined1 *)((int)param_1 + 0x62) = 1;
  }
  return bVar1;
}


