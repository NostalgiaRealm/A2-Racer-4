
/* ==== FUN_0048dd00 @ 0048dd00 ==== 
 * signature: undefined FUN_0048dd00(void)
 * body: 0048dd00-0048dd2d
 */

void FUN_0048dd00(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (*(int *)(param_1 + 0xc) < (int)uVar3) {
    piVar1 = (int *)(param_1 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      thunk_FUN_00402808(uVar3);
    }
  }
  return;
}


