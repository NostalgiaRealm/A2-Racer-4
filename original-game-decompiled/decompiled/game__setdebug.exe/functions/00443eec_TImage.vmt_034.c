
/* ==== TImage.vmt_034 @ 00443eec ==== 
 * signature: undefined TImage.vmt_034(void)
 * body: 00443eec-00443f51
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TImage_vmt_034(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    iVar1 = FUN_00419690(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return 1;
    }
    iVar1 = FUN_004196a8(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return 1;
    }
  }
  if ((*(char *)(param_1 + 0x4b) == '\0') || ((byte)(*(char *)(param_1 + 0x4b) - 3U) < 2)) {
    uVar2 = FUN_00419690(*(int *)(param_1 + 0x128));
    *param_2 = uVar2;
  }
  if (*(byte *)(param_1 + 0x4b) < 3) {
    uVar2 = FUN_004196a8(*(int *)(param_1 + 0x128));
    *param_3 = uVar2;
  }
  return 1;
}


