
/* ==== FUN_00518430 @ 00518430 ==== 
 * signature: int __cdecl FUN_00518430(int param_1, int param_2)
 * body: 00518430-005186f8
 */

int __cdecl FUN_00518430(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  double local_10;
  
  iVar4 = 0;
  local_24 = 0;
  local_20 = 0xffffffff;
  uStack_1c = 0x7fefffff;
  iVar3 = param_1;
  while ((iVar3 != 0 && (iVar2 = *(int *)(iVar3 + 0x30), iVar2 != 0))) {
    puVar1 = (uint *)(iVar3 + 0x50);
    iVar3 = iVar2;
    if ((*puVar1 & 0x40000) != 0) {
      iVar4 = iVar4 + 1;
    }
  }
  if ((0 < DAT_0074be5c) && (iVar3 = param_1, DAT_0074be98 == 0)) {
    for (; (iVar3 != 0 && (*(int *)(iVar3 + 0x30) != 0)); iVar3 = *(int *)(iVar3 + 0x30)) {
      iVar2 = FUN_00519690(DAT_0074be60,*(int *)(iVar3 + 0x34));
      if (iVar2 == 0) {
        iVar4 = iVar4 + -1;
        *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xfffbffff;
      }
    }
  }
  if ((DAT_0074be50 != 0) && (iVar3 = param_1, iVar4 != 0)) {
    for (; (iVar3 != 0 && (*(int *)(iVar3 + 0x30) != 0)); iVar3 = *(int *)(iVar3 + 0x30)) {
      if (((*(uint *)(iVar3 + 0x50) & 0x40000) != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
        DAT_0074c960 = DAT_0074c960 + 1;
        FUN_005273a0(DAT_0074be54,iVar3,&local_10);
        if (0 < DAT_0074be50 != 0.0 < local_10) {
          iVar4 = iVar4 + -1;
          *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xfffbffff;
        }
      }
    }
  }
  if ((DAT_0074be58 == 0) ||
     (((iVar3 = DAT_0074c664, iVar4 == 0 && (param_2 == 0)) && (DAT_0074c664 == 0))))
  goto LAB_005186ab;
  for (; (param_1 != 0 && (*(int *)(param_1 + 0x30) != 0)); param_1 = *(int *)(param_1 + 0x30)) {
    if (((*(uint *)(param_1 + 0x50) & 0x40000) != 0) &&
       ((*(int *)(param_1 + 0x18) != 0 &&
        (iVar2 = FUN_0052ab60(*(int *)(param_1 + 0x18),(double *)&local_18), iVar3 = DAT_0074c664,
        iVar2 == 0)))) {
      iVar4 = iVar4 + -1;
      *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffbffff;
      iVar3 = DAT_0074c664;
      if ((double)CONCAT44(uStack_14,local_18) < (double)CONCAT44(uStack_1c,local_20)) {
        local_20 = local_18;
        uStack_1c = uStack_14;
        local_24 = param_1;
      }
    }
  }
  if (iVar4 != 0) {
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x50) = *(uint *)(iVar3 + 0x50) & 0xfffbffff;
      DAT_0074c664 = 0;
    }
    goto LAB_005186ab;
  }
  if (param_2 == 0) {
    iVar2 = 0;
    if (iVar3 != 0) goto LAB_005185f6;
  }
  else {
    if (iVar3 == 0) goto LAB_005186ab;
LAB_005185f6:
    if ((*(uint *)(iVar3 + 0x50) & 0x400) == 0) {
      FUN_0052ab60(*(int *)(iVar3 + 0x18),(double *)&local_18);
      iVar2 = DAT_0074c664;
      if ((double)CONCAT44(uStack_14,local_18) < (double)CONCAT44(uStack_1c,local_20)) {
        local_24 = DAT_0074c664;
      }
    }
    else {
      DAT_0074c664 = 0;
      iVar2 = 0;
    }
  }
  if ((local_24 != 0) && (local_24 != iVar2)) {
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x50) = *(uint *)(iVar2 + 0x50) & 0xfffbffff;
    }
    DAT_0074c664 = local_24;
    *(uint *)(local_24 + 0x50) = *(uint *)(local_24 + 0x50) | 0x40000;
    if (1 < DAT_0074be68) {
      FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findgood__f_d_is_closest___2__005bbbf4);
    }
    return 1;
  }
LAB_005186ab:
  DAT_0074ca58 = DAT_0074ca58 + iVar4;
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_findgood__found__d_good_facet_005bbbbc);
  }
  if (((iVar4 != 0) || (DAT_0074be5c < 1)) || (DAT_0074be98 != 0)) {
    param_2 = iVar4;
  }
  return param_2;
}


