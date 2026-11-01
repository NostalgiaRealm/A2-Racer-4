
/* ==== FUN_004f5680 @ 004f5680 ==== 
 * signature: undefined __thiscall FUN_004f5680(void * this, void * param_1, undefined8 * param_2, undefined4 * param_3, int param_4, int param_5, void * param_6, double * param_7)
 * body: 004f5680-004f585e
 */

void __thiscall
FUN_004f5680(void *this,void *param_1,undefined8 *param_2,undefined4 *param_3,int param_4,
            int param_5,void *param_6,double *param_7)

{
  undefined4 *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  double local_208 [16];
  double local_188 [16];
  undefined8 local_108 [16];
  double local_88 [16];
  
  if (param_1 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_188);
  }
  else {
    FUN_004f2b10(param_1,local_188);
  }
  if (param_6 == (void *)0x0) {
    FUN_004fa010((undefined4 *)local_208);
  }
  else {
    FUN_004f2b10(param_6,local_208);
  }
  FUN_004fa5b0(local_208,local_188,local_108);
  if ((param_3 == (undefined4 *)0x0) && (param_2 == (undefined8 *)0x0)) {
    *(undefined4 *)((int)this + 0x88) = 0;
    goto LAB_004f577c;
  }
  this_00 = (undefined4 *)((int)this + 8);
  *(undefined4 **)((int)this + 0x88) = this_00;
  if (param_3 == (undefined4 *)0x0) {
    FUN_004fa040(this_00);
  }
  else {
    if ((param_5 == 2) || (param_4 == 2)) {
      iVar4 = 2;
    }
    else {
      if ((param_5 != 1) && (param_4 != 1)) {
        FUN_004fa040(this_00);
        goto LAB_004f573f;
      }
      iVar4 = 0;
    }
    FUN_004fa0b0(this_00,param_3,iVar4);
  }
LAB_004f573f:
  if (param_2 == (undefined8 *)0x0) {
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  else {
    uVar1 = param_2[1];
    uVar2 = *(undefined4 *)(param_2 + 2);
    uVar3 = *(undefined4 *)((int)param_2 + 0x14);
    *(undefined8 *)((int)this + 0x68) = *param_2;
    *(undefined8 *)((int)this + 0x70) = uVar1;
    *(undefined4 *)((int)this + 0x78) = uVar2;
    *(undefined4 *)((int)this + 0x7c) = uVar3;
  }
LAB_004f577c:
  *(undefined4 *)((int)this + 0xf0) = 0;
  if (param_7 == (double *)0x0) {
    *(undefined4 *)((int)this + 0x178) = 0;
  }
  else {
    *(int *)((int)this + 0x178) = (int)this + 0xf8;
    FUN_004fa460(local_108,*(double **)((int)this + 0x88),local_88);
    FUN_004fa460(local_88,param_7,*(double **)((int)this + 0x178));
  }
  *(void **)((int)this + 4) = param_1;
  *(void **)((int)this + 0xf4) = param_6;
  *(uint *)((int)this + 0x184) = (uint)(0 < param_4);
  *(uint *)((int)this + 0x188) = (uint)(param_4 != 1 && -1 < param_4 + -1);
  *(uint *)((int)this + 0x18c) = (uint)(param_4 + -1 != 1 && -1 < param_4 + -2);
  *(uint *)((int)this + 400) = (uint)(0 < param_5);
  *(uint *)((int)this + 0x194) = (uint)(param_5 != 1 && -1 < param_5 + -1);
  *(uint *)((int)this + 0x198) = (uint)(param_5 + -1 != 1 && -1 < param_5 + -2);
  return;
}


