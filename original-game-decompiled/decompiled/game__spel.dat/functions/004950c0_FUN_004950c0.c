
/* ==== FUN_004950c0 @ 004950c0 ==== 
 * signature: undefined __fastcall FUN_004950c0(int param_1)
 * body: 004950c0-0049524d
 */

/* WARNING: Removing unreachable block (ram,0x00495142) */
/* WARNING: Removing unreachable block (ram,0x004951ae) */
/* WARNING: Removing unreachable block (ram,0x00495198) */
/* WARNING: Removing unreachable block (ram,0x00495182) */
/* WARNING: Removing unreachable block (ram,0x004951c4) */
/* WARNING: Removing unreachable block (ram,0x00495162) */
/* WARNING: Removing unreachable block (ram,0x00495149) */
/* WARNING: Removing unreachable block (ram,0x004951c7) */
/* WARNING: Recovered jumptable eliminated as dead code */

void __fastcall FUN_004950c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  float fVar4;
  
  (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(0);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(0);
  FUN_00494ec0(param_1);
  fVar2 = FUN_004a67f0(0x7128b0);
  fVar4 = (float)fVar2;
  FUN_004a67f0(0x7128b0);
  lVar3 = __ftol();
  iVar1 = FUN_00429360(DAT_006fba58);
  if (iVar1 == 0) {
    if (0.4 < fVar4 - (float)(int)lVar3) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(1);
      FUN_00494f10(param_1);
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(0);
  }
  FUN_00494f10(param_1);
  return;
}


