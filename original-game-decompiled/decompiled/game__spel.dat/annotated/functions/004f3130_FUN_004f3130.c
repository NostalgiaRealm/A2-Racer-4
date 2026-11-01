
/* ==== FUN_004f3130 @ 004f3130 ==== 
 * signature: undefined __thiscall FUN_004f3130(void * this, double * param_1, undefined8 * param_2, int param_3)
 * body: 004f3130-004f3219
 */

void __thiscall FUN_004f3130(void *this,double *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c0 [8];
  double local_a0 [4];
  double local_80 [12];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = *(undefined4 *)((int)this + 0xa4);
  pdVar3 = param_1;
  puVar5 = local_c0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar5 = puVar5 + 1;
  }
  puVar4 = param_2;
  pdVar3 = local_a0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pdVar3 = *(undefined4 *)puVar4;
    puVar4 = (undefined8 *)((int)puVar4 + 4);
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  if ((*(uint *)((int)this + 0x80) & 0xc00) == 0) {
    FUN_004f8b00(param_1,local_80);
    local_20 = *param_2;
    local_18 = param_2[1];
    local_10 = param_2[2];
    local_d0 = -*(float *)((int)this + 0x30);
    local_cc = -*(float *)((int)this + 0x34);
    local_c8 = -*(float *)((int)this + 0x38);
    FUN_004fadc0(local_80,&local_d0,local_a0);
  }
  if (*(double **)((int)this + 0x2c) != (double *)0x0) {
    FUN_004f9060(local_c0,param_1,*(double **)((int)this + 0x2c));
  }
  local_d4 = uVar1;
  FUN_005020a0(&local_d4,local_c0,local_a0,param_3);
  return;
}


