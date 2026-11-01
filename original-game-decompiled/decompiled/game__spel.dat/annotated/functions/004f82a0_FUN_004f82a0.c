
/* ==== FUN_004f82a0 @ 004f82a0 ==== 
 * signature: int * __thiscall FUN_004f82a0(void * this, int * param_1, char * param_2, int param_3)
 * body: 004f82a0-004f8312
 */

int * __thiscall FUN_004f82a0(void *this,int *param_1,char *param_2,int param_3)

{
  void *this_00;
  int *piVar1;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005732eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x170);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    piVar1 = FUN_004f7320(this_00,(int)this,param_1,param_2,param_3);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


