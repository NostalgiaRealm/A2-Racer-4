
/* ==== FUN_00436340 @ 00436340 ==== 
 * signature: bool __register FUN_00436340(int param_1)
 * body: 00436340-00436384
 */

bool FUN_00436340(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_0043a3e4(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    iVar2 = FUN_004362a8(param_1);
    ImageList_EndDrag();
    bVar1 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    FUN_004361a0(param_1,-1);
    ShowCursor(-1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


