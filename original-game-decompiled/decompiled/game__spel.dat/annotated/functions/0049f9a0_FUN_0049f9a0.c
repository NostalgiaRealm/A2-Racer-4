
/* ==== FUN_0049f9a0 @ 0049f9a0 ==== 
 * signature: uint __thiscall FUN_0049f9a0(void * this, uint * param_1)
 * body: 0049f9a0-0049fa50;0049fa54-0049fab8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049fa51-0049fa53
 */

uint __thiscall FUN_0049f9a0(void *this,uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  uint local_108;
  byte local_100 [256];
  
  iVar2 = -1;
  puVar6 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    uVar3 = *puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while ((char)uVar3 != '\0');
  local_108 = 0;
  puVar6 = param_1;
  if (iVar2 == -2) {
    return 0;
  }
  do {
    puVar1 = FUN_00559b90(puVar6,'|');
    if (puVar1 == (uint *)0x0) {
      uVar3 = 0xffffffff;
      do {
        puVar7 = puVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        puVar7 = (uint *)((int)puVar6 + 1);
        uVar4 = *puVar6;
        puVar6 = puVar7;
      } while ((char)uVar4 != '\0');
      uVar3 = ~uVar3;
      pbVar5 = (byte *)((int)puVar7 - uVar3);
      pbVar8 = local_100;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar8 = pbVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar8 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      _strncpy((char *)local_100,(char *)puVar6,(int)puVar1 - (int)puVar6);
      local_100[(int)puVar1 - (int)puVar6] = 0;
    }
    uVar3 = FUN_0049f920(this,local_100);
    if (uVar3 == 0) {
      FUN_0049f570((int)this);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Sample_group__s_not_foun_005aee7c);
    }
    local_108 = local_108 | uVar3;
    if (puVar1 == (uint *)0x0) {
LAB_0049fa62:
      uVar3 = 0xffffffff;
      puVar6 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        uVar4 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while ((char)uVar4 != '\0');
      puVar6 = (uint *)((~uVar3 - 1) + (int)param_1);
    }
    else {
      uVar3 = 0xffffffff;
      puVar6 = puVar1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        uVar4 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while ((char)uVar4 != '\0');
      if (~uVar3 - 1 < 2) goto LAB_0049fa62;
      puVar6 = (uint *)((int)puVar1 + 1);
    }
    iVar2 = -1;
    puVar1 = puVar6;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      uVar3 = *puVar1;
      puVar1 = (uint *)((int)puVar1 + 1);
    } while ((char)uVar3 != '\0');
    if (iVar2 == -2) {
      return local_108;
    }
  } while( true );
}


