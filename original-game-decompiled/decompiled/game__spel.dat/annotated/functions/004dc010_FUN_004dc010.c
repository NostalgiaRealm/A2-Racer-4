
/* ==== FUN_004dc010 @ 004dc010 ==== 
 * signature: undefined __thiscall FUN_004dc010(void * this, int * param_1)
 * body: 004dc010-004dc0af
 */

void __thiscall FUN_004dc010(void *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  piVar2 = FUN_004d4cd0(param_1,s_Class_005b73d0);
  pcVar3 = *(char **)((int)this + 0x10);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  FUN_004d4cd0(piVar2,pcVar3);
  FUN_004d43a0(piVar2,10);
  bVar1 = false;
  if (((*(byte *)(*(int *)(*piVar2 + 4) + 4 + (int)piVar2) & 6) == 0) &&
     (iVar4 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))(),
     iVar4 == -1)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0054c6db();
  }
  iVar4 = (int)this + 0x3c;
  piVar2 = FUN_004da280(piVar2,(int)this + 0x28);
  FUN_004da280(piVar2,iVar4);
  return;
}


