
/* ==== FUN_0044272c @ 0044272c ==== 
 * signature: int * __register FUN_0044272c(int param_1)
 * body: 0044272c-004427af
 */

int * FUN_0044272c(int param_1)

{
  int *piVar1;
  HANDLE pvVar2;
  undefined4 extraout_EDX;
  tagPOINT tStack_14;
  
  GetCursorPos(&tStack_14);
  piVar1 = FUN_00423258(&tStack_14,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
  if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 8) & 0x10) != 0)) {
    piVar1 = (int *)0x0;
  }
  pvVar2 = FUN_00421c94();
  if (piVar1 != *(int **)(param_1 + 0x3c)) {
    if (((*(int *)(param_1 + 0x3c) != 0) && (pvVar2 == (HANDLE)0x0)) ||
       ((pvVar2 != (HANDLE)0x0 && (pvVar2 == *(HANDLE *)(param_1 + 0x3c))))) {
      FUN_00425780(*(int *)(param_1 + 0x3c),0xb014,0,0);
    }
    *(int **)(param_1 + 0x3c) = piVar1;
    if (((*(int *)(param_1 + 0x3c) != 0) && (pvVar2 == (HANDLE)0x0)) ||
       ((pvVar2 != (HANDLE)0x0 && (pvVar2 == *(HANDLE *)(param_1 + 0x3c))))) {
      FUN_00425780(*(int *)(param_1 + 0x3c),0xb013,0,0);
    }
  }
  return piVar1;
}


