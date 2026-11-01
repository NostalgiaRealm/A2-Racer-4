
/* ==== FUN_004dcef0 @ 004dcef0 ==== 
 * signature: undefined4 __fastcall FUN_004dcef0(int param_1)
 * body: 004dcef0-004dcf14
 */

undefined4 __fastcall FUN_004dcef0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x70);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 != 0);
}


