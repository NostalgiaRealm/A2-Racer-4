
/* ==== FUN_004f2ab0 @ 004f2ab0 ==== 
 * signature: undefined __thiscall FUN_004f2ab0(void * this, double * param_1)
 * body: 004f2ab0-004f2b00
 */

void __thiscall FUN_004f2ab0(void *this,double *param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_004fa010((undefined4 *)param_1);
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    FUN_004fa010((undefined4 *)param_1);
  }
  else {
    FUN_004f8b00(*(void **)((int)this + 0x2c),param_1);
  }
  fVar1 = *(float *)((int)this + 0x34);
  fVar2 = *(float *)((int)this + 0x38);
  param_1[0xc] = (double)*(float *)((int)this + 0x30);
  param_1[0xe] = (double)fVar2;
  param_1[0xd] = (double)fVar1;
  return;
}


