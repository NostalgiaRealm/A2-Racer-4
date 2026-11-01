
/* ==== FUN_00468dd4 @ 00468dd4 ==== 
 * signature: undefined __register FUN_00468dd4(int param_1, undefined4 param_2)
 * body: 00468dd4-00468e04
 */

void FUN_00468dd4(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (cVar1 != *(char *)(param_1 + 0x17a)) {
    if (*(int *)(param_1 + 0x174) != 0) {
      FUN_00467eac(*(int *)(param_1 + 0x174),param_1,
                   CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_1 + 0x17a)),cVar1);
    }
    *(char *)(param_1 + 0x17a) = cVar1;
  }
  return;
}


