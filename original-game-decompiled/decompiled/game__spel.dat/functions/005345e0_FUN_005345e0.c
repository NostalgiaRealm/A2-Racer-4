
/* ==== FUN_005345e0 @ 005345e0 ==== 
 * signature: int * __cdecl FUN_005345e0(int param_1)
 * body: 005345e0-005346a8
 */

int * __cdecl FUN_005345e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *local_4;
  
  local_4 = (int *)FUN_00514b50(DAT_0074c5fc);
  DAT_0074c6d4 = DAT_0074c6d4 + 1;
  *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 0x10) = DAT_0074c6d4;
  for (iVar1 = *(int *)(param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (((*(uint *)(iVar1 + 0x50) & 0x200000) == 0) && (iVar2 = *(int *)(iVar1 + 0x34), iVar2 != 0))
    {
      piVar3 = (int *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 4);
      while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        if (*(int *)(iVar2 + 0x10) != DAT_0074c6d4) {
          FUN_00514020((int *)&local_4,iVar2);
          *(int *)(iVar2 + 0x10) = DAT_0074c6d4;
          *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0xfeffffff;
        }
        iVar2 = *piVar3;
      }
    }
    if (iVar1 == param_1) break;
  }
  if (3 < DAT_0074be68) {
    FUN_00514af0(local_4);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_basevertices__found__d_vertic_005c5678);
  }
  return local_4;
}


