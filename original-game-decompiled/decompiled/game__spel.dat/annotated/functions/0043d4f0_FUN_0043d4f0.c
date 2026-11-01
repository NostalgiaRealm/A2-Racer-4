
/* ==== FUN_0043d4f0 @ 0043d4f0 ==== 
 * signature: undefined __stdcall FUN_0043d4f0(void)
 * body: 0043d4f0-0043d692
 */

void FUN_0043d4f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((DAT_006fb8d0 != 0) && (DAT_006c40c8 != 0)) {
    iVar1 = DAT_0073b0d0 + DAT_006c40c0 * 0xa9;
    *(undefined4 *)(iVar1 + 0x80) = DAT_006c40a0;
    *(undefined4 *)(iVar1 + 0x84) = DAT_006c40a4;
    *(undefined4 *)(iVar1 + 0x88) = DAT_006c40a8;
    puVar2 = (undefined4 *)(DAT_00719b50 + 8 + (&DAT_006c3518)[DAT_006c3568] * 0x178);
    iVar1 = DAT_0073b0d0 + DAT_006c40c0 * 0xa9;
    *(undefined4 *)(iVar1 + 0x50) = *puVar2;
    *(undefined4 *)(iVar1 + 0x54) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x58) = puVar2[2];
    puVar2 = &DAT_0073b538;
    puVar3 = (undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 * 0xa9 + 0x10);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + DAT_006c40c0 * 0xa8 + 0x40) =
         *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x50 + DAT_006c40c0 * 0xa8);
    *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + DAT_006c40c0 * 0xa8 + 0x44) =
         *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x54 + DAT_006c40c0 * 0xa8);
    *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + DAT_006c40c0 * 0xa8 + 0x48) =
         *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x58 + DAT_006c40c0 * 0xa8);
    iVar1 = DAT_0073b0d0 + DAT_006c40c0 * 0xa9;
    FUN_004b4360((float *)(iVar1 + 0x10),*(float *)(iVar1 + 0x80),*(float *)(iVar1 + 0x84),
                 *(float *)(iVar1 + 0x88));
    FUN_004b5b10(DAT_0073b0d0 + DAT_006c40c0 * 0xa9);
  }
  return;
}


