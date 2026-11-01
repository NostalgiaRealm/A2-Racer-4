
/* ==== FUN_00405d1b @ 00405d1b ==== 
 * signature: undefined * __register FUN_00405d1b(undefined * param_1, int param_2)
 * body: 00405d1b-00405d53
 */

undefined * FUN_00405d1b(undefined *param_1,int param_2)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  while (0x40 < param_2) {
    param_2 = param_2 + -0x40;
    FUN_00405cb0(param_1,&DAT_004aa070,0x40);
    pvVar2 = FUN_0040655c();
    if (*(int *)((int)pvVar2 + 4) != 0) {
      return param_1;
    }
  }
  if (0 < param_2) {
    puVar4 = &DAT_004aa070;
    if ((*(int *)(param_1 + 4) == 0xd7b2) ||
       ((param_1 == &DAT_004ac21c && (FUN_00405ca2(&DAT_004ac21c), iRam004ac220 == 0xd7b2)))) {
      do {
        iVar1 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
        if (param_2 < iVar3) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2;
          puVar5 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar1);
          for (; param_2 != 0; param_2 = param_2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          return param_1;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar3;
        param_2 = param_2 - iVar3;
        puVar5 = (undefined1 *)(*(int *)(param_1 + 0x14) + iVar1);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        iVar1 = (**(code **)(param_1 + 0x1c))();
      } while (iVar1 == 0);
      FUN_0040286c(iVar1);
    }
    else {
      param_1 = (undefined *)FUN_0040286c(0x69);
    }
    return param_1;
  }
  return param_1;
}


