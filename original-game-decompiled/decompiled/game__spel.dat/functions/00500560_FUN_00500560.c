
/* ==== FUN_00500560 @ 00500560 ==== 
 * signature: undefined __thiscall FUN_00500560(void * this, int * param_1)
 * body: 00500560-00500582
 */

void __thiscall FUN_00500560(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + 0x18);
  if (0x7ffffff < *param_1 * 0x1000000) {
    piVar1 = (int *)((int)this + 0x1a8);
  }
  FUN_00500540((int)param_1,piVar1);
  return;
}


