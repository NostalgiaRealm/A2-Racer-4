
/* ==== FUN_00489e80 @ 00489e80 ==== 
 * signature: undefined __stdcall FUN_00489e80(int param_1, uint * param_2)
 * body: 00489e80-00489ebf
 */

void FUN_00489e80(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00489e70(param_2);
  if (((char)uVar1 != '\0') && (iVar2 = FUN_0049ca80(param_1), iVar2 == 1)) {
    uVar1 = *param_2;
    if (uVar1 != 0x1000001) {
      if (uVar1 == 0x1000002) {
        *param_2 = 3;
        return;
      }
      if (uVar1 != 0x1000003) {
        return;
      }
    }
    *param_2 = 2;
  }
  return;
}


