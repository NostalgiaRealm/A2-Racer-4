
/* ==== FUN_004017e4 @ 004017e4 ==== 
 * signature: undefined __register FUN_004017e4(int param_1, int * param_2)
 * body: 004017e4-00401871
 */

void FUN_004017e4(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int local_18 [2];
  
  uVar2 = param_1 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_00447460;
  do {
    for (; (int **)piVar1 != &DAT_00447460; piVar1 = (int *)*piVar1) {
      if ((int)uVar2 <= piVar1[3]) {
        FUN_004016d0(piVar1[2],uVar2,param_2);
        if (*param_2 == 0) {
          return;
        }
        piVar1[2] = piVar1[2] + param_2[1];
        piVar1[3] = piVar1[3] - param_2[1];
        if (piVar1[3] != 0) {
          return;
        }
        FUN_00401420(piVar1);
        return;
      }
    }
    FUN_0040153c(uVar2,param_2);
    if (*param_2 == 0) {
      return;
    }
    FUN_00401438((int *)&DAT_00447460,param_2,local_18);
    piVar1 = DAT_00447460;
  } while (local_18[0] != 0);
  FUN_00401618((LPVOID)*param_2,param_2[1],local_18);
  *param_2 = 0;
  return;
}


