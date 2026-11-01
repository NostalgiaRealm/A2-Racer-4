
/* ==== FUN_0048c644 @ 0048c644 ==== 
 * signature: undefined FUN_0048c644(void)
 * body: 0048c644-0048c6bc
 */

undefined1 FUN_0048c644(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00462434(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c));
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < (int)(uVar1 - 1)) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0048d54c(*(int *)(param_1 + 0x10),iVar4);
      iVar2 = *(int *)(iVar2 + 0xc);
      iVar3 = FUN_00462620(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x3c),param_2
                          );
      if (iVar3 <= iVar2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0;
}


