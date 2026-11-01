
/* ==== FUN_00468540 @ 00468540 ==== 
 * signature: undefined __thiscall FUN_00468540(void * this, int * param_1, int * param_2, int * param_3)
 * body: 00468540-004685c3
 */

void __thiscall FUN_00468540(void *this,int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return;
  }
  do {
    piVar2 = (int *)*param_2;
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    iVar3 = param_2[3];
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iVar3 + -1));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    FUN_0054b339(param_2);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    param_2 = piVar2;
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return;
}


