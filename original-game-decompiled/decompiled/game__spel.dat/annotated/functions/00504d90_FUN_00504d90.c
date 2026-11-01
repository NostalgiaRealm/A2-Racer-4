
/* ==== FUN_00504d90 @ 00504d90 ==== 
 * signature: undefined __thiscall FUN_00504d90(void * this, void * param_1)
 * body: 00504d90-00504ee0
 */

void __thiscall FUN_00504d90(void *this,void *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int *local_58;
  int local_54;
  undefined4 local_4c;
  float fStack_3c;
  int local_38 [2];
  double local_30;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_005045f0(param_1,local_38);
  local_58 = local_38 + 1;
  local_4c = 0;
  piVar4 = local_38;
  piVar3 = (int *)((int)param_1 + 0x10);
  local_54 = 2;
  do {
    if (*(int *)(*piVar4 + 8) != 0) {
      iVar2 = *(int *)(*piVar3 + 0xa8);
      local_18 = (float)*(double *)(iVar2 + 0x128);
      local_14 = (float)*(double *)(iVar2 + 0x148);
      local_10 = (float)*(double *)(iVar2 + 0x168);
      FUN_004f9970(&local_28,&local_18,*(float **)((int)param_1 + 0x40));
      fVar5 = FUN_004f9440(&local_28);
      local_30 = (double)fVar5;
      fVar6 = (float10)(**(code **)(*(int *)*piVar4 + 4))();
      fVar7 = (float10)(*(code *)**(undefined4 **)*local_58)();
      fVar1 = *(float *)((int)param_1 + 0x44);
      fVar5 = (float10)local_30;
      if (1e-19 <= local_30) {
        local_4c = 1;
        FUN_004f9780(&local_28);
        *(float *)((int)this + 0xf0) = local_28;
        *(undefined4 *)((int)this + 0xf4) = uStack_24;
        *(undefined4 *)((int)this + 0xf8) = uStack_20;
        FUN_00504640((float)((float10)fVar1 -
                            ((float10)fVar1 - fVar7 * (float10)(double)fVar6) * fVar5),
                     *(float *)((int)this + 0x110),&fStack_3c,(float *)((int)this + 0xec));
      }
    }
    piVar3 = piVar3 + 5;
    piVar4 = piVar4 + 1;
    local_58 = local_58 + -1;
    local_54 = local_54 + -1;
  } while (local_54 != 0);
  *(undefined4 *)((int)this + 0xe8) = local_4c;
  return;
}


