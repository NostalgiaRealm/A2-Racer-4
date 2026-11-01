
/* ==== FUN_004f4cc0 @ 004f4cc0 ==== 
 * signature: uint * __thiscall FUN_004f4cc0(void * this, int param_1, undefined4 * param_2, undefined8 * param_3, uint param_4, uint param_5)
 * body: 004f4cc0-004f4e1d
 */

uint * __thiscall
FUN_004f4cc0(void *this,int param_1,undefined4 *param_2,undefined8 *param_3,uint param_4,
            uint param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  undefined4 *puVar7;
  void *local_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00572ed6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004f4e20((int)this);
  *(undefined2 *)((int)this + 0x1c8) = 0;
  *(undefined2 *)((int)this + 0x1ca) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  local_c = 1;
  FUN_004f4bb0(this,param_1);
  *(uint *)this = (param_4 & 3) << 2 | *(uint *)this & 0xfffffff3;
  FUN_00500560(*(void **)(*(int *)((int)this + 0xc) + 8),*(int **)((int)this + 0x1d4));
  pdVar6 = (double *)((int)this + 0xe8);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar6 = *param_2;
    param_2 = param_2 + 1;
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  FUN_004f8f20((double *)((int)this + 0xe8));
  puVar5 = (undefined4 *)((int)this + 0xe8);
  puVar7 = (undefined4 *)((int)this + 0x108);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar1 = param_3[1];
  uVar2 = *(undefined4 *)(param_3 + 2);
  uVar3 = *(undefined4 *)((int)param_3 + 0x14);
  *(undefined8 *)((int)this + 0xb8) = *param_3;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined8 *)((int)this + 0xc0) = uVar1;
  *(undefined4 *)((int)this + 0xcc) = uVar3;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  FUN_004f8b00((undefined4 *)((int)this + 0xe8),(double *)((int)this + 0x128));
  uVar1 = param_3[1];
  uVar2 = *(undefined4 *)(param_3 + 2);
  uVar3 = *(undefined4 *)((int)param_3 + 0x14);
  *(undefined8 *)((int)this + 0x188) = *param_3;
  *(undefined8 *)((int)this + 400) = uVar1;
  *(undefined4 *)((int)this + 0x198) = uVar2;
  *(undefined4 *)((int)this + 0x19c) = uVar3;
  FUN_004f3c00(this,0x447a0000,0x447a0000);
  *(uint *)this = (*(uint *)this ^ param_5) & 3 ^ *(uint *)this;
  ExceptionList = local_14;
  return this;
}


