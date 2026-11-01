
/* ==== FUN_004024e8 @ 004024e8 ==== 
 * signature: undefined4 __register FUN_004024e8(int param_1, int param_2)
 * body: 004024e8-004026b6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004024e8(int param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_18;
  int local_14;
  
  uVar6 = param_2 + 7U & 0xfffffffc;
  if ((int)uVar6 < 0xc) {
    uVar6 = 0xc;
  }
  puVar5 = (uint *)(param_1 + -4);
  uVar8 = *puVar5 & 0x7ffffffc;
  pbVar2 = (byte *)((int)puVar5 + uVar8);
  uVar7 = uVar6;
  if ((int)uVar8 < (int)uVar6) {
    do {
      local_14 = uVar6 - uVar8;
      if ((byte *)((int)puVar5 + uVar8) == DAT_004ac48c) {
        if (local_14 <= DAT_004ac488) {
          DAT_004ac488 = DAT_004ac488 - local_14;
          DAT_004ac48c = DAT_004ac48c + local_14;
          if (DAT_004ac488 < 0xc) {
            DAT_004ac48c = DAT_004ac48c + DAT_004ac488;
            uVar6 = uVar6 + DAT_004ac488;
            DAT_004ac488 = 0;
          }
          _DAT_004ac428 = _DAT_004ac428 + (uVar6 - uVar8);
          uVar7 = *puVar5;
          *puVar5 = uVar6 | uVar7 & 0x80000003;
          return CONCAT31((int3)((uVar7 & 0x80000003) >> 8),1);
        }
        FUN_00401f64();
      }
      puVar4 = (uint *)((int)puVar5 + uVar8);
      if ((*puVar4 & 2) == 0) {
        uVar1 = puVar4[2];
        if (local_14 <= (int)uVar1) {
          FUN_00401c8c((int *)puVar4);
          uVar1 = uVar1 - local_14;
          if ((int)uVar1 < 0xc) {
            puVar4 = (uint *)((int)puVar5 + uVar6 + uVar1);
            *puVar4 = *puVar4 & 0xfffffffe;
            uVar7 = uVar6 + uVar1;
          }
          else {
            FUN_00401edc((uint *)((int)puVar5 + uVar6),uVar1);
          }
          goto LAB_00402697;
        }
        puVar4 = (uint *)((int)puVar4 + uVar1);
        local_14 = local_14 - uVar1;
      }
    } while (((*puVar4 & 0x80000000) != 0) &&
            (uVar3 = FUN_00402068((byte *)((*puVar4 & 0x7ffffffc) + (int)puVar4),local_14),
            (char)uVar3 != '\0'));
    uVar3 = 0;
  }
  else {
    local_18 = uVar8 - uVar6;
    if (pbVar2 == DAT_004ac48c) {
      DAT_004ac48c = DAT_004ac48c + -local_18;
      DAT_004ac488 = DAT_004ac488 + local_18;
      if (DAT_004ac488 < 0xc) {
        DAT_004ac48c = DAT_004ac48c + local_18;
        DAT_004ac488 = DAT_004ac488 - local_18;
        uVar7 = uVar8;
      }
    }
    else {
      if ((*pbVar2 & 2) == 0) {
        local_18 = local_18 + *(int *)(pbVar2 + 8);
        FUN_00401c8c((int *)pbVar2);
      }
      uVar7 = uVar8;
      if (0xb < (int)local_18) {
        *(uint *)((int)puVar5 + uVar6) = local_18 | 2;
        FUN_00401d50((int)((uint *)((int)puVar5 + uVar6) + 1));
        uVar7 = uVar6;
      }
    }
LAB_00402697:
    _DAT_004ac428 = _DAT_004ac428 + (uVar7 - uVar8);
    uVar6 = *puVar5;
    *puVar5 = uVar7 | uVar6 & 0x80000003;
    uVar3 = CONCAT31((int3)((uVar6 & 0x80000003) >> 8),1);
  }
  return uVar3;
}


