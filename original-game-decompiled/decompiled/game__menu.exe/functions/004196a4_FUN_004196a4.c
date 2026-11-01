
/* ==== FUN_004196a4 @ 004196a4 ==== 
 * signature: undefined __register FUN_004196a4(int param_1)
 * body: 004196a4-0041971c
 */

void FUN_004196a4(int param_1)

{
  HGDIOBJ pvVar1;
  undefined4 uVar2;
  uint uVar3;
  COLORREF color;
  
  pvVar1 = (HGDIOBJ)FUN_00418a18(*(int *)(param_1 + 0x14));
  UnrealizeObject(pvVar1);
  pvVar1 = (HGDIOBJ)FUN_00418a18(*(int *)(param_1 + 0x14));
  SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  uVar2 = TBrush_get_Style(*(int *)(param_1 + 0x14));
  if ((char)uVar2 == '\0') {
    uVar3 = TBrush_get_Color(*(int *)(param_1 + 0x14));
    color = FUN_00417d54(uVar3);
    SetBkColor(*(HDC *)(param_1 + 4),color);
    SetBkMode(*(HDC *)(param_1 + 4),2);
    return;
  }
  uVar3 = TBrush_get_Color(*(int *)(param_1 + 0x14));
  uVar3 = FUN_00417d54(uVar3);
  SetBkColor(*(HDC *)(param_1 + 4),~uVar3);
  SetBkMode(*(HDC *)(param_1 + 4),1);
  return;
}


