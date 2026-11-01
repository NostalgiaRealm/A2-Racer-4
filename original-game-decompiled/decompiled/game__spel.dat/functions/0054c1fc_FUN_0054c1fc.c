
/* ==== FUN_0054c1fc @ 0054c1fc ==== 
 * signature: short __fastcall FUN_0054c1fc(void * param_1)
 * body: 0054c1fc-0054c319
 */

short __fastcall FUN_0054c1fc(void *param_1)

{
  void *pvVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  short local_6;
  
  pvVar1 = (void *)**(uint **)((int)param_1 + 0x1c);
  pvVar5 = param_1;
  if ((pvVar1 == (void *)0x0) ||
     (pvVar5 = (void *)((int)pvVar1 + **(int **)((int)param_1 + 0x2c) * 2), pvVar5 <= pvVar1)) {
    if (*(int **)((int)param_1 + 0x50) == (int *)0x0) {
LAB_0054c232:
      local_6 = -1;
    }
    else if (*(int *)((int)param_1 + 0x38) == 0) {
      local_6 = FUN_0055b936(pvVar5,*(int **)((int)param_1 + 0x50));
      if (local_6 == -1) {
        local_6 = -1;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)((int)param_1 + 0x40);
      FUN_0040f800(*(void **)((int)param_1 + 0x44),0,0xffffffff);
      do {
        do {
          uVar3 = FUN_0055a2ba(*(undefined4 **)((int)param_1 + 0x50));
          if (uVar3 == 0xffffffff) goto LAB_0054c232;
          FUN_0047eab0(*(void **)((int)param_1 + 0x44),1,(char)uVar3);
          pvVar5 = *(void **)((int)param_1 + 0x44);
          *(undefined4 *)((int)param_1 + 0x40) = *(undefined4 *)((int)param_1 + 0x3c);
          FUN_00471de0(pvVar5);
          pvVar1 = *(void **)((int)param_1 + 0x44);
          local_c = *(int *)((int)pvVar5 + 4);
          FUN_00471de0(pvVar1);
          iVar4 = (**(code **)(**(int **)((int)param_1 + 0x38) + 0x10))
                            ((int)param_1 + 0x40,*(undefined4 *)((int)pvVar1 + 4),
                             -(uint)(local_c != 0) & *(int *)((int)pvVar5 + 8) + local_c,local_14,
                             &local_6,&stack0xfffffffc,local_10);
          if (iVar4 == 0) {
            return local_6;
          }
        } while (iVar4 == 1);
        if (iVar4 != 3) goto LAB_0054c232;
        pvVar5 = *(void **)((int)param_1 + 0x44);
      } while (*(uint *)((int)pvVar5 + 8) < 2);
      FUN_00471de0(pvVar5);
      FUN_0055b3c0((undefined4 *)&local_6,*(undefined4 **)((int)pvVar5 + 4),2);
    }
  }
  else {
    psVar2 = (short *)Gninc((int)param_1);
    local_6 = *psVar2;
  }
  return local_6;
}


