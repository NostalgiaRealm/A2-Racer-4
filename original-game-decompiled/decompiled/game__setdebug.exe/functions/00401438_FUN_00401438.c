
/* ==== FUN_00401438 @ 00401438 ==== 
 * signature: undefined __register FUN_00401438(int * param_1, int * param_2, int * param_3)
 * body: 00401438-004014a8
 */

void FUN_00401438(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  do {
    piVar1 = (int *)*piVar3;
    if (piVar3[2] + piVar3[3] == *param_3) {
      FUN_00401420(piVar3);
      *param_3 = piVar3[2];
      param_3[1] = param_3[1] + piVar3[3];
    }
    else if (piVar3[2] == *param_3 + param_3[1]) {
      FUN_00401420(piVar3);
      param_3[1] = param_3[1] + piVar3[3];
    }
    piVar3 = piVar1;
  } while (param_1 != piVar1);
  uVar2 = FUN_004013f0(param_1,param_3);
  if ((char)uVar2 == '\0') {
    *param_3 = 0;
  }
  return;
}


