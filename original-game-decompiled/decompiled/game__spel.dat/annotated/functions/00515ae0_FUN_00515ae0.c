
/* ==== FUN_00515ae0 @ 00515ae0 ==== 
 * signature: undefined4 * __cdecl FUN_00515ae0(int param_1, undefined4 param_2, int * param_3)
 * body: 00515ae0-00515c23
 */

undefined4 * __cdecl FUN_00515ae0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_c;
  int local_8;
  int *local_4;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  puVar3 = (undefined4 *)0x0;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 4);
    local_4 = (int *)(iVar1 + 8);
    if (iVar4 != 0) {
      do {
        if ((*(uint *)(iVar4 + 0x50) & 0x2400) == 0) {
          iVar1 = FUN_00515520(iVar4,param_1,&local_c,&local_8,1);
          *(undefined4 *)(iVar1 + 4) = param_2;
          uVar2 = local_c;
          if ((*(uint *)(iVar4 + 0x50) & 0x800) == 0) {
            uVar2 = ~local_c;
          }
          puVar3 = FUN_005157a0(iVar1,uVar2 & 1,iVar4);
          *param_3 = *param_3 + 1;
          if (((*(uint *)(iVar4 + 0x50) & 0x800000) != 0) &&
             ((DAT_0074bed8 != 0 || (DAT_0074be90 != 0)))) {
            puVar3[8] = puVar3;
            puVar3[0x14] = puVar3[0x14] | 0x1000000;
          }
          if (DAT_0074bec8 == 0) {
            *(undefined4 **)(*(int *)(iVar4 + 0x3c) + 4 + local_c * 4) = puVar3;
          }
          if (3 < DAT_0074be68) {
            FUN_00558953(DAT_0074c5ec,(byte *)s_qh_makenew_simplicial__create_fa_005ba61c);
          }
        }
        iVar4 = *local_4;
        local_4 = local_4 + 1;
      } while (iVar4 != 0);
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}


