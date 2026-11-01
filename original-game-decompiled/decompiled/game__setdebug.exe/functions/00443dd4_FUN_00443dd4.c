
/* ==== FUN_00443dd4 @ 00443dd4 ==== 
 * signature: undefined FUN_00443dd4(void)
 * body: 00443dd4-00443ee6
 */

void FUN_00443dd4(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((char)param_1[0x13] != '\0') {
    iVar3 = FUN_00419690(param_1[0x4a]);
    if (0 < iVar3) {
      iVar3 = FUN_004196a8(param_1[0x4a]);
      if (0 < iVar3) {
        uVar4 = FUN_00419690(param_1[0x4a]);
        uVar5 = FUN_004196a8(param_1[0x4a]);
        (**(code **)(*param_1 + 0x7c))(param_1,param_1[0xc],param_1[0xd],uVar5,uVar4);
      }
    }
  }
  piVar1 = *(int **)(param_1[0x4a] + 4);
  if (piVar1 == (int *)0x0) {
    param_1[0x10] = param_1[0x10] & 0xffffffbf;
    goto LAB_00443ed4;
  }
  uVar4 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_vmt_000_004155e0);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_00402e8c(piVar1,(int)&PTR_TPersistent_vmt_000_0041585c);
    if ((char)uVar4 == '\0') {
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined1 *)((int)param_1 + 0x13b));
    }
  }
  cVar2 = (**(code **)(*piVar1 + 0x28))();
  if (cVar2 == '\0') {
    if ((char)param_1[0x4e] == '\0') {
      iVar3 = (**(code **)(*piVar1 + 0x2c))();
      if (param_1[0xe] <= iVar3) {
        iVar3 = (**(code **)(*piVar1 + 0x20))();
        if (param_1[0xf] <= iVar3) goto LAB_00443e8d;
      }
      goto LAB_00443e9a;
    }
LAB_00443e8d:
    param_1[0x10] = param_1[0x10] | 0x40;
  }
  else {
LAB_00443e9a:
    param_1[0x10] = param_1[0x10] & 0xffffffbf;
  }
  uVar4 = FUN_00443c78(param_1);
  if (((char)uVar4 != '\0') && ((char)param_1[0x4f] != '\0')) {
    (**(code **)(*param_1 + 0x80))();
  }
LAB_00443ed4:
  if ((char)param_1[0x4f] == '\0') {
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}


