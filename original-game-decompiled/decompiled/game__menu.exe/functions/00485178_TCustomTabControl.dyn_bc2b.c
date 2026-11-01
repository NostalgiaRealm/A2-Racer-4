
/* ==== TCustomTabControl.dyn_bc2b @ 00485178 ==== 
 * signature: undefined TCustomTabControl.dyn_bc2b(void)
 * body: 00485178-00485255
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomTabControl_dyn_bc2b(int *param_1,int param_2)

{
  int iVar1;
  int nSavedDC;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  
  iVar1 = *(int *)(param_2 + 8);
  nSavedDC = SaveDC(*(HDC *)(iVar1 + 0x18));
  FUN_0041912c(param_1[0x7c]);
  *in_FS_OFFSET = &stack0xffffffdc;
  FUN_00419558((int *)param_1[0x7c],*(int *)(iVar1 + 0x18));
  TCanvas_set_Font(param_1[0x7c]);
  TCanvas_set_Brush(param_1[0x7c]);
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),(*(byte *)(iVar1 + 0x10) & 1) != 0);
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x1c);
  *in_FS_OFFSET = uVar2;
  FUN_00419558((int *)param_1[0x7c],0);
  FUN_004193d0(param_1[0x7c]);
  RestoreDC(*(HDC *)(iVar1 + 0x18),nSavedDC);
  return;
}


