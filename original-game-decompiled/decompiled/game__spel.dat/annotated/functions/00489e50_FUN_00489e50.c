
/* ==== FUN_00489e50 @ 00489e50 ==== 
 * signature: int __stdcall FUN_00489e50(int param_1)
 * body: 00489e50-00489e6c
 */

int FUN_00489e50(int param_1)

{
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = FUN_00558625();
    return (int)uVar1 % param_1;
  }
  return 0;
}


