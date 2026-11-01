
/* ==== FUN_004397f0 @ 004397f0 ==== 
 * signature: undefined __stdcall FUN_004397f0(void)
 * body: 004397f0-0043990f
 */

void FUN_004397f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStackY_9c [12];
  undefined4 uStackY_6c;
  undefined4 local_40 [16];
  
  iVar3 = (&DAT_006c3518)[DAT_006c3568] * 0x178;
  iVar2 = *(int *)(DAT_00719b50 + 0xb8 + iVar3);
  puVar4 = (undefined4 *)(DAT_00719b50 + 0x14 + iVar3);
  puVar5 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (0 < iVar2) {
    DAT_006c359c = iVar2;
  }
  DAT_006c3594 = 0;
  DAT_006c3590 = 0;
  iVar1 = DAT_006c3534 * 0x178;
  DAT_006c3598 = 0;
  FUN_004b1260(iVar1 + DAT_00719b50);
  FUN_004b1310(iVar1 + DAT_00719b50);
  puVar4 = local_40;
  puVar5 = auStackY_9c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004b10b0(iVar1 + DAT_00719b50);
  iVar2 = DAT_00719b50 + 8 + iVar3;
  uStackY_6c = 0x4398d3;
  FUN_004b1060((void *)(iVar1 + DAT_00719b50),*(undefined4 *)(DAT_00719b50 + 8 + iVar3),
               *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
  *(undefined4 *)(iVar1 + 0x80 + DAT_00719b50) = 1;
  FUN_004b1380((int *)(iVar1 + DAT_00719b50));
  *(undefined4 *)(iVar1 + DAT_00719b50) = 0xffffffff;
  change_active_camera(7);
  return;
}


