
/* ==== FUN_00539410 @ 00539410 ==== 
 * signature: int * __cdecl FUN_00539410(int param_1)
 * body: 00539410-00539506
 */

int * __cdecl FUN_00539410(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *local_4;
  
  local_4 = (int *)FUN_00514b50(DAT_0074c5fc);
  DAT_0074c6d0 = DAT_0074c6d0 + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    piVar3 = (int *)(iVar2 + 8);
    while (iVar1 != 0) {
      *(int *)(iVar1 + 0x48) = DAT_0074c6d0;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
    }
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 4);
    iVar2 = *(int *)(iVar2 + 4);
    while (iVar2 != 0) {
      piVar3 = piVar3 + 1;
      if (*piVar3 != 0) {
        FUN_00539510(param_1,iVar2,(int *)&local_4);
      }
      iVar2 = *piVar3;
    }
  }
  if ((DAT_0074bf80 != 0) || (DAT_0074be68 != 0)) {
    iVar2 = FUN_00514af0(local_4);
    DAT_0074cd90 = DAT_0074cd90 + 1;
    DAT_0074cd98 = DAT_0074cd98 + iVar2;
    if (DAT_0074cda0 < iVar2) {
      DAT_0074cda0 = iVar2;
    }
    if (2 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_vertexridges__found__d_ridges_005c70ac);
    }
  }
  return local_4;
}


