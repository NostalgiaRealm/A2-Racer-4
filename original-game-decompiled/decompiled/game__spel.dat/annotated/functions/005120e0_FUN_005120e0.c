
/* ==== FUN_005120e0 @ 005120e0 ==== 
 * signature: undefined __stdcall FUN_005120e0(void * param_1, int param_2)
 * body: 005120e0-00512127
 */

/* WARNING: Removing unreachable block (ram,0x00512111) */

void FUN_005120e0(void *param_1,int param_2)

{
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if (*(int *)(param_2 + 0x34) != 0) break;
    if (*(int *)(param_2 + 0x38) != 0) {
      FUN_005120e0(param_1,*(int *)(param_2 + 0x38));
    }
    param_2 = *(int *)(param_2 + 0x3c);
  }
  FUN_0051edb0(param_1,*(undefined4 *)(param_2 + 0x34));
  return;
}


