
/* ==== FUN_0043dd18 @ 0043dd18 ==== 
 * signature: undefined __register FUN_0043dd18(int param_1, undefined4 param_2)
 * body: 0043dd18-0043dd67
 */

void FUN_0043dd18(int param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  
  if ((*(char *)(param_1 + 0x216) != '\0') && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_00425780(*(int *)(param_1 + 0x208),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x217) == '\x02') {
    pvVar1 = FUN_0043ca44(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      pvVar1 = FUN_0043ca44(param_1);
      FUN_0043dd18((int)pvVar1,param_2);
    }
  }
  return;
}


