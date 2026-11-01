
/* ==== FUN_00401874 @ 00401874 ==== 
 * signature: undefined __register FUN_00401874(LPVOID param_1, int param_2, int * param_3)
 * body: 00401874-00401996
 */

void FUN_00401874(LPVOID param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  LPVOID local_20;
  int local_1c;
  int local_18 [2];
  
  uVar2 = param_2 + 0x3fffU & 0xffffc000;
  piVar1 = DAT_00447460;
LAB_0040189a:
  do {
    for (; ((int **)piVar1 != &DAT_00447460 && (param_1 != (LPVOID)piVar1[2]));
        piVar1 = (int *)*piVar1) {
    }
    if (param_1 == (LPVOID)piVar1[2]) {
      if ((int)uVar2 <= piVar1[3]) goto LAB_00401947;
      FUN_004015a0((LPVOID)(piVar1[2] + piVar1[3]),uVar2 - piVar1[3],(int *)&local_20);
      if (local_20 != (LPVOID)0x0) {
        FUN_00401438((int *)&DAT_00447460,(int *)&local_20,local_18);
        piVar1 = DAT_00447460;
        if (local_18[0] == 0) {
          FUN_00401618(local_20,local_1c,local_18);
          *param_3 = 0;
          return;
        }
        goto LAB_0040189a;
      }
    }
    FUN_004015a0(param_1,uVar2,(int *)&local_20);
    if (local_20 == (LPVOID)0x0) {
LAB_00401947:
      if ((param_1 != (LPVOID)piVar1[2]) || (piVar1[3] < (int)uVar2)) {
        *param_3 = 0;
        return;
      }
      FUN_004016d0((uint)piVar1[2],uVar2,param_3);
      if (*param_3 == 0) {
        return;
      }
      piVar1[2] = piVar1[2] + param_3[1];
      piVar1[3] = piVar1[3] - param_3[1];
      if (piVar1[3] != 0) {
        return;
      }
      FUN_00401420(piVar1);
      return;
    }
    FUN_00401438((int *)&DAT_00447460,(int *)&local_20,local_18);
    piVar1 = DAT_00447460;
    if (local_18[0] == 0) {
      FUN_00401618(local_20,local_1c,local_18);
      *param_3 = 0;
      return;
    }
  } while( true );
}


