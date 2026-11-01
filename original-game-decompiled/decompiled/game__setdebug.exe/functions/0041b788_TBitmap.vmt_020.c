
/* ==== TBitmap.vmt_020 @ 0041b788 ==== 
 * signature: undefined TBitmap.vmt_020(void)
 * body: 0041b788-0041b795
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

int TBitmap_vmt_020(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x20) + 0x20);
  uVar2 = (int)uVar1 >> 0x1f;
  return (uVar1 ^ uVar2) - uVar2;
}


