
/* ==== FUN_00419648 @ 00419648 ==== 
 * signature: undefined __register FUN_00419648(int param_1)
 * body: 00419648-00419673
 */

void FUN_00419648(int param_1)

{
  HGDIOBJ h;
  COLORREF color;
  
  h = (HGDIOBJ)FUN_00418228(*(int *)(param_1 + 0xc));
  SelectObject(*(HDC *)(param_1 + 4),h);
  color = FUN_00417d54(*(uint *)(*(int *)(param_1 + 0xc) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 4),color);
  return;
}


