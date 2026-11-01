
/* ==== TIcon.vmt_034 @ 0041f6d4 ==== 
 * signature: undefined TIcon.vmt_034(void)
 * body: 0041f6d4-0041f6eb
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TIcon_vmt_034(int param_1,undefined4 param_2)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 8) == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return;
  }
  FUN_00419780((undefined4 *)PTR_PTR_004ab704);
  return;
}


