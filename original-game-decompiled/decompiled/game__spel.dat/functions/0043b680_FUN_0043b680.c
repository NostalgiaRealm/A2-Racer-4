
/* ==== FUN_0043b680 @ 0043b680 ==== 
 * signature: undefined __stdcall FUN_0043b680(void)
 * body: 0043b680-0043b7b8
 */

void FUN_0043b680(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c [3];
  
  iVar5 = DAT_006c3530;
  iVar4 = DAT_006c3568 * 0x178;
  if (*(int *)(iVar4 + 0x74 + DAT_00719b50) == 0) {
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004b11c0((void *)(iVar4 + DAT_00719b50),&local_18);
    local_24 = *puVar2;
    local_20 = puVar2[1];
    local_1c = puVar2[2];
  }
  if (*(int *)(DAT_00719b50 + iVar4 + 0x78) == 0) {
    local_14 = 0;
    uVar3 = 0;
    local_18 = 0;
    local_10 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004b12c0((void *)(DAT_00719b50 + iVar4),local_c);
    local_18 = *puVar2;
    uVar3 = puVar2[1];
    local_10 = puVar2[2];
  }
  iVar5 = iVar5 * 0x178;
  uVar1 = *(undefined4 *)(DAT_006fba58 * 0xf0 + 0x24 + DAT_00715e50);
  FUN_004b1190((void *)(DAT_00719b50 + iVar5),uVar1,local_24,local_20,local_1c);
  FUN_004b1290((void *)(iVar5 + DAT_00719b50),uVar1,local_18,uVar3,local_10);
  FUN_004b1380((int *)(iVar5 + DAT_00719b50));
  FUN_00438410(6);
  return;
}


