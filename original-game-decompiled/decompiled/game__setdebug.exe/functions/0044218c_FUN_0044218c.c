
/* ==== FUN_0044218c @ 0044218c ==== 
 * signature: undefined __register FUN_0044218c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 0044218c-004421e6
 */

void FUN_0044218c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    if (*(HWND *)(param_1 + 0x24) != (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x24),0xb020,0,(LPARAM)&param_4);
    }
  }
  else {
    FUN_0040f004(*(undefined4 **)(param_1 + 0x98));
    puVar1 = (undefined4 *)FUN_004026b8(8);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    FUN_0040eec8(*(int **)(param_1 + 0x98),(int)puVar1);
  }
  return;
}


