
/* ==== FUN_00488bd8 @ 00488bd8 ==== 
 * signature: undefined FUN_00488bd8(void)
 * body: 00488bd8-00488ce0
 */

void FUN_00488bd8(int param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))
            (*(int **)(param_1 + 0x354),*(char *)(*(int *)(param_1 + 0x360) + 0x3c) == '\0');
  (**(code **)(**(int **)(param_1 + 0x358) + 0xb8))
            (*(int **)(param_1 + 0x358),*(char *)(*(int *)(param_1 + 0x360) + 0x3c) == '\x01');
  (**(code **)(**(int **)(param_1 + 0x35c) + 0xb8))
            (*(int **)(param_1 + 0x35c),*(char *)(*(int *)(param_1 + 0x360) + 0x3c) == '\x02');
  cVar1 = FUN_00487b9c(param_1);
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x354) + 0x5c))(*(int **)(param_1 + 0x354),0);
    (**(code **)(**(int **)(param_1 + 0x358) + 0x5c))(*(int **)(param_1 + 0x358),0);
    (**(code **)(**(int **)(param_1 + 0x35c) + 0x5c))(*(int **)(param_1 + 0x35c),0);
  }
  else {
    iVar2 = FUN_00480c9c();
    if (0 < iVar2) {
      if (iVar2 < 0x1000000) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x35c) + 0xb4))();
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(param_1 + 0x358) + 0xb8))(*(int **)(param_1 + 0x358),1);
        }
        (**(code **)(**(int **)(param_1 + 0x35c) + 0x5c))(*(int **)(param_1 + 0x35c),0);
      }
      if (iVar2 < 0x800000) {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x358) + 0xb4))();
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(param_1 + 0x354) + 0xb8))(*(int **)(param_1 + 0x354),1);
        }
        (**(code **)(**(int **)(param_1 + 0x358) + 0x5c))(*(int **)(param_1 + 0x358),0);
      }
    }
  }
  return;
}


