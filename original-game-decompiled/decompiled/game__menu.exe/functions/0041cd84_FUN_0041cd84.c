
/* ==== FUN_0041cd84 @ 0041cd84 ==== 
 * signature: undefined __register FUN_0041cd84(int * param_1)
 * body: 0041cd84-0041ce17;0041ce1f-0041ce22
 */

void FUN_0041cd84(int *param_1)

{
  HDC hdc;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (param_1[1] != 0) {
    puStack_10 = (undefined1 *)0x41cda1;
    FUN_0041912c((int)param_1);
    pcStack_14 = thunk_FUN_004036bc;
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
    FUN_00419558(param_1,0);
    DeleteDC(hdc);
    FUN_00410764(DAT_004aa5e0,(int)param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41ce1f;
    pcStack_14 = (code *)0x41ce17;
    FUN_004193d0((int)param_1);
    return;
  }
  return;
}


