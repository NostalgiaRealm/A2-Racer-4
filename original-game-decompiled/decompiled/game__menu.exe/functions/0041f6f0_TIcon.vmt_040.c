
/* ==== TIcon.vmt_040 @ 0041f6f0 ==== 
 * signature: undefined TIcon.vmt_040(void)
 * body: 0041f6f0-0041f707
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_040(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    return;
  }
  FUN_00419780((undefined4 *)PTR_PTR_004ab704);
  return;
}


