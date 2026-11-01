
/* ==== FUN_0041b8c0 @ 0041b8c0 ==== 
 * signature: undefined __register FUN_0041b8c0(int * param_1)
 * body: 0041b8c0-0041b91c
 */

void FUN_0041b8c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  
  if ((*(char *)((int)param_1 + 0x2a) == '\0') || (*(char *)((int)param_1 + 0x29) == '\0')) {
    iVar1 = param_1[8];
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_0041a47c(*(int *)(iVar1 + 0xc));
      DeleteObject(*(HGDIOBJ *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_0041b8a0((int)param_1);
    FUN_0041b8b0((int)param_1);
    uVar2 = FUN_0041b7dc(param_1);
    BVar3 = FUN_0041af80(*(HPALETTE *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),uVar2);
    *(BOOL *)(iVar1 + 0xc) = BVar3;
    *(undefined1 *)((int)param_1 + 0x2a) = 1;
    *(undefined1 *)((int)param_1 + 0x29) = 1;
  }
  return;
}


