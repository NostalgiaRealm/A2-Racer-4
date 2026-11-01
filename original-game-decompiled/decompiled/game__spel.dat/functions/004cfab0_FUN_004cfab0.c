
/* ==== FUN_004cfab0 @ 004cfab0 ==== 
 * signature: bool __thiscall FUN_004cfab0(void * this, undefined4 param_1, int param_2, int param_3, undefined4 param_4)
 * body: 004cfab0-004cfae5
 */

bool __thiscall
FUN_004cfab0(void *this,undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  
  piVar2 = FUN_004d3760(*(void **)((int)this + 4),param_2,param_3);
  if (piVar2 == (int *)0x0) {
    return false;
  }
  bVar1 = FUN_004d3a10(param_1,piVar2,param_4,unaff_ESI,unaff_retaddr,param_1,param_2);
  return bVar1;
}


