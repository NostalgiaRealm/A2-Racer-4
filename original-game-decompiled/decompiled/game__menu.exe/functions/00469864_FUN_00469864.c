
/* ==== FUN_00469864 @ 00469864 ==== 
 * signature: undefined __register FUN_00469864(int param_1, undefined4 param_2)
 * body: 00469864-00469894
 */

void FUN_00469864(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (cVar1 != *(char *)(param_1 + 0x218)) {
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_0045defc(*(int *)(param_1 + 0x208),param_1,
                   CONCAT31((int3)((uint)param_2 >> 8),*(char *)(param_1 + 0x218)),cVar1);
    }
    *(char *)(param_1 + 0x218) = cVar1;
  }
  return;
}


