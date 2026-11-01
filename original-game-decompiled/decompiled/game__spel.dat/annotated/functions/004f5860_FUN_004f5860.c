
/* ==== FUN_004f5860 @ 004f5860 ==== 
 * signature: undefined __thiscall FUN_004f5860(void * this, void * param_1, double * param_2, double * param_3, int param_4, int param_5, void * param_6, double * param_7)
 * body: 004f5860-004f5947
 */

void __thiscall
FUN_004f5860(void *this,void *param_1,double *param_2,double *param_3,int param_4,int param_5,
            void *param_6,double *param_7)

{
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  double local_88 [16];
  
  if (param_1 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_88);
  }
  else {
    FUN_004f2b10(param_1,local_88);
  }
  if (param_2 == (double *)0x0) {
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
  }
  else {
    FUN_004fabb0(local_88,param_2,(double *)&local_c8);
  }
  if (param_3 == (double *)0x0) {
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
  }
  else {
    FUN_004faf30(local_88,param_3,(double *)&local_a8);
  }
  FUN_004f5680(this,param_1,(undefined8 *)&local_c8,&local_a8,param_4,param_5,param_6,param_7);
  return;
}


