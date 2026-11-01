
/* ==== FUN_00535860 @ 00535860 ==== 
 * signature: undefined __cdecl FUN_00535860(int param_1)
 * body: 00535860-00535a26
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00535860(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  
  FUN_00514af0(DAT_0074c6e0);
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_getmergeset__started__005c5d98);
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  do {
    if ((param_1 == 0) || (*(int *)(param_1 + 0x30) == 0)) {
      puVar4 = (undefined4 *)FUN_00514af0(DAT_0074c6e0);
      if (DAT_0074be04 == 0) {
        pcVar6 = FUN_005350b0;
      }
      else {
        pcVar6 = FUN_00535a30;
      }
      FUN_00558d5b(DAT_0074c6e0 + 1,puVar4,4,pcVar6);
      if (DAT_0074c6b0 == 0) {
        DAT_0074cb40 = DAT_0074cb40 + (int)puVar4;
        if ((int)DAT_0074cb48 < (int)puVar4) {
          DAT_0074cb48 = puVar4;
        }
      }
      else {
        _DAT_0074cb50 = _DAT_0074cb50 + (int)puVar4;
      }
      if (1 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_getmergeset___d_merges_found_005c5d74);
      }
      return;
    }
    if ((*(uint *)(param_1 + 0x50) & 0x4000000) == 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x48) = DAT_0074c6d0;
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x4000000;
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 4);
        piVar5 = (int *)(iVar1 + 8);
        while (iVar3 != 0) {
          *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xffffdfff;
          iVar3 = *piVar5;
          piVar5 = piVar5 + 1;
        }
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 != 0) {
        piVar5 = (int *)(iVar1 + 4);
        iVar1 = *(int *)(iVar1 + 4);
        while (iVar1 != 0) {
          piVar5 = piVar5 + 1;
          uVar2 = *(uint *)(iVar1 + 0xc);
          if (((uVar2 & 0x2000000) == 0) || ((uVar2 & 0x4000000) != 0)) {
            iVar3 = *(int *)(iVar1 + 4);
            if (iVar3 == param_1) {
              iVar3 = *(int *)(iVar1 + 8);
            }
            if ((*(uint *)(iVar3 + 0x50) & 0x2000) == 0) {
              if (*(int *)(iVar3 + 0x48) != DAT_0074c6d0) {
                *(uint *)(iVar1 + 0xc) = uVar2 & 0xfbffffff | 0x2000000;
                *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) | 0x2000;
                iVar3 = FUN_00538c80(param_1,iVar3);
                if (iVar3 != 0) {
                  uVar2 = *(uint *)(iVar1 + 0xc) | 0x4000000;
                  goto LAB_00535979;
                }
              }
            }
            else {
              uVar2 = uVar2 & 0xfbffffff | 0x2000000;
LAB_00535979:
              *(uint *)(iVar1 + 0xc) = uVar2;
            }
          }
          iVar1 = *piVar5;
        }
      }
    }
    param_1 = *(int *)(param_1 + 0x30);
  } while( true );
}


