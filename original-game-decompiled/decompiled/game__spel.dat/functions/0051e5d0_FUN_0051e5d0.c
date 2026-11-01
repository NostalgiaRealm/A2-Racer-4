
/* ==== FUN_0051e5d0 @ 0051e5d0 ==== 
 * signature: undefined __cdecl FUN_0051e5d0(int param_1)
 * body: 0051e5d0-0051e661
 */

void __cdecl FUN_0051e5d0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  if (DAT_0074c760 != 0) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_error__qh_memsize___called_005be658);
    FUN_0051e8e0(5,(int *)0x0);
  }
  uVar2 = param_1 + DAT_0074c764 & ~DAT_0074c764;
  if (DAT_0074c758 != 0) {
    puVar3 = (uint *)(DAT_0074c76c + (DAT_0074c758 + -1) * 4);
    iVar1 = DAT_0074c758 + -1;
    do {
      if (*puVar3 == uVar2) {
        return;
      }
      puVar3 = puVar3 + -1;
      bVar4 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar4);
  }
  if (DAT_0074c75c <= DAT_0074c758) {
    FUN_00558953(DAT_0074c784,(byte *)s_qhull_warning__memsize___free_li_005be610);
    return;
  }
  *(uint *)(DAT_0074c76c + DAT_0074c758 * 4) = uVar2;
  DAT_0074c758 = DAT_0074c758 + 1;
  return;
}


