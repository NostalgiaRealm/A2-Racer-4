
/* ==== FUN_004644e0 @ 004644e0 ==== 
 * signature: undefined __cdecl FUN_004644e0(int param_1)
 * body: 004644e0-0046453a
 */

void __cdecl FUN_004644e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_004641a0(*(int *)(param_1 + 0x18));
    *(int *)(param_1 + 4) =
         (*(int *)(param_1 + 4) / *(int *)(&DAT_00709f1c + iVar1 * 0x340)) *
         *(int *)(&DAT_00709f1c + iVar1 * 0x340);
    return;
  }
  iVar1 = FUN_004641a0(*(int *)(param_1 + 0x18));
  *(int *)(param_1 + 4) =
       (*(int *)(param_1 + 4) / (*(int *)(&DAT_00709f1c + iVar1 * 0x340) + -1)) *
       (*(int *)(&DAT_00709f1c + iVar1 * 0x340) + -1);
  return;
}


