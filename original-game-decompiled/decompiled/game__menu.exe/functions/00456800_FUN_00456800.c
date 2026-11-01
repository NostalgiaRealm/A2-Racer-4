
/* ==== FUN_00456800 @ 00456800 ==== 
 * signature: undefined4 __register FUN_00456800(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 00456800-00456868
 */

undefined4 FUN_00456800(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00456704(param_1,param_2,param_3);
    piVar2 = FUN_00418b34((int *)&PTR_TPersistent_vmt_000_00416dc0,'\x01',extraout_ECX);
    *(int **)(param_1 + 0x20) = piVar2;
    FUN_00419558(piVar2,*(int *)(*(int *)(param_1 + 0x24) + 0x420));
    if (*(int *)(*(int *)(param_1 + 0x24) + 0x420) == 0) {
      FUN_00403c40(
                  "DIB does not yet have an image/canvas.\r\nEither assign an image to the DIB or call it\'s SetSize method."
                  );
    }
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(iVar1 + 0x34) = param_1;
    *(code **)(iVar1 + 0x30) = FUN_00456654;
  }
  return *(undefined4 *)(param_1 + 0x20);
}


