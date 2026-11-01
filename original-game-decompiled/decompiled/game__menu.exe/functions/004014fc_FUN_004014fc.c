
/* ==== FUN_004014fc @ 004014fc ==== 
 * signature: undefined __register FUN_004014fc(int * param_1, int * param_2, int * param_3)
 * body: 004014fc-0040156c
 */

void FUN_004014fc(int *param_1,int *param_2,int *param_3)

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
      FUN_004014e4(piVar3);
      *param_3 = piVar3[2];
      param_3[1] = param_3[1] + piVar3[3];
    }
    else if (piVar3[2] == *param_3 + param_3[1]) {
      FUN_004014e4(piVar3);
      param_3[1] = param_3[1] + piVar3[3];
    }
    piVar3 = piVar1;
  } while (param_1 != piVar1);
  uVar2 = FUN_004014b4(param_1,param_3);
  if ((char)uVar2 == '\0') {
    *param_3 = 0;
  }
  return;
}


