
/* ==== FUN_00499600 @ 00499600 ==== 
 * signature: undefined __register FUN_00499600(int param_1)
 * body: 00499600-0049964f
 */

void FUN_00499600(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0x34c) == '\x04') {
    iVar2 = FUN_004993b8();
    (**(code **)(**(int **)(param_1 + 0x30c) + 0x5c))
              (*(int **)(param_1 + 0x30c),*(int *)(iVar2 + 0x10) < 100);
    return;
  }
  iVar2 = FUN_004993b8();
  uVar1 = FUN_0048d8c0(iVar2,CONCAT31((int3)((uint)extraout_EDX >> 8),
                                      *(undefined1 *)(param_1 + 0x34c)));
  (**(code **)(**(int **)(param_1 + 0x30c) + 0x5c))
            (*(int **)(param_1 + 0x30c),CONCAT31(extraout_var,uVar1) ^ 1);
  return;
}


