
/* ==== TBitmap.vmt_01c @ 0041b6e0 ==== 
 * signature: undefined TBitmap.vmt_01c(void)
 * body: 0041b6e0-0041b6f4
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TBitmap_vmt_01c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


