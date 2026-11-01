
/* ==== FUN_00545fd0 @ 00545fd0 ==== 
 * signature: bool __fastcall FUN_00545fd0(void * param_1)
 * body: 00545fd0-005460e4
 */

bool __fastcall FUN_00545fd0(void *param_1)

{
  uint uVar1;
  double dVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar7 = *(int *)((int)param_1 + 0x2c);
  if (iVar7 == 0) {
    return true;
  }
  while (iVar7 = iVar7 + -1, -1 < iVar7) {
    uVar1 = *(int *)((int)param_1 + 8) + *(int *)((int)param_1 + 0x28) * iVar7 * 8;
    iVar5 = ((int)(uVar1 - (int)(uVar1 & 0xfffffff0)) >> 3) + *(int *)((int)param_1 + 0x2c);
    piVar3 = (int *)FUN_004f8370();
    if ((*piVar3 == 0) && (iVar6 = iVar5 + -1, -1 < iVar6)) {
      puVar8 = (undefined4 *)(uVar1 & 0xfffffff0);
      for (uVar4 = iVar5 + 3 + iVar6 & 0x3ffffffc; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 *)(uVar1 + iVar7 * 8) = 0;
    *(undefined4 *)(uVar1 + 4 + iVar7 * 8) = 0x3ff00000;
  }
  iVar7 = 1;
  if (1 < *(int *)((int)param_1 + 0x2c)) {
    do {
      iVar5 = iVar7 + -1;
      FUN_00545d80(param_1,iVar5);
      iVar6 = FUN_00545b80(param_1,iVar5);
      if (iVar6 == 0) {
        return false;
      }
      iVar6 = *(int *)((int)param_1 + 0x2c);
      while (iVar6 = iVar6 + -1, iVar7 <= iVar6) {
        dVar2 = *(double *)
                 (*(int *)((int)param_1 + 0xc) + (*(int *)((int)param_1 + 0x28) * iVar6 + iVar5) * 8
                 );
        if (dVar2 != 0.0) {
          uStack_c = (undefined4)((ulonglong)dVar2 >> 0x20);
          local_10 = SUB84(dVar2,0);
          FUN_00545e00(param_1,iVar5,iVar6,local_10,uStack_c);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)param_1 + 0x2c));
  }
  iVar7 = FUN_00545b80(param_1,*(int *)((int)param_1 + 0x2c) + -1);
  return iVar7 != 0;
}


