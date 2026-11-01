
/* ==== FUN_00502820 @ 00502820 ==== 
 * signature: int * __thiscall FUN_00502820(void * this, undefined4 * param_1, undefined4 * param_2, int * param_3, undefined2 * param_4)
 * body: 00502820-00502b91
 */

int * __thiscall
FUN_00502820(void *this,undefined4 *param_1,undefined4 *param_2,int *param_3,undefined2 *param_4)

{
  int iVar1;
  uint *puVar2;
  int *this_00;
  int *this_01;
  undefined2 *this_02;
  void *this_03;
  uint *this_04;
  void *pvVar3;
  int *this_05;
  uint *local_2c;
  undefined2 *local_28;
  int local_24;
  int local_20;
  uint local_1c;
  void *local_18;
  int local_14;
  int *local_10;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_005736fc;
  local_c = ExceptionList;
  iVar1 = *(int *)((int)this + (*(uint *)((int)this + 0x14) >> 8 & 3) * 0x1c + 0x28);
  puVar2 = *(uint **)(iVar1 + 0xa8);
  local_20 = *(int *)((int)this + ((*(uint *)((int)this + 0x14) ^ 0x100) >> 8 & 3) * 0x1c + 0x28);
  this_04 = puVar2;
  local_2c = *(uint **)(local_20 + 0xa8);
  if ((*puVar2 & 0xc) != 0) {
    this_04 = *(uint **)(local_20 + 0xa8);
    local_2c = puVar2;
  }
  ExceptionList = &local_c;
  local_28 = (undefined2 *)FUN_004f5280((int)this_04);
  local_1c = this_04[3];
  this_01 = FUN_005064c0((int)this,&local_24);
  if (local_24 != 1) {
    *param_1 = *(undefined4 *)(local_28 + 4);
    *param_2 = 0;
    if (param_4 == (undefined2 *)0x0) {
      ExceptionList = local_c;
      return this_01;
    }
    FUN_00505cc0(this_01);
    FUN_00504690(this_01,this_01[0x10]);
    ExceptionList = local_c;
    return this_01;
  }
  if (param_4 != (undefined2 *)0x0) {
    FUN_00505cc0(this_01);
    FUN_00504690(this_01,this_01[0x10]);
  }
  pvVar3 = *(void **)(iVar1 + 0x18);
  local_14 = this_01[0x10];
  local_18 = pvVar3;
  local_10 = this_01;
  FUN_004f8640(pvVar3,&local_18);
  if ((*(uint *)(iVar1 + 0x80) & 0x2000) != 0) {
    FUN_004f6390(*(void **)((int)pvVar3 + 0xc),iVar1,&local_18);
  }
  if ((*(uint *)(local_20 + 0x80) & 0x2000) != 0) {
    FUN_004f6390(*(void **)((int)pvVar3 + 0xc),local_20,&local_18);
  }
  pvVar3 = (void *)0x0;
  *param_2 = 1;
  if (local_28 == (undefined2 *)0x0) {
    param_4 = operator_new(0xc);
    if (param_4 == (undefined2 *)0x0) {
      param_4 = (undefined2 *)0x0;
    }
    else {
      *param_4 = 0;
      param_4[1] = 0;
      *(undefined4 *)(param_4 + 2) = 0;
    }
    local_4 = 0xffffffff;
    local_28 = param_4;
    if (((*local_2c & 0xc) != 0) ||
       (this_02 = (undefined2 *)FUN_004f5280((int)local_2c), this_02 == (undefined2 *)0x0)) {
      this_03 = operator_new(0x50);
      local_4 = 2;
      if (this_03 != (void *)0x0) {
        pvVar3 = (void *)FUN_004f6ab0(this_03,local_1c);
      }
      local_4 = 0xffffffff;
      this_02 = operator_new(0xc);
      if (this_02 == (undefined2 *)0x0) {
        this_02 = (undefined2 *)0x0;
      }
      else {
        *this_02 = 0;
        this_02[1] = 0;
        *(undefined4 *)(this_02 + 2) = 0;
      }
      local_4 = 0xffffffff;
      *(void **)(param_4 + 4) = pvVar3;
      *(void **)(this_02 + 4) = pvVar3;
      FUN_004f5290(local_2c,(uint)this_02);
      FUN_004f5290(this_04,(uint)param_4);
      FUN_004f6db0(pvVar3,this_01);
      FUN_004f6d10(pvVar3,(int)this_01);
      FUN_004f6de0(pvVar3,(byte *)this_04);
      FUN_004f6de0(pvVar3,(byte *)local_2c);
      goto LAB_00502b05;
    }
    pvVar3 = *(void **)(this_02 + 4);
    *(void **)(param_4 + 4) = pvVar3;
    FUN_004f5290(this_04,(uint)param_4);
    FUN_004f6de0(pvVar3,(byte *)this_04);
  }
  else {
    pvVar3 = *(void **)(local_28 + 4);
    this_02 = (undefined2 *)FUN_004f5240(local_2c,(uint)pvVar3);
    if (this_02 == (undefined2 *)0x0) {
      if (((*local_2c & 0xc) == 0) &&
         (this_02 = (undefined2 *)FUN_004f5280((int)local_2c), this_02 != (undefined2 *)0x0)) {
        FUN_0053e970(pvVar3,*(int **)(this_02 + 4));
      }
      else {
        this_02 = operator_new(0xc);
        if (this_02 == (undefined2 *)0x0) {
          this_02 = (undefined2 *)0x0;
        }
        else {
          *this_02 = 0;
          this_02[1] = 0;
          *(undefined4 *)(this_02 + 2) = 0;
        }
        local_4 = 0xffffffff;
        *(void **)(this_02 + 4) = pvVar3;
        FUN_004f5290(local_2c,(uint)this_02);
        FUN_004f6de0(pvVar3,(byte *)local_2c);
      }
    }
  }
  FUN_004f6db0(pvVar3,this_01);
  FUN_004f6d10(pvVar3,(int)this_01);
LAB_00502b05:
  FUN_0051edb0(local_28,this_01);
  FUN_0051edb0(this_02,this_01);
  *param_1 = pvVar3;
  FUN_0053f7c0(this_01);
  this_00 = (int *)this_04[0x75];
  this_05 = (int *)local_2c[0x75];
  if ((((*local_2c | *this_04) & 0xc) == 0) && (this_00 != this_05)) {
    if (this_05 == param_3) {
      FUN_004ffe00(this_05,this_00);
      if (this_00 == (int *)0x0) {
        ExceptionList = local_c;
        return this_01;
      }
      FUN_004fff20((int)this_00);
      this_05 = this_00;
    }
    else {
      FUN_004ffe00(this_00,this_05);
      if (this_05 == (int *)0x0) {
        ExceptionList = local_c;
        return this_01;
      }
      FUN_004fff20((int)this_05);
    }
    FUN_0054b339(this_05);
  }
  ExceptionList = local_c;
  return this_01;
}


