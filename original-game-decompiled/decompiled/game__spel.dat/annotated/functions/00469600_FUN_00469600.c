
/* ==== FUN_00469600 @ 00469600 ==== 
 * signature: undefined __fastcall FUN_00469600(int * param_1)
 * body: 00469600-00469635
 */

void __fastcall FUN_00469600(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    iVar1 = 0;
    if (0 < param_1[1]) {
      do {
        FUN_0054b339(*(LPVOID *)(*param_1 + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[1]);
    }
    FUN_0054b339((LPVOID)*param_1);
  }
  return;
}


