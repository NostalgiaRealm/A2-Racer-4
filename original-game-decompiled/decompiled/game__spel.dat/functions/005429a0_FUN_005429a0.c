
/* ==== FUN_005429a0 @ 005429a0 ==== 
 * signature: undefined __cdecl FUN_005429a0(int param_1)
 * body: 005429a0-00542a6d
 */

void __cdecl FUN_005429a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0x28);
  iVar2 = *(int *)(*(int *)(param_1 + 0x20) + 0x44);
  if (*(int *)(iVar1 + 0x40) == 0) {
    puVar4 = FUN_004fe470(*(void **)(*(int *)(iVar1 + 0x18) + 0xa4),iVar1);
    *(undefined4 **)(iVar1 + 0x40) = puVar4;
  }
  *(int *)(*(int *)(iVar1 + 0x40) + 4) = *(int *)(*(int *)(iVar1 + 0x40) + 4) + 1;
  if ((*(int *)(iVar1 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar1 + 0x40) < *(int *)(*(int *)(iVar1 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar1 + 0x40));
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (*(int *)(iVar2 + 0x40) == 0) {
    puVar4 = FUN_004fe470(*(void **)(*(int *)(iVar2 + 0x18) + 0xa4),iVar2);
    *(undefined4 **)(iVar2 + 0x40) = puVar4;
  }
  *(int *)(*(int *)(iVar2 + 0x40) + 4) = *(int *)(*(int *)(iVar2 + 0x40) + 4) + 1;
  if ((*(int *)(iVar2 + 0x80) * 0x1000000 < 0x8000000) &&
     (**(int **)(iVar2 + 0x40) < *(int *)(*(int *)(iVar2 + 0x18) + 0x138))) {
    FUN_004fe580(*(int **)(iVar2 + 0x40));
  }
  piVar3 = *(int **)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00541a20(piVar3);
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
  piVar3[1] = piVar3[1] + -1;
  return;
}


