
/* ==== FUN_0041a560 @ 0041a560 ==== 
 * signature: undefined __register FUN_0041a560(int * param_1)
 * body: 0041a560-0041a5f3;0041a5fb-0041a5fe
 */

void FUN_0041a560(int *param_1)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (param_1[1] != 0) {
    puStack_10 = (undefined1 *)0x41a57d;
    FUN_00417174((int)param_1);
    pcStack_14 = thunk_FUN_00403434;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    if ((HGDIOBJ)param_1[0x17] != (HGDIOBJ)0x0) {
      puStack_10 = &stack0xfffffffc;
      SelectObject((HDC)param_1[1],(HGDIOBJ)param_1[0x17]);
    }
    if ((HPALETTE)param_1[0x18] != (HPALETTE)0x0) {
      SelectPalette((HDC)param_1[1],(HPALETTE)param_1[0x18],-1);
    }
    hdc = (HDC)param_1[1];
    FUN_004174b0(param_1,0);
    DeleteDC(hdc);
    FUN_0040f3a0(DAT_004465bc,(int)param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41a5fb;
    pcStack_14 = (code *)0x41a5f3;
    FUN_00417328((int)param_1);
    return;
  }
  return;
}


