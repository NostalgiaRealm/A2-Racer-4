
/* ==== FUN_004175fc @ 004175fc ==== 
 * signature: undefined __register FUN_004175fc(int param_1)
 * body: 004175fc-00417674
 */

void FUN_004175fc(int param_1)

{
  HGDIOBJ pvVar1;
  undefined4 uVar2;
  uint uVar3;
  COLORREF color;
  
  pvVar1 = (HGDIOBJ)FUN_00416d90(*(int *)(param_1 + 0x14));
  UnrealizeObject(pvVar1);
  pvVar1 = (HGDIOBJ)FUN_00416d90(*(int *)(param_1 + 0x14));
  SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  uVar2 = TBrush_get_Style(*(int *)(param_1 + 0x14));
  if ((char)uVar2 == '\0') {
    uVar3 = TBrush_get_Color(*(int *)(param_1 + 0x14));
    color = FUN_004160cc(uVar3);
    SetBkColor(*(HDC *)(param_1 + 4),color);
    SetBkMode(*(HDC *)(param_1 + 4),2);
    return;
  }
  uVar3 = TBrush_get_Color(*(int *)(param_1 + 0x14));
  uVar3 = FUN_004160cc(uVar3);
  SetBkColor(*(HDC *)(param_1 + 4),~uVar3);
  SetBkMode(*(HDC *)(param_1 + 4),1);
  return;
}


