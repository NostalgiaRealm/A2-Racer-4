
/* ==== FUN_0054bfcf @ 0054bfcf ==== 
 * signature: uint __thiscall FUN_0054bfcf(void * this, uint param_1)
 * body: 0054bfcf-0054c116
 */

uint __thiscall FUN_0054bfcf(void *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  short sVar3;
  uint in_EAX;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  sVar3 = (short)param_1;
  if (sVar3 == -1) {
    return in_EAX & 0xffff0000;
  }
  uVar5 = **(uint **)((int)this + 0x20);
  if ((uVar5 != 0) && (uVar5 < uVar5 + **(int **)((int)this + 0x30) * 2)) {
    psVar4 = (short *)FUN_0054c5ca((int)this);
    *psVar4 = sVar3;
    return CONCAT22((short)((uint)psVar4 >> 0x10),sVar3);
  }
  puVar7 = (undefined4 *)0x0;
  if (*(int **)((int)this + 0x50) == (int *)0x0) goto LAB_0054c01c;
  if (*(int *)((int)this + 0x38) == 0) {
    uVar5 = FUN_0055b758(param_1,*(int **)((int)this + 0x50));
    sVar3 = (short)uVar5;
LAB_0054c0c8:
    if (sVar3 != -1) {
      return param_1;
    }
  }
  else {
    local_8 = param_1;
    FUN_0040f800(*(void **)((int)this + 0x44),0,0xffffffff);
    FUN_0047eab0(*(void **)((int)this + 0x44),8,0);
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_00471de0(pvVar1);
    pvVar2 = *(void **)((int)this + 0x44);
    local_c = *(int *)((int)pvVar1 + 4);
    FUN_00471de0(pvVar2);
    iVar6 = (**(code **)(**(int **)((int)this + 0x38) + 0x14))
                      ((int)this + 0x40,&local_8,(int)&local_8 + 2,&local_10,
                       *(undefined4 *)((int)pvVar2 + 4),
                       -(uint)(local_c != 0) & *(int *)((int)pvVar1 + 8) + local_c,&local_14);
    if (iVar6 != 0) {
      if (iVar6 != 1) {
        puVar7 = (undefined4 *)(iVar6 + -3);
        if (puVar7 != (undefined4 *)0x0) {
LAB_0054c01c:
          return CONCAT22((short)((uint)puVar7 >> 0x10),0xffff);
        }
        uVar5 = FUN_0055b758(local_8,*(int **)((int)this + 0x50));
        sVar3 = (short)uVar5;
        goto LAB_0054c0c8;
      }
      puVar7 = &local_8;
      if (local_10 == puVar7) goto LAB_0054c01c;
    }
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_00471de0(pvVar1);
    uVar8 = local_14 - *(int *)((int)pvVar1 + 4);
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_00471de0(pvVar1);
    uVar5 = FUN_00558c1d(*(char **)((int)pvVar1 + 4),uVar8,1,*(int **)((int)this + 0x50));
    if (uVar5 == uVar8) {
      return param_1;
    }
  }
  return 0xffff;
}


