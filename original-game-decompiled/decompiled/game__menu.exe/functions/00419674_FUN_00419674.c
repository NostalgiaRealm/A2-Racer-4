
/* ==== FUN_00419674 @ 00419674 ==== 
 * signature: undefined __register FUN_00419674(int param_1)
 * body: 00419674-004196a3
 */

void FUN_00419674(int param_1)

{
  HGDIOBJ h;
  
  h = (HGDIOBJ)FUN_00418728(*(int *)(param_1 + 0x10));
  SelectObject(*(HDC *)(param_1 + 4),h);
  SetROP2(*(HDC *)(param_1 + 4),
          (uint)*(ushort *)(&DAT_004aa5b8 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x18) * 2));
  return;
}


