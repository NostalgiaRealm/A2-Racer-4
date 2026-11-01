
/* ==== TCustomComboBox.dyn_bc2b @ 004285c0 ==== 
 * signature: undefined __register TCustomComboBox.dyn_bc2b(int * param_1, int param_2)
 * body: 004285c0-0042868f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TCustomComboBox_dyn_bc2b(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  ushort uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(ushort *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x10) & 0x1000) != 0) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((*(uint *)(iVar1 + 0x10) & 0x20) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  FUN_00419558((int *)param_1[0x7d],*(int *)(iVar1 + 0x18));
  TCanvas_set_Font(param_1[0x7d]);
  TCanvas_set_Brush(param_1[0x7d]);
  if ((-1 < *(int *)(iVar1 + 8)) && ((uVar2 & 1) != 0)) {
    TBrush_set_Color(*(int **)(param_1[0x7d] + 0x14),0x8000000d);
    TFont_set_Color(*(int **)(param_1[0x7d] + 0xc),-0x7ffffff2,extraout_ECX);
  }
  if (*(int *)(iVar1 + 8) < 0) {
    FUN_0041907c((int *)param_1[0x7d],(RECT *)(iVar1 + 0x1c));
  }
  else {
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined4 *)(iVar1 + 8),iVar1 + 0x1c,uVar2);
  }
  if ((uVar2 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar1 + 0x18),(RECT *)(iVar1 + 0x1c));
  }
  FUN_00419558((int *)param_1[0x7d],0);
  return;
}


