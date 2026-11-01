
/* ==== FUN_0052df80 @ 0052df80 ==== 
 * signature: int * __cdecl FUN_0052df80(int param_1, int param_2, int param_3, uint * param_4, int * param_5)
 * body: 0052df80-0052e157
 */

int * __cdecl FUN_0052df80(int param_1,int param_2,int param_3,uint *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint local_8;
  
  DAT_0074c6b8 = DAT_0074c6b8 + 1;
  local_8 = 0;
  FUN_00518040(1);
  FUN_0051a750();
  piVar2 = FUN_0051a220();
  if (DAT_0074be18 != 0) {
    piVar2[DAT_0074c044] = 0;
  }
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  iVar4 = param_1;
  if (DAT_0074c6d0 < DAT_0074c634) {
    DAT_0074c6d0 = DAT_0074c634;
  }
  while( true ) {
    if ((iVar4 == 0) || (*(int *)(iVar4 + 0x30) == 0)) goto LAB_0052e024;
    if (((param_3 != 0) || (uVar3 = FUN_00533dd0(iVar4), uVar3 == 0)) &&
       ((*(uint *)(iVar4 + 0x50) & 0x10000) == 0)) break;
    iVar4 = *(int *)(iVar4 + 0x30);
  }
  local_8 = 1;
LAB_0052e024:
  iVar4 = DAT_0074c600;
  if (param_2 != 0) {
    piVar5 = (int *)(param_2 + 4);
    iVar1 = *(int *)(param_2 + 4);
    while (iVar4 = DAT_0074c600, iVar1 != 0) {
      piVar5 = piVar5 + 1;
      if (((param_3 != 0) || (uVar3 = FUN_00533dd0(iVar1), uVar3 == 0)) &&
         ((*(uint *)(iVar1 + 0x50) & 0x10000) == 0)) {
        local_8 = 1;
        iVar4 = DAT_0074c600;
        break;
      }
      iVar1 = *piVar5;
    }
  }
  for (; (iVar4 != 0 && (*(int *)(iVar4 + 0x30) != 0)); iVar4 = *(int *)(iVar4 + 0x30)) {
    if ((*(int *)(iVar4 + 0x18) == 0) || ((*(uint *)(iVar4 + 0x50) >> 0x10 & 1) != local_8)) {
      *(uint *)(iVar4 + 0x48) = DAT_0074c6d0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x48) = 0;
    }
    *(uint *)(iVar4 + 0x50) = *(uint *)(iVar4 + 0x50) & 0xffffdfff | 0x4000;
  }
  iVar4 = 1;
  for (; (param_1 != 0 && (*(int *)(param_1 + 0x30) != 0)); param_1 = *(int *)(param_1 + 0x30)) {
    if ((param_3 != 0) || (uVar3 = FUN_00533dd0(param_1), uVar3 == 0)) {
      *(int *)(param_1 + 0x48) = iVar4;
      iVar4 = iVar4 + 1;
    }
  }
  if (param_2 != 0) {
    piVar5 = (int *)(param_2 + 4);
    iVar1 = *(int *)(param_2 + 4);
    while (iVar1 != 0) {
      piVar5 = piVar5 + 1;
      if ((param_3 != 0) || (uVar3 = FUN_00533dd0(iVar1), uVar3 == 0)) {
        *(int *)(iVar1 + 0x48) = iVar4;
        iVar4 = iVar4 + 1;
      }
      iVar1 = *piVar5;
    }
  }
  *param_4 = local_8;
  *param_5 = iVar4;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_markvoronoi__islower__d_numce_005c3158);
  }
  return piVar2;
}


