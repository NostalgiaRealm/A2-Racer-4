
/* ==== FUN_00418100 @ 00418100 ==== 
 * signature: undefined __cdecl FUN_00418100(int param_1)
 * body: 00418100-0041827e
 */

void __cdecl FUN_00418100(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = param_1;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  iVar5 = param_1 * 0xf0;
  iVar2 = FUN_004aac20(param_1,*(int *)(iVar5 + 0x50 + DAT_00715e50));
  FUN_00418050(param_1,iVar2);
  iVar2 = *(int *)(DAT_00715eb8 + 0x24 + extraout_EAX * 0x50);
  param_1 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_004ab0d0((void *)(DAT_00715eb8 + extraout_EAX * 0x50),param_1);
      if (iVar3 != iVar1) {
        iVar4 = DAT_0073b0d0 + *(int *)(iVar3 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
        lVar7 = FUN_00403ea0(iVar1,*(float *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),
                             *(float *)(iVar4 + 0x58));
        iVar4 = (int)lVar7;
        if ((iVar4 < 0x200) || (0xe00 < iVar4)) {
          if (*(float *)(iVar3 * 0xf0 + 0xc4 + DAT_00715e50) <
              *(float *)(iVar5 + 0xc4 + DAT_00715e50)) {
            local_10 = local_10 + 1;
          }
        }
        else if ((iVar4 < 0x180) || (0x5ff < iVar4)) {
          if ((0xa00 < iVar4) && (iVar4 < 0xe81)) {
            local_c = local_c + 1;
          }
        }
        else {
          local_8 = local_8 + 1;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar2);
  }
  puVar6 = &DAT_005d2b70;
  do {
    FUN_00417df0(puVar6);
    puVar6 = puVar6 + 0xc;
  } while ((int)puVar6 < 0x5d2bac);
  if (local_10 != 0) {
    DAT_005d2b88 = 0;
  }
  if (local_c != 0) {
    DAT_005d2b70 = 0;
    DAT_005d2b7c = 0;
  }
  if (local_8 != 0) {
    DAT_005d2b94 = 0;
    DAT_005d2ba0 = 0;
  }
  return;
}


