
/* ==== FUN_0052d640 @ 0052d640 ==== 
 * signature: int __cdecl FUN_0052d640(int param_1, int param_2)
 * body: 0052d640-0052d7eb
 */

int __cdecl FUN_0052d640(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  int local_4;
  
  local_8 = FUN_00514b50(DAT_0074c5fc);
  local_4 = 1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    piVar4 = (int *)(iVar2 + 8);
    while (iVar3 != 0) {
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xffffbfff;
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
    }
  }
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    piVar4 = (int *)(iVar2 + 8);
    while (iVar3 != 0) {
      if ((*(uint *)(iVar3 + 0x50) & 0x4000) == 0) goto joined_r0x0052d6c9;
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
    }
  }
  goto LAB_0052d757;
joined_r0x0052d6c9:
  if (iVar3 != 0) {
    uVar1 = *(uint *)(iVar3 + 0x50);
    *(uint *)(iVar3 + 0x50) = uVar1 | 0x4000;
    if ((uVar1 & 0x2000) != 0) {
      if (*(int *)(iVar3 + 0x48) == 0) {
        if (local_4 == 0) goto LAB_0052d70c;
        local_4 = 0;
      }
      FUN_00514020(&local_8,iVar3);
    }
LAB_0052d70c:
    iVar2 = *(int *)(iVar3 + 0x3c);
    iVar3 = 0;
    if (iVar2 != 0) {
      piVar4 = (int *)(iVar2 + 4);
      iVar3 = *(int *)(iVar2 + 4);
      while (iVar3 != 0) {
        piVar4 = piVar4 + 1;
        if ((*(uint *)(iVar3 + 0x50) & 0x4000) == 0) {
          iVar2 = FUN_00514680(*(int *)(param_2 + 0xc),iVar3);
          if (iVar2 != 0) break;
          *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 0x4000;
        }
        iVar3 = *piVar4;
      }
    }
    goto joined_r0x0052d6c9;
  }
LAB_0052d757:
  if ((DAT_0074be2c != 0) && (iVar2 = *(int *)(param_2 + 0xc), iVar2 != 0)) {
    puVar5 = (undefined4 *)(iVar2 + 4);
    piVar4 = *(int **)(iVar2 + 4);
    while (piVar4 != (int *)0x0) {
      puVar5 = puVar5 + 1;
      if ((piVar4[0x14] & 0x4000U) == 0) {
        FUN_005164c0(*(uint *)(param_2 + 8));
        FUN_00558953((int *)&DAT_005c7c18,(byte *)s_qh_detvridge3__neigbors_of_verte_005c3070);
        FUN_0051e8e0(5,piVar4);
      }
      piVar4 = (int *)*puVar5;
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    piVar4 = (int *)(iVar2 + 8);
    while (iVar3 != 0) {
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 0x4000;
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
    }
  }
  return local_8;
}


