
/* ==== FUN_0042c18c @ 0042c18c ==== 
 * signature: bool __register FUN_0042c18c(int param_1)
 * body: 0042c18c-0042c1d0
 */

bool FUN_0042c18c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00430128(param_1);
  if ((bVar1) && (*(char *)(param_1 + 0x62) != '\0')) {
    iVar2 = FUN_0042c0f4(param_1);
    ImageList_EndDrag();
    bVar1 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    FUN_0042c018(param_1,-1);
    ShowCursor(-1);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


