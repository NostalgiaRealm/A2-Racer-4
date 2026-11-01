
/* ==== FUN_004d3f90 @ 004d3f90 ==== 
 * signature: int * __thiscall FUN_004d3f90(void * this, void * param_1)
 * body: 004d3f90-004d401e
 */

int * __thiscall FUN_004d3f90(void *this,void *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)&DAT_005b36c4;
  piVar2 = FUN_004d4130(param_1,*(char **)((int)this + 4));
  piVar2 = FUN_004d4cd0(piVar2,pcVar4);
  pcVar4 = *(char **)((int)this + 0x10);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  FUN_004d4cd0(piVar2,pcVar4);
  FUN_004d43a0(piVar2,10);
  bVar1 = false;
  if (((*(byte *)(*(int *)(*piVar2 + 4) + 4 + (int)piVar2) & 6) == 0) &&
     (iVar3 = (**(code **)(**(int **)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x28) + 0x2c))(),
     iVar3 == -1)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_0054c6db();
  }
  return piVar2;
}


