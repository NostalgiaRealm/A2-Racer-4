
/* ==== FUN_004175cc @ 004175cc ==== 
 * signature: undefined __register FUN_004175cc(int param_1)
 * body: 004175cc-004175fb
 */

void FUN_004175cc(int param_1)

{
  HGDIOBJ h;
  
  h = (HGDIOBJ)FUN_00416aa0(*(int *)(param_1 + 0x10));
  SelectObject(*(HDC *)(param_1 + 4),h);
  SetROP2(*(HDC *)(param_1 + 4),
          (uint)*(ushort *)(&DAT_00446594 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x18) * 2));
  return;
}


