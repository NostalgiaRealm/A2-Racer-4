
/* ==== FUN_004018a8 @ 004018a8 ==== 
 * signature: undefined __register FUN_004018a8(int param_1, int * param_2)
 * body: 004018a8-00401935
 */

void FUN_004018a8(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int local_18 [2];
  
  uVar2 = param_1 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_004ac468;
  do {
    for (; (int **)piVar1 != &DAT_004ac468; piVar1 = (int *)*piVar1) {
      if ((int)uVar2 <= piVar1[3]) {
        FUN_00401794(piVar1[2],uVar2,param_2);
        if (*param_2 == 0) {
          return;
        }
        piVar1[2] = piVar1[2] + param_2[1];
        piVar1[3] = piVar1[3] - param_2[1];
        if (piVar1[3] != 0) {
          return;
        }
        FUN_004014e4(piVar1);
        return;
      }
    }
    FUN_00401600(uVar2,param_2);
    if (*param_2 == 0) {
      return;
    }
    FUN_004014fc((int *)&DAT_004ac468,param_2,local_18);
    piVar1 = DAT_004ac468;
  } while (local_18[0] != 0);
  FUN_004016dc((LPVOID)*param_2,param_2[1],local_18);
  *param_2 = 0;
  return;
}


