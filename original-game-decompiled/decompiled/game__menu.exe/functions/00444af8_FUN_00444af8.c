
/* ==== FUN_00444af8 @ 00444af8 ==== 
 * signature: undefined __register FUN_00444af8(int param_1)
 * body: 00444af8-00444ba2
 */

void FUN_00444af8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar4;
  undefined1 *puVar5;
  
  if ((char)(*(int **)(param_1 + 4))[0x7e] != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xb4))();
    if (cVar1 == '\0') {
      FUN_0044522c(param_1,0);
    }
    else {
      iVar2 = FUN_004317bc(*(int *)(param_1 + 4));
      if (-1 < iVar2 + -1) {
        iVar4 = 0;
        do {
          if (*(char *)(param_1 + 0x18) == '\0') {
            puVar5 = &stack0xfffffffc;
            iVar3 = FUN_00431780(*(int *)(param_1 + 4),iVar4);
            FUN_00444a24(iVar3,extraout_EDX,extraout_ECX,(int)puVar5);
          }
          else {
            puVar5 = &stack0xfffffffc;
            iVar3 = FUN_00431780(*(int *)(param_1 + 4),iVar4);
            FUN_00444a90(iVar3,extraout_EDX_00,extraout_ECX_00,(int)puVar5);
          }
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_0044522c(param_1,(uint)*(ushort *)(param_1 + 0x1a));
    }
  }
  return;
}


