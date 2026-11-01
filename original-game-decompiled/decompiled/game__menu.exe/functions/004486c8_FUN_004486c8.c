
/* ==== FUN_004486c8 @ 004486c8 ==== 
 * signature: undefined __register FUN_004486c8(int param_1, undefined4 param_2)
 * body: 004486c8-00448717
 */

void FUN_004486c8(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  
  if ((*(char *)(param_1 + 0x216) != '\0') && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_0042f720(*(int *)(param_1 + 0x208),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x217) == '\x02') {
    pvVar1 = FUN_004473f4(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = FUN_004473f4(param_1);
      FUN_004486c8((int)pvVar1,param_2);
    }
  }
  return;
}


