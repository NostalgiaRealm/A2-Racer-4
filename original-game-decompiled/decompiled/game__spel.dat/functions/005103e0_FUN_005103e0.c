
/* ==== FUN_005103e0 @ 005103e0 ==== 
 * signature: undefined __fastcall FUN_005103e0(int * param_1)
 * body: 005103e0-00510588
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005103e0(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 unaff_EBX;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 *puVar8;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  iVar2 = *(int *)(param_1[10] + 0x18);
  switch(*(undefined2 *)((int)param_1 + 0x32)) {
  case 0:
  case 3:
    switch(*(undefined2 *)((int)param_1 + 0x4e)) {
    case 0:
    case 3:
      goto switchD_0051040f_caseD_0;
    case 1:
      uVar3 = *(uint *)param_1[0x12];
      break;
    case 2:
      uVar3 = *(uint *)(param_1[0x12] & 0xfffffff0);
      break;
    default:
      goto switchD_005103fb_default;
    }
    if ((uVar3 & 0x80000000) == 0) {
switchD_0051040f_caseD_0:
      FUN_005046f0(param_1);
      return;
    }
    break;
  case 1:
    sVar1 = *(short *)((int)param_1 + 0x4e);
    if (sVar1 == 0) {
LAB_005104e4:
      if ((*(uint *)(param_1[0xb] & 0xfffffff0) & 0x80000000) != 0) {
        param_1[0x23] = 0;
        goto LAB_0051052c;
      }
      goto switchD_0051040f_caseD_0;
    }
    if (sVar1 != 1) {
      if (sVar1 != 3) {
        _DAT_00000000 = 0;
        goto LAB_0051052c;
      }
      goto LAB_005104e4;
    }
    puVar4 = (uint *)param_1[0xb];
    if ((*(uint *)param_1[0x12] & 0x80000000) == 0) {
      if ((*puVar4 & 0x80000000) == 0) goto switchD_0051040f_caseD_0;
      param_1[0x23] = 0;
      goto LAB_0051052c;
    }
    if ((*puVar4 & 0x80000000) == 0) {
      param_1[0x23] = 1;
      goto LAB_0051052c;
    }
    puVar4 = (uint *)((uint)puVar4 & 0xfffffff0);
    puVar5 = (uint *)((uint)param_1[0x12] & 0xfffffff0);
    iVar6 = (*puVar4 & 0xfff) + 1;
    iVar7 = (*puVar5 & 0xfff) + 1;
    if (*(float *)((int)puVar5 + puVar5[iVar7 * -4 + 1] + iVar7 * -0x10 + 0x14) <
        *(float *)((int)puVar4 + puVar4[iVar6 * -4 + 1] + 0x14 + iVar6 * -0x10)) {
      param_1[0x23] = 0;
      goto LAB_0051052c;
    }
    break;
  case 2:
    if ((*(uint *)(param_1[0xb] & 0xfffffff0) & 0x80000000) != 0) {
      param_1[0x23] = 0;
      goto LAB_0051052c;
    }
    goto switchD_0051040f_caseD_0;
  default:
switchD_005103fb_default:
    _DAT_00000000 = 0;
    goto LAB_0051052c;
  }
  param_1[0x23] = 1;
LAB_0051052c:
  FUN_0053b570(*(void **)(iVar2 + 0x10),(int)param_1);
  puVar8 = local_8;
  (**(code **)**(undefined4 **)(iVar2 + 0x1c))(param_1[10],param_1[0x11],local_10);
  FUN_0053b8a0((int)param_1,
               (float)((float10)(double)CONCAT44(unaff_EDI,puVar8) +
                      (float10)(double)CONCAT44(unaff_EBX,unaff_ESI)));
  param_1[5] = param_1[5] & 0xffd3ffffU | 0x100000;
  FUN_005108c0((int)param_1);
  return;
}


