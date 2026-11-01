
/* ==== FUN_00473220 @ 00473220 ==== 
 * signature: undefined4 __thiscall FUN_00473220(void * this, undefined4 param_1, undefined4 param_2, byte * param_3, uint param_4)
 * body: 00473220-004733a5
 */

uint __thiscall
FUN_00473220(void *this,undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  pcStack_8 = FUN_0056b42c;
  pvStack_c = ExceptionList;
  iVar8 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = (*(code *)**(undefined4 **)((int)this + 0x10))();
  pbVar2 = param_3;
  if (0 < (int)uVar3) {
    do {
      piVar4 = (int *)FUN_00468530((void *)((int)this + 0x14),&uStack_14);
      iStack_1c = *piVar4;
      iVar9 = iVar8;
      if (0 < iVar8) {
        do {
          FUN_00448fd0(&iStack_1c,&uStack_10);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      iVar9 = FUN_00473760(*(int *)(iStack_1c + 8));
      pbVar11 = &DAT_0057629c;
      if (pbVar2 != (byte *)0x0) {
        pbVar11 = pbVar2;
      }
      uVar3 = *(uint *)(iVar9 + 8);
      uVar7 = param_4;
      if (uVar3 < param_4) {
        uVar7 = uVar3;
      }
      bVar12 = false;
      iVar5 = 0;
      bVar13 = true;
      pbVar10 = *(byte **)(iVar9 + 4);
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar12 = *pbVar10 < *pbVar11;
        bVar13 = *pbVar10 == *pbVar11;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (((iVar5 == 0) && (param_4 <= uVar3)) && (uVar3 == param_4)) {
        iStack_1c = **(int **)((int)this + 0x18);
        if (0 < iVar8) {
          do {
            FUN_00448fd0(&iStack_1c,&uStack_10);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uStack_18 = (**(code **)**(undefined4 **)(iStack_1c + 8))(param_1);
        puVar6 = FUN_00448ff0((void *)((int)this + 4),&param_1,*(void **)((int)this + 8),&uStack_18)
        ;
        if (pbVar2 != (byte *)0x0) {
          bVar1 = pbVar2[-1];
          if ((bVar1 != 0) && (bVar1 != 0xff)) {
            pbVar2[-1] = bVar1 - 1;
            ExceptionList = pvStack_c;
            return CONCAT31((int3)((uint)puVar6 >> 8),1);
          }
          puVar6 = (undefined4 *)FUN_0054b339(pbVar2 + -1);
        }
        ExceptionList = pvStack_c;
        return CONCAT31((int3)((uint)puVar6 >> 8),1);
      }
      iVar8 = iVar8 + 1;
      uVar3 = (*(code *)**(undefined4 **)((int)this + 0x10))();
    } while (iVar8 < (int)uVar3);
  }
  if (pbVar2 != (byte *)0x0) {
    bVar1 = pbVar2[-1];
    if ((bVar1 == 0) || (bVar1 == 0xff)) {
      uVar3 = FUN_0054b339(pbVar2 + -1);
    }
    else {
      uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar1 - 1);
      pbVar2[-1] = bVar1 - 1;
    }
  }
  ExceptionList = pvStack_c;
  return uVar3 & 0xffffff00;
}


