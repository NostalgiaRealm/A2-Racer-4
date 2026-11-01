
/* ==== FUN_00474e3c @ 00474e3c ==== 
 * signature: undefined __register FUN_00474e3c(uint param_1, int * param_2, int * param_3, LPRECT param_4, uint * param_5, char param_6, uint param_7, uint param_8, byte param_9, undefined * param_10, uint * param_11)
 * body: 00474e3c-004752a3
 */

void FUN_00474e3c(uint param_1,int *param_2,int *param_3,LPRECT param_4,uint *param_5,char param_6,
                 uint param_7,uint param_8,byte param_9,undefined *param_10,uint *param_11)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  LPCSTR lpchText;
  HDC hdc;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *piVar4;
  int iVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  uint uVar6;
  uint extraout_EDX_04;
  uint uVar7;
  int extraout_EDX_05;
  uint extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  int extraout_EDX_09;
  int extraout_EDX_10;
  int extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  int extraout_EDX_14;
  int extraout_EDX_15;
  int extraout_EDX_16;
  int iVar8;
  int extraout_EDX_17;
  int extraout_EDX_18;
  int dx;
  int extraout_EDX_19;
  LONG *pLVar9;
  LPRECT ptVar10;
  byte bVar11;
  UINT format;
  LONG local_44 [4];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  bVar11 = 0;
  iVar5 = param_3[3] - param_3[1];
  local_c = param_2;
  local_8 = param_1;
  if (SBORROW4(param_3[3],param_3[1])) {
    thunk_FUN_00402808(param_1);
    iVar5 = extraout_EDX;
  }
  uVar2 = param_3[2] - *param_3;
  if (SBORROW4(param_3[2],*param_3)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_00;
  }
  FUN_0040f7d0(uVar2,iVar5,&local_1c);
  if (*(int *)(local_8 + 4) == 0) {
    FUN_0040f7d0(0,0,&local_24);
  }
  else {
    uVar3 = (**(code **)(**(int **)(local_8 + 4) + 0x20))();
    iVar5 = (**(code **)(**(int **)(local_8 + 4) + 0x2c))();
    FUN_0040f7d0(iVar5 / (int)(uint)*(byte *)(local_8 + 0x20),uVar3,&local_24);
  }
  if ((param_6 == '\0') || (iVar5 = FUN_00403edc((int)param_10), iVar5 < 1)) {
    FUN_0040f7e8(0,0,0,local_44,0);
    pLVar9 = local_44;
    ptVar10 = param_4;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar10->left = *pLVar9;
      pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
      ptVar10 = (LPRECT)((int)ptVar10 + (uint)bVar11 * -8 + 4);
    }
    FUN_0040f7d0(0,0,&local_2c);
  }
  else {
    uVar3 = 0;
    pLVar9 = local_44;
    iVar5 = param_3[2] - *param_3;
    if (SBORROW4(param_3[2],*param_3)) {
      thunk_FUN_00402808((uint)pLVar9);
      iVar5 = extraout_ECX;
    }
    FUN_0040f7e8(0,0,iVar5,pLVar9,uVar3);
    pLVar9 = local_44;
    ptVar10 = param_4;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      ptVar10->left = *pLVar9;
      pLVar9 = pLVar9 + (uint)bVar11 * -2 + 1;
      ptVar10 = (LPRECT)((int)ptVar10 + (uint)bVar11 * -8 + 4);
    }
    format = 0x400;
    ptVar10 = param_4;
    iVar5 = FUN_00403edc((int)param_10);
    lpchText = FUN_004040a0(param_10);
    hdc = (HDC)FUN_004194d8(local_c);
    uVar2 = DrawTextA(hdc,lpchText,iVar5,ptVar10,format);
    iVar5 = param_4->bottom - param_4->top;
    if (SBORROW4(param_4->bottom,param_4->top)) {
      thunk_FUN_00402808(uVar2);
      iVar5 = extraout_EDX_01;
    }
    uVar2 = param_4->right - param_4->left;
    if (SBORROW4(param_4->right,param_4->left)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar5 = extraout_EDX_02;
    }
    FUN_0040f7d0(uVar2,iVar5,&local_2c);
  }
  if (param_9 < 2) {
    iVar5 = local_18 - local_20;
    uVar2 = local_18;
    if (SBORROW4(local_18,local_20)) {
      uVar2 = thunk_FUN_00402808(local_18);
      iVar5 = extraout_EDX_03;
    }
    uVar6 = iVar5 + 1;
    if (SCARRY4(iVar5,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      uVar6 = extraout_EDX_04;
    }
    uVar7 = (int)uVar6 >> 1;
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + ((uVar6 & 1) != 0);
    }
    param_5[1] = uVar7;
    uVar6 = uVar2 - local_28;
    if (SBORROW4(uVar2,local_28)) {
      uVar6 = thunk_FUN_00402808(uVar6);
    }
    uVar2 = uVar6 + 1;
    if (SCARRY4(uVar6,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar6 = (int)uVar2 >> 1;
    local_10 = uVar6;
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + ((uVar2 & 1) != 0);
      local_10 = uVar6;
    }
  }
  else {
    iVar5 = local_1c - local_24;
    uVar2 = local_1c;
    if (SBORROW4(local_1c,local_24)) {
      uVar2 = thunk_FUN_00402808(local_1c);
      iVar5 = extraout_EDX_05;
    }
    uVar6 = iVar5 + 1;
    if (SCARRY4(iVar5,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      uVar6 = extraout_EDX_06;
    }
    uVar7 = (int)uVar6 >> 1;
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + ((uVar6 & 1) != 0);
    }
    *param_5 = uVar7;
    uVar6 = uVar2 - local_2c;
    if (SBORROW4(uVar2,local_2c)) {
      uVar6 = thunk_FUN_00402808(uVar6);
    }
    uVar2 = uVar6 + 1;
    if (SCARRY4(uVar6,1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar6 = (int)uVar2 >> 1;
    local_14 = uVar6;
    if ((int)uVar6 < 0) {
      uVar6 = uVar6 + ((uVar2 & 1) != 0);
      local_14 = uVar6;
    }
  }
  if ((local_2c == 0) || (local_24 == 0)) {
    uVar6 = 0;
    param_7 = 0;
  }
  if (param_8 == 0xffffffff) {
    if (param_7 == 0xffffffff) {
      piVar4 = &local_34;
      iVar5 = local_20 + local_28;
      if (SCARRY4(local_20,local_28)) {
        thunk_FUN_00402808(uVar6);
        piVar4 = extraout_ECX_00;
        iVar5 = extraout_EDX_07;
      }
      uVar2 = local_24 + local_2c;
      if (SCARRY4(local_24,local_2c)) {
        uVar2 = thunk_FUN_00402808(uVar2);
        piVar4 = extraout_ECX_01;
        iVar5 = extraout_EDX_08;
      }
      FUN_0040f7d0(uVar2,iVar5,piVar4);
      if (param_9 < 2) {
        uVar2 = local_1c - local_34;
        if (SBORROW4(local_1c,local_34)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
      }
      else {
        uVar2 = local_18 - local_30;
        if (SBORROW4(local_18,local_30)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
      }
      param_8 = (int)uVar2 / 3;
      param_7 = param_8;
    }
    else {
      piVar4 = &local_34;
      iVar5 = local_20 + param_7;
      if (SCARRY4(local_20,param_7)) {
        uVar6 = thunk_FUN_00402808(uVar6);
        piVar4 = extraout_ECX_02;
        iVar5 = extraout_EDX_09;
      }
      iVar8 = iVar5 + local_28;
      if (SCARRY4(iVar5,local_28)) {
        thunk_FUN_00402808(uVar6);
        piVar4 = extraout_ECX_03;
        iVar8 = extraout_EDX_10;
      }
      uVar2 = local_24 + param_7;
      if (SCARRY4(local_24,param_7)) {
        uVar2 = thunk_FUN_00402808(uVar2);
        piVar4 = extraout_ECX_04;
        iVar8 = extraout_EDX_11;
      }
      uVar6 = uVar2 + local_2c;
      if (SCARRY4(uVar2,local_2c)) {
        uVar6 = thunk_FUN_00402808(uVar6);
        piVar4 = extraout_ECX_05;
        iVar8 = extraout_EDX_12;
      }
      FUN_0040f7d0(uVar6,iVar8,piVar4);
      if (param_9 < 2) {
        uVar2 = local_1c - local_34;
        if (SBORROW4(local_1c,local_34)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
        uVar6 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          uVar6 = thunk_FUN_00402808(uVar6);
        }
        param_8 = (int)uVar6 >> 1;
        if ((int)param_8 < 0) {
          param_8 = param_8 + ((uVar6 & 1) != 0);
        }
      }
      else {
        uVar2 = local_18 - local_30;
        if (SBORROW4(local_18,local_30)) {
          uVar2 = thunk_FUN_00402808(uVar2);
        }
        uVar6 = uVar2 + 1;
        if (SCARRY4(uVar2,1)) {
          uVar6 = thunk_FUN_00402808(uVar6);
        }
        param_8 = (int)uVar6 >> 1;
        if ((int)param_8 < 0) {
          param_8 = param_8 + ((uVar6 & 1) != 0);
        }
      }
    }
  }
  else if (param_7 == 0xffffffff) {
    uVar2 = param_8 + local_20;
    if (SCARRY4(param_8,local_20)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    iVar5 = local_18 - uVar2;
    if (SBORROW4(local_18,uVar2)) {
      thunk_FUN_00402808(uVar2);
      iVar5 = extraout_EDX_13;
    }
    uVar2 = param_8 + local_24;
    if (SCARRY4(param_8,local_24)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar5 = extraout_EDX_14;
    }
    uVar6 = local_1c - uVar2;
    if (SBORROW4(local_1c,uVar2)) {
      uVar6 = thunk_FUN_00402808(uVar6);
      iVar5 = extraout_EDX_15;
    }
    FUN_0040f7d0(uVar6,iVar5,&local_34);
    if (param_9 < 2) {
      uVar2 = local_34 - local_2c;
      if (SBORROW4(local_34,local_2c)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      param_7 = (int)uVar2 >> 1;
      if ((int)param_7 < 0) {
        param_7 = param_7 + ((uVar2 & 1) != 0);
      }
    }
    else {
      uVar2 = local_30 - local_28;
      if (SBORROW4(local_30,local_28)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      param_7 = (int)uVar2 >> 1;
      if ((int)param_7 < 0) {
        param_7 = param_7 + ((uVar2 & 1) != 0);
      }
    }
  }
  if (param_9 == 0) {
    *param_5 = param_8;
    uVar2 = param_8 + local_24;
    if (SCARRY4(param_8,local_24)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar6 = uVar2 + param_7;
    uVar7 = local_10;
    if (SCARRY4(uVar2,param_7)) {
      uVar6 = thunk_FUN_00402808(uVar2 + param_7);
      uVar7 = local_10;
    }
  }
  else if (param_9 == 1) {
    uVar2 = local_1c - param_8;
    if (SBORROW4(local_1c,param_8)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar6 = uVar2 - local_24;
    if (SBORROW4(uVar2,local_24)) {
      uVar6 = thunk_FUN_00402808(uVar6);
    }
    *param_5 = uVar6;
    uVar2 = uVar6 - param_7;
    if (SBORROW4(uVar6,param_7)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar6 = uVar2 - local_2c;
    uVar7 = local_10;
    if (SBORROW4(uVar2,local_2c)) {
      uVar6 = thunk_FUN_00402808(uVar2 - local_2c);
      uVar7 = local_10;
    }
  }
  else if (param_9 == 2) {
    param_5[1] = param_8;
    uVar2 = param_8 + local_20;
    if (SCARRY4(param_8,local_20)) {
      uVar2 = thunk_FUN_00402808(uVar2);
    }
    uVar6 = local_14;
    uVar7 = uVar2 + param_7;
    if (SCARRY4(uVar2,param_7)) {
      uVar7 = thunk_FUN_00402808(uVar2 + param_7);
      uVar6 = local_14;
    }
  }
  else {
    uVar6 = local_14;
    uVar7 = local_10;
    if (param_9 == 3) {
      uVar2 = local_18 - param_8;
      if (SBORROW4(local_18,param_8)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uVar6 = uVar2 - local_20;
      if (SBORROW4(uVar2,local_20)) {
        uVar6 = thunk_FUN_00402808(uVar6);
      }
      param_5[1] = uVar6;
      uVar2 = uVar6 - param_7;
      if (SBORROW4(uVar6,param_7)) {
        uVar2 = thunk_FUN_00402808(uVar2);
      }
      uVar6 = local_14;
      uVar7 = uVar2 - local_28;
      if (SBORROW4(uVar2,local_28)) {
        uVar7 = thunk_FUN_00402808(uVar2 - local_28);
        uVar6 = local_14;
      }
    }
  }
  local_10 = uVar7;
  local_14 = uVar6;
  uVar2 = *param_3 + *param_11;
  if (SCARRY4(*param_3,*param_11)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  uVar6 = *param_5;
  *param_5 = *param_5 + uVar2;
  if (SCARRY4(uVar6,uVar2)) {
    thunk_FUN_00402808(uVar2);
  }
  uVar2 = param_3[1] + param_11[1];
  if (SCARRY4(param_3[1],param_11[1])) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  puVar1 = param_5 + 1;
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar2;
  if (SCARRY4(uVar6,uVar2)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  iVar5 = param_3[1] + local_10;
  if (SCARRY4(param_3[1],local_10)) {
    thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_16;
  }
  uVar2 = *param_11;
  iVar8 = iVar5 + uVar2;
  if (SCARRY4(iVar5,uVar2)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar8 = extraout_EDX_17;
  }
  iVar5 = *param_3 + local_14;
  if (SCARRY4(*param_3,local_14)) {
    uVar2 = thunk_FUN_00402808(uVar2);
    iVar5 = extraout_EDX_18;
  }
  dx = iVar5 + uVar2;
  if (SCARRY4(iVar5,uVar2)) {
    thunk_FUN_00402808(uVar2);
    dx = extraout_EDX_19;
  }
  OffsetRect(param_4,dx,iVar8);
  return;
}


