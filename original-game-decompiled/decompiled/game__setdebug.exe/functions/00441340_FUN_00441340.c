
/* ==== FUN_00441340 @ 00441340 ==== 
 * signature: undefined __register FUN_00441340(int param_1, int param_2)
 * body: 00441340-0044139f
 */

void FUN_00441340(int param_1,int param_2)

{
  if (param_2 == *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x3c)) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (param_2 == *(int *)(DAT_004477c8 + 0x58)) {
    *(undefined4 *)(DAT_004477c8 + 0x58) = 0;
  }
  if (param_2 == *(int *)(DAT_004477c8 + 0x5c)) {
    *(undefined4 *)(DAT_004477c8 + 0x5c) = 0;
    *(undefined4 *)(DAT_004477c8 + 0x60) = 0;
  }
  if (param_2 == *(int *)(DAT_004477c8 + 0x6c)) {
    *(undefined4 *)(DAT_004477c8 + 0x6c) = 0;
  }
  if (param_2 == *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_0044021c(DAT_004477c8);
  return;
}


