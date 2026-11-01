
/* ==== FUN_004aec50 @ 004aec50 ==== 
 * signature: undefined __thiscall FUN_004aec50(void * this, int param_1, int param_2)
 * body: 004aec50-004aecc0
 */

void __thiscall FUN_004aec50(void *this,int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int local_8;
  int local_4;
  
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  bVar1 = FUN_004af520(param_1,param_2,&param_1,&param_2,&local_4,&local_8);
  FUN_004aecd0(this,param_1,param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_004aecd0(this,local_4,local_8);
  }
  return;
}


