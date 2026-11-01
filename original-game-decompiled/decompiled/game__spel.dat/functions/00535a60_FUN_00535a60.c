
/* ==== FUN_00535a60 @ 00535a60 ==== 
 * signature: undefined __cdecl FUN_00535a60(int param_1)
 * body: 00535a60-00535bd8
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00535a60(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  do {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
      puVar4 = (undefined4 *)FUN_00514af0(DAT_0074c6e0);
      if (DAT_0074be04 == 0) {
        pcVar7 = FUN_005350b0;
      }
      else {
        pcVar7 = FUN_00535a30;
      }
      FUN_00558d5b(DAT_0074c6e0 + 1,puVar4,4,pcVar7);
      if (DAT_0074c6b0 == 0) {
        DAT_0074cb18 = DAT_0074cb18 + (int)puVar4;
        if ((int)DAT_0074cb20 < (int)puVar4) {
          DAT_0074cb20 = puVar4;
        }
      }
      else {
        _DAT_0074cb28 = _DAT_0074cb28 + (int)puVar4;
      }
      if (1 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_getmergeset_initial___d_merge_005c5db4);
      }
      return;
    }
    *(int *)(param_1 + 0x48) = DAT_0074c6d0;
    iVar3 = *(int *)(param_1 + 0x3c);
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x4000000;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 4);
      piVar2 = (int *)(iVar3 + 8);
      while (iVar1 != 0) {
        if (((*(int *)(iVar1 + 0x48) != DAT_0074c6d0) &&
            (iVar3 = FUN_00538c80(param_1,iVar1), iVar3 != 0)) &&
           (iVar3 = *(int *)(iVar1 + 0x38), iVar3 != 0)) {
          piVar5 = (int *)(iVar3 + 4);
          iVar3 = *(int *)(iVar3 + 4);
          while (iVar3 != 0) {
            piVar5 = piVar5 + 1;
            iVar6 = *(int *)(iVar3 + 4);
            if (iVar6 == iVar1) {
              iVar6 = *(int *)(iVar3 + 8);
            }
            if (param_1 == iVar6) {
              *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x4000000;
              break;
            }
            iVar3 = *piVar5;
          }
        }
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 4);
      piVar2 = (int *)(iVar3 + 8);
      while (iVar1 != 0) {
        *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x2000000;
        iVar1 = *piVar2;
        piVar2 = piVar2 + 1;
      }
    }
    param_1 = *(int *)(param_1 + 0x30);
  } while( true );
}


