
/* ==== FUN_0055badc @ 0055badc ==== 
 * signature: uint * __cdecl FUN_0055badc(int param_1, uint * param_2)
 * body: 0055badc-0055bce1
 */

uint * __cdecl FUN_0055badc(int param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  uint local_8c [33];
  size_t local_8;
  
  iVar5 = 0;
  if ((param_1 < 0) || (5 < param_1)) {
LAB_0055bc33:
    puVar1 = (uint *)0x0;
  }
  else {
    if (param_1 != 0) {
      if (param_2 != (uint *)0x0) {
        puVar1 = (uint *)FUN_0055bce2(param_1,param_2);
        return puVar1;
      }
      return (&DAT_005c8334)[param_1 * 3];
    }
    local_8 = 1;
    param_1 = 0;
    if (param_2 != (uint *)0x0) {
      if ((((char)*param_2 == 'L') && (*(char *)((int)param_2 + 1) == 'C')) &&
         (*(char *)((int)param_2 + 2) == '_')) {
        pbVar2 = FUN_00564ab0((byte *)param_2,&DAT_00579668);
        puVar1 = param_2;
        while (((pbVar2 != (byte *)0x0 && (local_8 = (int)pbVar2 - (int)puVar1, local_8 != 0)) &&
               (*pbVar2 != 0x3b))) {
          param_2 = (uint *)0x1;
          ppuVar6 = &PTR_s_LC_COLLATE_005c833c;
          do {
            iVar5 = _strncmp(*ppuVar6,(char *)puVar1,local_8);
            if ((iVar5 == 0) && (sVar3 = _strlen(*ppuVar6), local_8 == sVar3)) break;
            param_2 = (uint *)((int)param_2 + 1);
            ppuVar6 = ppuVar6 + 3;
          } while ((int)ppuVar6 < 0x5c836d);
          pbVar2 = pbVar2 + 1;
          sVar3 = FUN_0055a6c0(pbVar2,&DAT_00579664);
          if ((sVar3 == 0) && (*pbVar2 != 0x3b)) break;
          if ((int)param_2 < 6) {
            _strncpy((char *)local_8c,(char *)pbVar2,sVar3);
            *(undefined1 *)((int)local_8c + sVar3) = 0;
            iVar5 = FUN_0055bce2((int)param_2,local_8c);
            if (iVar5 != 0) {
              param_1 = param_1 + 1;
            }
          }
          if ((pbVar2[sVar3] == 0) || (puVar1 = (uint *)(pbVar2 + sVar3 + 1), (byte)*puVar1 == 0))
          goto LAB_0055bc3e;
          pbVar2 = FUN_00564ab0((byte *)puVar1,&DAT_00579668);
        }
        goto LAB_0055bc33;
      }
      puVar1 = FUN_0055beb6(param_2,local_8c,(undefined4 *)0x0,(undefined4 *)0x0);
      if (puVar1 == (uint *)0x0) {
        return (uint *)0x0;
      }
      puVar7 = &DAT_005c8334;
      do {
        if ((LPVOID *)puVar7 != &DAT_005c8334) {
          iVar4 = _strcmp((char *)local_8c,(char *)*puVar7);
          if ((iVar4 == 0) || (iVar4 = FUN_0055bce2(iVar5,local_8c), iVar4 != 0)) {
            param_1 = param_1 + 1;
          }
          else {
            local_8 = 0;
          }
        }
        puVar7 = puVar7 + 3;
        iVar5 = iVar5 + 1;
      } while ((int)puVar7 < 0x5c8371);
      if (local_8 != 0) {
        puVar1 = FUN_0055bdfd();
        FUN_00559d4e(DAT_005c8334);
        DAT_005c8334 = (LPVOID)0x0;
        return puVar1;
      }
LAB_0055bc3e:
      if (param_1 == 0) {
        return (uint *)0x0;
      }
    }
    puVar1 = FUN_0055bdfd();
  }
  return puVar1;
}


