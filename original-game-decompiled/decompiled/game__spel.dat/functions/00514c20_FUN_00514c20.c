
/* ==== FUN_00514c20 @ 00514c20 ==== 
 * signature: undefined __stdcall FUN_00514c20(void)
 * body: 00514c20-00514c6d
 */

void FUN_00514c20(void)

{
  int *piVar1;
  int local_4;
  
  local_4 = 0;
  if (DAT_0074c780 != 0) {
    piVar1 = (int *)(DAT_0074c780 + 4);
    local_4 = *(int *)(DAT_0074c780 + 4);
    while (local_4 != 0) {
      piVar1 = piVar1 + 1;
      FUN_005145f0(&local_4);
      local_4 = *piVar1;
    }
  }
  FUN_005145f0(&DAT_0074c780);
  return;
}


