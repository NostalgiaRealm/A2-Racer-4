
/* ==== FUN_0043b671 @ 0043b671 ==== 
 * signature: undefined __stdcall FUN_0043b671(void)
 * body: 0043b671-0043b67f
 */

void FUN_0043b671(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 auStack_c [3];
  
  iVar5 = DAT_006c3530;
  iVar4 = DAT_006c3568 * 0x178;
  if (*(int *)(iVar4 + 0x74 + DAT_00719b50) == 0) {
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004b11c0((void *)(iVar4 + DAT_00719b50),&uStack_18);
    uStack_24 = *puVar2;
    uStack_20 = puVar2[1];
    uStack_1c = puVar2[2];
  }
  if (*(int *)(DAT_00719b50 + iVar4 + 0x78) == 0) {
    uStack_14 = 0;
    uVar3 = 0;
    uStack_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004b12c0((void *)(DAT_00719b50 + iVar4),auStack_c);
    uStack_18 = *puVar2;
    uVar3 = puVar2[1];
    uStack_10 = puVar2[2];
  }
  iVar5 = iVar5 * 0x178;
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  FUN_004b1190((void *)(DAT_00719b50 + iVar5),uVar1,uStack_24,uStack_20,uStack_1c);
  FUN_004b1290((void *)(iVar5 + DAT_00719b50),uVar1,uStack_18,uVar3,uStack_10);
  FUN_004b1380((int *)(iVar5 + DAT_00719b50));
  change_active_camera(6);
  return;
}


