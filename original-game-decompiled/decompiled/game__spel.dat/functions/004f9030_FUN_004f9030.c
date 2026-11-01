
/* ==== FUN_004f9030 @ 004f9030 ==== 
 * signature: undefined __thiscall FUN_004f9030(void * this, double * param_1)
 * body: 004f9030-004f9058
 */

void __thiscall FUN_004f9030(void *this,double *param_1)

{
  *(double *)this = -*param_1;
  *(double *)((int)this + 8) = -param_1[1];
  *(double *)((int)this + 0x10) = -param_1[2];
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c);
  return;
}


