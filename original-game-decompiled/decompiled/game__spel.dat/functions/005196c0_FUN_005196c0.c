
/* ==== FUN_005196c0 @ 005196c0 ==== 
 * signature: int * __cdecl FUN_005196c0(uint param_1)
 * body: 005196c0-0051981a
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_005196c0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  int local_8;
  undefined4 *local_4;
  
  puVar6 = (undefined4 *)0x0;
  local_4 = (undefined4 *)0x0;
  local_8 = 0;
  DAT_0074c60c = DAT_0074c604;
  DAT_0074c630 = DAT_0074c62c;
  piVar5 = FUN_00519e50(param_1,unaff_EDI,unaff_ESI);
  FUN_00514ed0(piVar5);
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  iVar3 = DAT_0074c610;
  if (DAT_0074bec8 == 0) {
    DAT_0074c690 = 1;
  }
  for (; (iVar3 != 0 && ((*(uint *)(iVar3 + 0x50) & 0x400) != 0)); iVar3 = *(int *)(iVar3 + 0x30)) {
    iVar1 = *(int *)(iVar3 + 0x3c);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      piVar4 = (int *)(iVar1 + 8);
      while (iVar2 != 0) {
        *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xffffdfff;
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
      }
    }
    if (*(int *)(iVar3 + 0x38) != 0) {
      *(int *)(iVar3 + 0x48) = DAT_0074c6d0;
      local_4 = FUN_00515880(iVar3,(int)piVar5,&local_8);
    }
    if ((*(uint *)(iVar3 + 0x50) & 0x1000) != 0) {
      puVar6 = FUN_00515ae0(iVar3,piVar5,&local_8);
    }
    if (DAT_0074bec8 == 0) {
      if (local_4 != (undefined4 *)0x0) {
        puVar6 = local_4;
      }
      if (puVar6 == (undefined4 *)0x0) {
        _DAT_0074ca80 = _DAT_0074ca80 + 1;
      }
      else {
        *(undefined4 **)(iVar3 + 0x20) = puVar6;
      }
      *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 4) = 0;
    }
  }
  if (0 < DAT_0074be68) {
    FUN_005164c0(param_1);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_makenewfacets__created__d_new_005bc234);
  }
  if (3 < DAT_0074be68) {
    FUN_0051ecb0(DAT_0074c60c,0,1);
  }
  return piVar5;
}


