
/* ==== FUN_0042e4f0 @ 0042e4f0 ==== 
 * signature: undefined FUN_0042e4f0(void)
 * body: 0042e4f0-0042e8c0
 */

void FUN_0042e4f0(int *param_1,int *param_2)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  undefined4 uVar3;
  HCURSOR hCursor;
  int extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  UINT wMsgFilterMin;
  UINT wMsgFilterMax;
  UINT wRemoveMsg;
  undefined4 uStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 *puStack_4c;
  int iStack_48;
  int iStack_44;
  tagMSG tStack_40;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  tagPOINT tStack_10;
  int *piStack_8;
  
  bVar6 = 0;
  pcStack_5c = (code *)&stack0xfffffffc;
  puStack_4c = (undefined4 *)0x0;
  pcStack_60 = thunk_FUN_00403434;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  iVar1 = *param_2;
  piStack_8 = param_1;
  if (iVar1 < 0x203) {
    if (iVar1 == 0x202) {
      if (param_1[0x18] == 0) {
        pcStack_5c = (code *)&stack0xfffffffc;
        FUN_004069d4(param_2[2],&tStack_10.x);
        iVar1 = FUN_0042d1bc((int)piStack_8,&tStack_10.x,&iStack_14);
        if ((iVar1 != 0) && (iStack_14 == 0x14)) {
          piVar4 = *(int **)(iVar1 + 4);
          uVar3 = FUN_00402e8c(piVar4,(int)&PTR_TWinControl_vmt_000_00438554);
          if ((char)uVar3 == '\0') {
            TLabel_set_Visible(piVar4,0,extraout_ECX);
          }
          else {
            FUN_0043f110(piVar4,extraout_EDX,extraout_ECX);
          }
        }
      }
      else {
        pcStack_5c = (code *)&stack0xfffffffc;
        FUN_0042e110((int)param_1);
      }
    }
    else if (iVar1 == 0x20) {
      pcStack_5c = (code *)&stack0xfffffffc;
      GetCursorPos(&tStack_10);
      FUN_00424398((int *)piStack_8[5],&tStack_10.x,&iStack_48);
      tStack_10.x = iStack_48;
      tStack_10.y = iStack_44;
      if (((((short)param_2[2] == 1) &&
           (iVar1 = FUN_0042a8b4((int *)piStack_8[5]), iVar1 == param_2[1])) &&
          (iVar1 = FUN_00429240(piStack_8[5]), 0 < iVar1)) &&
         ((iVar1 = FUN_0042d1bc((int)piStack_8,&tStack_10.x,&iStack_14), iVar1 != 0 &&
          (iStack_14 == 0x12)))) {
        hCursor = (HCURSOR)FUN_00440610(*(int *)PTR_DAT_00446d84,
                                        (int)*(short *)(&DAT_0044673c +
                                                       (uint)*(byte *)(*(int *)(iVar1 + 0x14) + 0x10
                                                                      ) * 2));
        SetCursor(hCursor);
        param_2[3] = 1;
        goto LAB_0042e8ab;
      }
    }
    else if (iVar1 == 0x200) {
      pcStack_5c = (code *)&stack0xfffffffc;
      if (param_1[0x18] != 0) {
        pcStack_5c = (code *)&stack0xfffffffc;
        FUN_0042e1c0((int)param_1);
        FUN_004069d4(param_2[2],&iStack_48);
        piStack_8[0x14] = iStack_48;
        piStack_8[0x15] = iStack_44;
        FUN_0042e45c();
        FUN_0042e1c0((int)piStack_8);
      }
    }
    else {
      pcStack_5c = (code *)&stack0xfffffffc;
      if (iVar1 == 0x201) {
        pcStack_5c = (code *)&stack0xfffffffc;
        FUN_004069d4(param_2[2],&tStack_10.x);
        iVar1 = FUN_0042d1bc((int)piStack_8,&tStack_10.x,&iStack_14);
        if (iVar1 != 0) {
          if (iStack_14 == 0x12) {
            FUN_0042e0b0((int)piStack_8,iVar1,&tStack_10.x);
          }
          else if (iStack_14 == 2) {
            wRemoveMsg = 0;
            wMsgFilterMax = 0x203;
            wMsgFilterMin = 0x203;
            hWnd = (HWND)FUN_0042a8b4((int *)piStack_8[5]);
            BVar2 = PeekMessageA(&tStack_40,hWnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg);
            if ((BVar2 == 0) &&
               (uVar3 = FUN_00402e8c(*(int **)(iVar1 + 4),(int)&PTR_TWinControl_vmt_000_00420fa8),
               (char)uVar3 != '\0')) {
              (**(code **)(**(int **)(iVar1 + 4) + 0xb0))();
            }
            piVar4 = *(int **)(iVar1 + 4);
            if ((*(char *)((int)piVar4 + 0x8b) == '\x01') &&
               (*(char *)((int)piVar4 + 0x4d) == '\x01')) {
              FUN_00424e20(piVar4,'\0',-1);
            }
            goto LAB_0042e8ab;
          }
        }
      }
    }
  }
  else if (iVar1 == 0x203) {
    FUN_004069d4(param_2[2],&iStack_48);
    iVar1 = FUN_0042d1bc((int)piStack_8,&iStack_48,&iStack_14);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) && (iStack_14 == 2)) {
      FUN_0042320c();
      FUN_00425318(*(int **)(iVar1 + 4),(int *)0x0,0,1);
    }
  }
  else {
    if (iVar1 == 0xb030) {
      pcStack_5c = (code *)&stack0xfffffffc;
      (*(code *)param_1[0xc])(param_1[0xd],param_2);
      if (param_2[3] == 0) {
        iVar1 = (**(code **)(*piStack_8 + 4))(piStack_8,param_2[2] + 0x28,&iStack_14);
        if (iStack_14 == 0x12) {
          FUN_004039b8((int *)(param_2[2] + 0x38));
        }
        else if ((iVar1 != 0) && ((iStack_14 == 2 || (iStack_14 == 0x14)))) {
          FUN_004241fc(iVar1,&iStack_24);
          (**(code **)*piStack_8)(piStack_8,iVar1,&iStack_24);
          iStack_24 = *(int *)(iVar1 + 0x30) * 2 - iStack_24;
          iStack_20 = *(int *)(iVar1 + 0x34) * 2 - iStack_20;
          iStack_1c = *(int *)(iVar1 + 0x38) * -2 + iStack_1c * 3 + iStack_24 * -2;
          iStack_18 = *(int *)(iVar1 + 0x3c) * -2 + iStack_18 * 3 + iStack_20 * -2;
          TLabel_get_Caption(iVar1,(int *)&puStack_4c);
          FUN_00403a0c((int *)(param_2[2] + 0x38),puStack_4c);
          piVar4 = &iStack_24;
          piVar5 = (int *)(param_2[2] + 0x18);
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar5 = *piVar4;
            piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
            piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
          }
        }
      }
      goto LAB_0042e8ab;
    }
    pcStack_5c = (code *)&stack0xfffffffc;
    if ((iVar1 == 0xb042) && (pcStack_5c = (code *)&stack0xfffffffc, *(int *)param_2[2] == 0xb00b))
    {
      pcStack_5c = (code *)&stack0xfffffffc;
      FUN_0042e3f0(param_1,param_2[1],((int *)param_2[2])[1]);
    }
  }
  (*(code *)piStack_8[0xc])(piStack_8[0xd],param_2);
LAB_0042e8ab:
  *in_FS_OFFSET = uStack_64;
  pcStack_5c = FUN_0042e8c8;
  pcStack_60 = (code *)0x42e8c0;
  FUN_004039b8((int *)&puStack_4c);
  return;
}


