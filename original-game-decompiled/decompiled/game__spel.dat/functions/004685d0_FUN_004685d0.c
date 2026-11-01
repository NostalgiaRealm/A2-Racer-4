
/* ==== FUN_004685d0 @ 004685d0 ==== 
 * signature: undefined __thiscall FUN_004685d0(void * this, int * param_1, int * param_2)
 * body: 004685d0-0046863e
 */

void __thiscall FUN_004685d0(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_2;
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
  *param_1 = iVar2;
  return;
}


