
/* ==== TImage.vmt_034 @ 0044ffc0 ==== 
 * signature: undefined TImage.vmt_034(void)
 * body: 0044ffc0-00450025
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

undefined4 TImage_vmt_034(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x20) & 0x10) != 0) {
    iVar1 = FUN_0041b9ac(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return 1;
    }
    iVar1 = FUN_0041b9c4(*(int *)(param_1 + 0x128));
    if (iVar1 < 1) {
      return 1;
    }
  }
  if ((*(char *)(param_1 + 0x4b) == '\0') || ((byte)(*(char *)(param_1 + 0x4b) - 3U) < 2)) {
    uVar2 = FUN_0041b9ac(*(int *)(param_1 + 0x128));
    *param_2 = uVar2;
  }
  if (*(byte *)(param_1 + 0x4b) < 3) {
    uVar2 = FUN_0041b9c4(*(int *)(param_1 + 0x128));
    *param_3 = uVar2;
  }
  return 1;
}


