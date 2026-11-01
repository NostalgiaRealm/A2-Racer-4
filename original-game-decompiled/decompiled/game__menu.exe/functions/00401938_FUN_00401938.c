
/* ==== FUN_00401938 @ 00401938 ==== 
 * signature: undefined __register FUN_00401938(LPVOID param_1, int param_2, int * param_3)
 * body: 00401938-00401a5a
 */

void FUN_00401938(LPVOID param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  LPVOID local_20;
  int local_1c;
  int local_18 [2];
  
  uVar2 = param_2 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_004ac468;
LAB_0040195e:
  do {
    for (; ((int **)piVar1 != &DAT_004ac468 && (param_1 != (LPVOID)piVar1[2]));
        piVar1 = (int *)*piVar1) {
    }
    if (param_1 == (LPVOID)piVar1[2]) {
      if ((int)uVar2 <= piVar1[3]) goto LAB_00401a0b;
      FUN_00401664((LPVOID)(piVar1[2] + piVar1[3]),uVar2 - piVar1[3],(int *)&local_20);
      if (local_20 != (LPVOID)0x0) {
        FUN_004014fc((int *)&DAT_004ac468,(int *)&local_20,local_18);
        piVar1 = DAT_004ac468;
        if (local_18[0] == 0) {
          FUN_004016dc(local_20,local_1c,local_18);
          *param_3 = 0;
          return;
        }
        goto LAB_0040195e;
      }
    }
    FUN_00401664(param_1,uVar2,(int *)&local_20);
    if (local_20 == (LPVOID)0x0) {
LAB_00401a0b:
      if ((param_1 != (LPVOID)piVar1[2]) || (piVar1[3] < (int)uVar2)) {
        *param_3 = 0;
        return;
      }
      FUN_00401794((uint)piVar1[2],uVar2,param_3);
      if (*param_3 == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + param_3[1];
      piVar1[3] = piVar1[3] - param_3[1];
      if (piVar1[3] != 0) {
        return;
      }
      FUN_004014e4(piVar1);
      return;
    }
    FUN_004014fc((int *)&DAT_004ac468,(int *)&local_20,local_18);
    piVar1 = DAT_004ac468;
    if (local_18[0] == 0) {
      FUN_004016dc(local_20,local_1c,local_18);
      *param_3 = 0;
      return;
    }
  } while( true );
}


