
/* ==== FUN_004dc780 @ 004dc780 ==== 
 * signature: int * __thiscall FUN_004dc780(void * this, int * param_1)
 * body: 004dc780-004dc7c1
 */

int * __thiscall FUN_004dc780(void *this,int *param_1)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)&DAT_005b36c4;
  piVar1 = FUN_004dbf60(param_1,(void *)((int)this + 0x1c));
  piVar1 = FUN_004d4cd0(piVar1,pcVar2);
  pcVar2 = *(char **)((int)this + 0x10);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  FUN_004d4cd0(piVar1,pcVar2);
  return piVar1;
}


