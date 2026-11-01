
/* ==== TCustomForm.dyn_b019 @ 0043eaa8 ==== 
 * signature: undefined TCustomForm.dyn_b019(void)
 * body: 0043eaa8-0043eb5f;0043eb77-0043eefe;0043ef16-0043eff7
 * note: Name source: Delphi dynamic method table
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Name source: Delphi dynamic method table */

void TCustomForm_dyn_b019(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  WPARAM WVar5;
  HWND pHVar6;
  uint uVar7;
  BOOL BVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar9;
  HWND hWnd;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  HWND pHVar11;
  UINT UVar12;
  int iVar13;
  LPARAM lParam;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_c = (undefined4 *)0x0;
  puStack_20 = &UNK_0043f015;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  piStack_8 = param_1;
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) &&
     (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 0xb3) & 4) != 0)) {
    puStack_28 = (undefined1 *)0x43eae9;
    FUN_00405298(_DAT_00446d98,(int *)&puStack_c);
    puStack_28 = (undefined1 *)0x43eaf8;
    piVar2 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',puStack_c);
    puStack_28 = (undefined1 *)0x43eafd;
    FUN_0040346c(piVar2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  puStack_28 = (undefined1 *)0x43eb07;
  FUN_00442a4c(DAT_004477c4);
  *(byte *)(piStack_8 + 0xb3) = *(byte *)(piStack_8 + 0xb3) | 4;
  puStack_2c = &UNK_0043eff8;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if ((*(byte *)(piStack_8 + 8) & 0x10) == 0) {
    if ((char)piStack_8[0x5a] == '\0') {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffc4;
      puStack_28 = &stack0xfffffffc;
      FUN_00402ef0(piStack_8,0,extraout_ECX);
      *in_FS_OFFSET = uVar4;
      if (*(int **)(DAT_004477c8 + 0x60) == piStack_8) {
        FUN_0043dd68((int)piStack_8,'\0');
      }
      if (*(char *)((int)piStack_8 + 0x217) == '\x01') {
        FUN_00427e1c(piStack_8);
      }
      else if ((*(byte *)(piStack_8 + 0xb3) & 8) == 0) {
        hWnd = (HWND)0x0;
        pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
        pHVar11 = GetActiveWindow();
        if (pHVar6 == pHVar11) {
          pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
          BVar8 = IsIconic(pHVar6);
          if (BVar8 == 0) {
            iVar3 = FUN_0042a8b4(piStack_8);
            hWnd = (HWND)FUN_00439a7c(iVar3);
          }
        }
        if (hWnd == (HWND)0x0) {
          iVar3 = 0;
          pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
          ShowWindow(pHVar6,iVar3);
        }
        else {
          UVar12 = 0x97;
          iVar13 = 0;
          iVar10 = 0;
          iVar9 = 0;
          iVar3 = 0;
          pHVar11 = (HWND)0x0;
          pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
          SetWindowPos(pHVar6,pHVar11,iVar3,iVar9,iVar10,iVar13,UVar12);
          SetActiveWindow(hWnd);
        }
      }
      else {
        UVar12 = 0x97;
        iVar13 = 0;
        iVar10 = 0;
        iVar9 = 0;
        iVar3 = 0;
        pHVar11 = (HWND)0x0;
        pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
        SetWindowPos(pHVar6,pHVar11,iVar3,iVar9,iVar10,iVar13,UVar12);
      }
    }
    else {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffc4;
      puStack_28 = &stack0xfffffffc;
      FUN_00402ef0(piStack_8,0,extraout_ECX);
      *in_FS_OFFSET = uVar4;
      if (((char)piStack_8[0x86] == '\x04') ||
         (((char)piStack_8[0x86] == '\x06' && (*(char *)((int)piStack_8 + 0x217) == '\x01')))) {
        if (*(char *)((int)piStack_8 + 0x217) == '\x01') {
          iVar3 = TForm_get_ClientWidth(*(int **)(DAT_004477c4 + 0x38));
          iVar9 = iVar3 - piStack_8[0xe] >> 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + (uint)((iVar3 - piStack_8[0xe] & 1U) != 0);
          }
          iVar3 = TForm_get_ClientHeight(*(int **)(DAT_004477c4 + 0x38));
          iVar10 = iVar3 - piStack_8[0xf] >> 1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + (uint)((iVar3 - piStack_8[0xf] & 1U) != 0);
          }
        }
        else {
          iVar3 = FUN_00440178();
          iVar9 = iVar3 - piStack_8[0xe] >> 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + (uint)((iVar3 - piStack_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044016c();
          iVar10 = iVar3 - piStack_8[0xf] >> 1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + (uint)((iVar3 - piStack_8[0xf] & 1U) != 0);
          }
        }
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        (**(code **)(*piStack_8 + 0x7c))(piStack_8,iVar9,iVar10);
        if (*(char *)((int)piStack_8 + 0x47) != '\0') {
          FUN_0043d064(piStack_8);
        }
      }
      else if ((byte)((char)piStack_8[0x86] - 6U) < 2) {
        iVar3 = *(int *)(DAT_004477c4 + 0x38);
        if ((char)piStack_8[0x86] == '\a') {
          uVar4 = FUN_00402e8c((int *)piStack_8[1],(int)&PTR_TWinControl_vmt_000_00438554);
          if ((char)uVar4 != '\0') {
            iVar3 = piStack_8[1];
          }
        }
        if (iVar3 == 0) {
          iVar3 = FUN_00440178();
          iVar9 = iVar3 - piStack_8[0xe] >> 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + (uint)((iVar3 - piStack_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044016c();
          iVar10 = iVar3 - piStack_8[0xf] >> 1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + (uint)((iVar3 - piStack_8[0xf] & 1U) != 0);
          }
        }
        else {
          uVar7 = *(int *)(iVar3 + 0x38) - piStack_8[0xe];
          iVar9 = (int)uVar7 >> 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + (uint)((uVar7 & 1) != 0);
          }
          iVar9 = iVar9 + *(int *)(iVar3 + 0x30);
          uVar7 = *(int *)(iVar3 + 0x3c) - piStack_8[0xf];
          iVar10 = (int)uVar7 >> 1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + (uint)((uVar7 & 1) != 0);
          }
          iVar10 = iVar10 + *(int *)(iVar3 + 0x34);
        }
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        (**(code **)(*piStack_8 + 0x7c))(piStack_8,iVar9,iVar10);
        if (*(char *)((int)piStack_8 + 0x47) != '\0') {
          FUN_0043d064(piStack_8);
        }
      }
      else if ((char)piStack_8[0x86] == '\x05') {
        if (*(char *)((int)piStack_8 + 0x217) == '\x01') {
          iVar3 = TForm_get_ClientWidth(*(int **)(DAT_004477c4 + 0x38));
          iVar9 = iVar3 - piStack_8[0xe] >> 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + (uint)((iVar3 - piStack_8[0xe] & 1U) != 0);
          }
          iVar3 = TForm_get_ClientHeight(*(int **)(DAT_004477c4 + 0x38));
          iVar10 = iVar3 - piStack_8[0xf] >> 1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + (uint)((iVar3 - piStack_8[0xf] & 1U) != 0);
          }
        }
        else {
          iVar3 = FUN_004401a8();
          iVar9 = iVar3 - piStack_8[0xe] >> 1;
          if (iVar9 < 0) {
            iVar9 = iVar9 + (uint)((iVar3 - piStack_8[0xe] & 1U) != 0);
          }
          iVar3 = FUN_0044019c();
          iVar10 = iVar3 - piStack_8[0xf] >> 1;
          if (iVar10 < 0) {
            iVar10 = iVar10 + (uint)((iVar3 - piStack_8[0xf] & 1U) != 0);
          }
        }
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        if (iVar10 < 0) {
          iVar10 = 0;
        }
        (**(code **)(*piStack_8 + 0x7c))(piStack_8,iVar9,iVar10);
      }
      *(undefined1 *)(piStack_8 + 0x86) = 0;
      if (*(char *)((int)piStack_8 + 0x217) == '\x01') {
        if (*(char *)((int)piStack_8 + 0x213) == '\x02') {
          lParam = 0;
          WVar5 = FUN_0042a8b4(piStack_8);
          SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x223,WVar5,lParam);
          iVar3 = 3;
          pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
          ShowWindow(pHVar6,iVar3);
        }
        else {
          iVar3 = *(int *)((uint)*(byte *)((int)piStack_8 + 0x213) * 4 + 0x446908);
          pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
          ShowWindow(pHVar6,iVar3);
          uVar7 = piStack_8[0xe] | piStack_8[0xf] << 0x10;
          WVar5 = 0;
          UVar12 = 5;
          pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
          CallWindowProcA((WNDPROC)&DAT_00406528,pHVar6,UVar12,WVar5,uVar7);
          FUN_00424a28(piStack_8,extraout_EDX,extraout_ECX_00);
        }
        SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x234,0,0);
      }
      else {
        iVar3 = *(int *)((uint)*(byte *)((int)piStack_8 + 0x213) * 4 + 0x446908);
        pHVar6 = (HWND)FUN_0042a8b4(piStack_8);
        ShowWindow(pHVar6,iVar3);
      }
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(byte *)(piStack_8 + 0xb3) = *(byte *)(piStack_8 + 0xb3) & 0xfb;
  return;
}


