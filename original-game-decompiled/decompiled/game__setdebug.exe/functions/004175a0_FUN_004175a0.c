
/* ==== FUN_004175a0 @ 004175a0 ==== 
 * signature: undefined __register FUN_004175a0(int param_1)
 * body: 004175a0-004175cb
 */

void FUN_004175a0(int param_1)

{
  HGDIOBJ h;
  COLORREF color;
  
  h = (HGDIOBJ)FUN_004165a0(*(int *)(param_1 + 0xc));
  SelectObject(*(HDC *)(param_1 + 4),h);
  color = FUN_004160cc(*(uint *)(*(int *)(param_1 + 0xc) + 0x18));
  SetTextColor(*(HDC *)(param_1 + 4),color);
  return;
}


