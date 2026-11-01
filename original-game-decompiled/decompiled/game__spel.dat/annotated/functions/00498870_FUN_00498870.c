
/* ==== FUN_00498870 @ 00498870 ==== 
 * signature: undefined4 __thiscall FUN_00498870(void * this, byte * param_1)
 * body: 00498870-004989de
 */

undefined4 __thiscall FUN_00498870(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  char *_Str1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_48 [8];
  byte local_40 [8];
  byte local_38 [8];
  byte local_30 [16];
  byte local_20 [32];
  
  pbVar3 = param_1;
  pbVar8 = PTR_s_CACHED_PIPELINE_1_005addd8;
  if (DAT_006fb8d0 == 0) {
    return 0xffffffff;
  }
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_004988ba:
      iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_004988bf;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar9 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_004988ba;
    pbVar3 = pbVar3 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_004988bf:
  pbVar3 = param_1;
  pbVar8 = PTR_s_CACHED_PIPELINE_2_005adddc;
  if (iVar2 != 0) {
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_004988f7:
        iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_004988fc;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_004988f7;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_004988fc:
    if (iVar2 != 0) {
      FUN_0055942f(param_1,local_38,local_40,local_30,local_48);
      uVar5 = 0xffffffff;
      pbVar3 = local_30;
      do {
        pbVar8 = pbVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pbVar8 = pbVar3 + 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar8;
      } while (bVar1 != 0);
      uVar5 = ~uVar5;
      pbVar3 = pbVar8 + -uVar5;
      pbVar8 = local_20;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pbVar8 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar8 = pbVar8 + 1;
      }
      iVar2 = -1;
      pbVar3 = local_20;
      do {
        pbVar8 = pbVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pbVar8 = pbVar3 + 1;
        bVar1 = *pbVar3;
        pbVar3 = pbVar8;
      } while (bVar1 != 0);
      *(undefined4 *)(pbVar8 + -1) = DAT_005ae430;
      pbVar8[3] = DAT_005ae434;
      goto LAB_00498982;
    }
  }
  uVar5 = 0xffffffff;
  do {
    pbVar3 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pbVar3 = param_1 + 1;
    bVar1 = *param_1;
    param_1 = pbVar3;
  } while (bVar1 != 0);
  uVar5 = ~uVar5;
  pbVar3 = pbVar3 + -uVar5;
  pbVar8 = local_20;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar8 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    pbVar8 = pbVar8 + 1;
  }
LAB_00498982:
  iVar2 = 0;
  if (0 < *(int *)this) {
    do {
      puVar4 = (undefined4 *)**(undefined4 **)((int)this + 0xc);
      iVar7 = iVar2;
      if (0 < iVar2) {
        do {
          puVar4 = (undefined4 *)*puVar4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      _Str1 = *(char **)(puVar4[2] + 4);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar7 = __strcmpi(_Str1,(char *)local_20);
      if (iVar7 == 0) {
        return *(undefined4 *)(*(int *)((int)this + 0x14) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)this);
  }
  return 0xffffffff;
}


