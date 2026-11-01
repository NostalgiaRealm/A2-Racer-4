
/* ==== TIcon.vmt_01c @ 0041f410 ==== 
 * signature: undefined TIcon.vmt_01c(void)
 * body: 0041f410-0041f424
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TIcon_vmt_01c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0xc) == 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


